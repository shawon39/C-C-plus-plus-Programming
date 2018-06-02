


#include <stdio.h>
int main()
{
    int a,i,j;
    while(scanf("%d",&a)!=EOF){
        int k=1,array[110][110],x=0,y=0,m=0,r,f,s,t,g=a;
        if(a==0) break;
        else{
            if(a%2==0) r=a/2;
            else r = a/2+1;
            for(f=m; f<r; f++){
                for(i=x; i<a; i++){
                    for(j=y; j<a; j++){
                        array[i][j]=k;
                    }
                }
                x++;
                y++;
                a--;
                k++;
            }
        }
        for(s=0; s<g; s++){
            for(t=0; t<g; t++){
                if(t==0) printf("%3d",array[s][t]);
                else printf(" %3d",array[s][t]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

