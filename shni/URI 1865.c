#include<stdio.h>
int main()
{
    char ch[10];
    int a,b,i;
scanf("%d",&a);
    for(i=1;i<=a;i++)
   {
       scanf("%s %d",ch,&b);
    if(ch[1]=='h')
    {
        printf("Y\n");
    }
    else
        printf("N\n");
   }
   return 0;
}
