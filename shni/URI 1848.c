#include<stdio.h>
int main()
{
    int i,a,sum=0;
    char ch[10];
    for(i=1; i<=3; i++,sum=0)
    {

        while(1)
        {
            gets(ch);
            if  (ch[0]=='c')break;
       if((ch[0]=='-') && (ch[1]=='-') && (ch[2]=='*'))
            {
                sum = sum+1;
            }
            else if((ch[0]=='-') && (ch[1]=='*') && (ch[2]=='-'))
            {
                sum = sum+2;
            }
 else if((ch[0]=='-') && (ch[1]=='*') && (ch[2]=='*'))
            {
                sum = sum+3;
            }
            else if((ch[0]=='*') && (ch[1]=='-') && (ch[2]=='-'))
            {
                sum = sum+4;
            }
           else if((ch[0]=='*') && (ch[1]=='-') && (ch[2]=='*'))
            {
                sum = sum+5;
            }
           else if((ch[0]=='*') && (ch[1]=='*') && (ch[2]=='-'))
            {
                sum = sum+6;
            }
             else if((ch[0]=='*') && (ch[1]=='*') && (ch[2]=='*'))
            {
                sum = sum+7;
            }
        }
        printf("%d\n",sum);
    }
}
