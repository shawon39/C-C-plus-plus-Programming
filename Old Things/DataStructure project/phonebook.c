 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int id;
struct Node{
    char name[30];
    char number[30];
    struct Node *left, *right;
};
typedef struct Node node;

int insert(node **pb, char name[], char numb[]){
    if(!(*pb)){
        node *tmp=(node *)malloc(sizeof(node));
        strcpy(tmp->name, name);
        strcpy(tmp->number, numb);
        tmp->left=tmp->right=NULL;
        *pb=tmp;
        return 1;
    }
    if(strcmp(name, (*pb)->name)==0 || strcmp(numb, (*pb)->number)==0){
        printf("\n-The name or number already exists\n");
        return 0;
    }
    else if(strcmp(name, (*pb)->name)<0)
        return insert(&(*pb)->left, name, numb);
    else
        return insert(&(*pb)->right, name, numb);
}

void pbprint(node *pb){
    if(pb){
        pbprint(pb->left);
        printf("\n- %d.\t%s\n\t%s\n",id++, pb->name, pb->number);
        pbprint(pb->right);
    }
}

void search(node *pb, char name[]){
    if(!pb){
        id=0;
        printf("\n-Contact not found\n");
        return;
    }
    if(strcmp(name, pb->name)==0){
        printf("\n-Contact found\n");
        printf("-Name: %s\n-Phone: %s\n",pb->name,pb->number);
        return;
    }
    if(strcmp(name, pb->name)<0)
        search(pb->left, name);
    else
        search(pb->right, name);
}

int main(){
    node *phonebook=NULL;
    int in,f, tmp;
    char name[30], number[30];
    printf("-----     Gulam Rabbi's PhoneBook     -----\n");
    while(1){
        printf("\nChoose an option from below\n");
        printf("--- 1. Add new contact\n");
        printf("--- 2. Search contact\n");
        printf("--- 3. Show all contacts\n");
        printf("--- 4. Exit PhoneBook\n\n");
        scanf("%d", &in);
        if(in==1){
            while(1){
                f=0;
                printf("Insert a name:\n\t");
                scanf(" %s", name);
                printf("Insert his/her number:\n\t");
                scanf(" %s", number);
                f=insert(&phonebook, name, number);
                if(!f){
                    printf("Try again?\n-1.Yes\n-2.No\n");
                    scanf("%d", &tmp);
                    if(tmp==2)
                        break;
                }
                else{
                    printf("\n-Contact saved\n");
                    break;
                }
            }
        }
        else if(in==2){
            while(1){
                id=1;
                printf("Insert a name to search\n");
                scanf(" %s", name);
                search(phonebook, name);
                if(id) break;
                else{
                    printf("Try again?\n-1.Yes\n-2.No\n");
                    scanf("%d", &tmp);
                    if(tmp==2)
                        break;
                }
            }
        }
        else if(in==3){
            id=1;
            pbprint(phonebook);
            if(id==1)
                printf("-Your PhoneBook is empty\n");
        }
        else if(in==4){
            printf("-PhoneBook terminated\n");
            break;
        }
        else{
            printf("-Invalid input\n");
            continue;
        }
    }
    return 0;
}
