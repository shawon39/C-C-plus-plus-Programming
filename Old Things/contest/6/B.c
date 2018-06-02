#include <stdio.h>
int main()
{
    int num,n,nm,t;
    scanf("%d",&num);
    while(1)
    {
        int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
        num=num+1;
        n=num;
        t=num;
        while(n)
        {
            nm=n%10;
            if(nm==0) count0++;
            else if(nm==1) count1++;
            else if(nm==2) count2++;
            else if(nm==3) count3++;
            else if(nm==4) count4++;
            else if(nm==5) count5++;
            else if(nm==6) count6++;
            else if(nm==7) count7++;
            else if(nm==8) count8++;
            else if(nm==9) count9++;
            n=n/10;
        }
        if(count0<2 && count1<2 && count2<2 && count3<2 && count4<2 && count5<2 && count6<2 && count7<2 && count8<2 && count9<2)
        {
            printf("%d\n",t);
            break;
        }
    }
    return 0;
}
