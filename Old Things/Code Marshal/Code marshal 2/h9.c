#include <stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i=1;i<num+1;i++){
        if(num%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
