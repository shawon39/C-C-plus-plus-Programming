#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++){
        if(i%3==0){
            printf("\n Start");
            continue;
            printf("\n End");
        }
        else if(i%4==0){
            printf("\nWe are dead");
            break;
        }
        printf("\n Index is %d",i);
    }
    return 0;
}
