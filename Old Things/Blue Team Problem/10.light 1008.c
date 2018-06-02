#include <stdio.h>
int main()
{
    long long int i,t,k,j,value,array[5][5];
    scanf("%lld",&t);
    for(k=1; k<=t; k++)
    {
        array[0][0]=1;
        array[0][1]=2;
        array[0][2]=9;
        array[0][3]=10;
        array[0][4]=25;
        array[1][0]=4;
        array[1][1]=3;
        array[1][2]=8;
        array[1][3]=11;
        array[1][4]=24;
        array[2][0]=5;
        array[2][1]=6;
        array[2][2]=7;
        array[2][3]=12;
        array[2][4]=23;
        array[3][0]=16;
        array[3][1]=15;
        array[3][2]=14;
        array[3][3]=13;
        array[3][4]=22;
        array[4][0]=17;
        array[4][1]=18;
        array[4][2]=19;
        array[4][3]=20;
        array[4][4]=21;
        scanf("%lld",&value);

        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(value==array[i][j])
                {
                    printf("Case %lld: %lld %lld\n",k,i+1,j+1);
                }
            }
        }
    }
    return 0;
}
