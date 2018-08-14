#include <stdio.h>
#include <string.h>

struct student
{

    char name[20];
    int id;
    double cgpa;
}/*info[10]*/;

void funct(struct student info[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("\n%s\n",info[i].name);
        printf("%d\n",info[i].id);
        printf("%.2lf\n\n",info[i].cgpa);
    }
}
int main()
{

    //freopen("st.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    struct student info[10];
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%s",info[i].name);
        scanf("%d",&info[i].id);
        scanf("%lf",&info[i].cgpa);
    }
    funct(info);
    return 0;
}


/**
Shawon 123 3.23
sharif 234 3.45
arib 237 2.34
wizard 765 3.45
archer 345 7.544
*/
