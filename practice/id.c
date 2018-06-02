#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i,j=0,k=0;
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='0') a=a+1;
        else if(str[i]=='1') b=b+1;
        else if(str[i]=='2') c=c+1;
        else if(str[i]=='3') d=d+1;
        else if(str[i]=='4') e=e+1;
        else if(str[i]=='5') f=f+1;
        else if(str[i]=='6') g=g+1;
        else if(str[i]=='7') h=h+1;
        else if(str[i]=='8') j=j+1;
        else if(str[i]=='9') k=k+1;
        else continue;
    }
    printf("digit 0 have %d time\n",a);
    printf("digit 1 have %d time\n",b);
    printf("digit 2 have %d time\n",c);
    printf("digit 3 have %d time\n",d);
    printf("digit 4 have %d time\n",e);
    printf("digit 5 have %d time\n",f);
    printf("digit 6 have %d time\n",g);
    printf("digit 7 have %d time\n",h);
    printf("digit 8 have %d time\n",j);
    printf("digit 9 have %d time\n",k);

    return 0;
}





