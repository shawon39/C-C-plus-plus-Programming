

#include <stdio.h>
int main()
{
    int num,array[100][100],i,j,h,f,g;
    while(scanf("%d",&num)!=EOF){
        int a=0,b=0,c,m=1,x=0,y=1,d=0,n=1,w;
        w=num;
        if(num==0) break;
        else
        {
            for(f=0; f<num; f++){
                for(g=0; g<num; g++){
                    array[f][g]=1;
                }
            }
            for(c=0; c<num; c++){
                n=1;
                for(f=a; f<num; f++){
                    for(g=b; g<num; g++){
                        array[f][g]=n;
                        n++;
                    }
                }
                a++; b++; w--;
            }
            a=0,b=0,c,m=1,x=0,y=1,d=num-1,n,w;
            for(c=0; c<num; c++){
                n=num-d;
                for(f=a; f<m; f++){
                    for(g=b; g<y; g++){
                        array[f][g]=n;
                        n--;
                    }
                }
                d--; a++; m++; y++;
            }
            for(f=0; f<num; f++){
                for(g=0; g<num; g++){
                    if(g==0) printf("%3d",array[f][g]);
                    else printf(" %3d",array[f][g]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
