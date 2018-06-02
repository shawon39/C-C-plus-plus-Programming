#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=80){
        printf("A+\n");
    }
    else if(x>=70){
        printf("A\n");
    }
    else if(x>=60){
        printf("A-\n");
    }
    else if(x>=50){
        printf("B\n");
    }
    else if(x>=40){
        printf("C\n");
    }
    else if(x>=30){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
    return 0;
}
