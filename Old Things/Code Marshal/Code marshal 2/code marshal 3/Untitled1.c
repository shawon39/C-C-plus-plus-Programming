#include<stdio.h>
int main()
{
    int i,j,lenght=9,height=4,k,t;
    scanf("%d",&t);
    while(t--){
            for(i=0;i<lenght;i++){
            printf("*");
        }
        for(k=0;k<2;k++){
                printf("\n\n");
            for(j=0;j<lenght;j++){
                  if(j==0 || j==8) {
                    printf("*");
                  }
                  else{
                    printf(" ");
                  }
               }
        }
        printf("\n\n");
        for(i=0;i<lenght;i++){
            printf("*");
        }
        printf("\n\n");

    }

    return 0;
}

