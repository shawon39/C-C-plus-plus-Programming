#include <stdio.h>
int main()
{
    int x,y,right,wrong,a,b;
    right=0;
    wrong=0;

    scanf("%d%d",&a,&b);

    for(x=a;x<=b;x+=5){
        printf("What is %d + %d??\n",x,x);
        scanf("%d",&y);

        if(y==x+x){
            printf("Right\n");
            right++;
        }
        else{
            printf("....Sorry!! you are wrong!!\n");
            printf("Right ans is %d\n",x+x);
            wrong++;
        }
    }
    printf("You got %d right and %d wrong\n",right,wrong);
    return 0;
}
