#include <stdio.h>
int main()
{
    int T,i,j,N,digit[100],temp,temp2;
    scanf("%d",&T);
    while(T--) {

        for(i=0; i<=9; i++) {
            digit[i]=0;
        }
        scanf("%d",&N);
        for(i=1; i<=N; i++) {

            if(i<10){
                digit[i]++;
            }
            else{
                temp = i;
                while( temp > 0)
                {
                    temp2 = temp%10;
                    digit[temp2]++;
                    temp = temp / 10;
                }
            }
        }
        for(i=0; i<=9; i++)
        {
            printf("%d",digit[i]);
            if(i!=9) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
