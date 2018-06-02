#include <stdio.h>
#include <math.h>
int main()
{
    int T,i=1,r1,c1,r2,c2,x,y;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d %d", &r1,&c1,&r2,&c2);
        x = abs(r1-r2);
        y = abs(c1-c2);

        if(x==y)
        {
            printf("Case %d: 1\n",i++);
        }

        else if( ((r1%2==0 && c1%2==0) || (r1%2==1 && c1%2==1)) && ((r2%2==0 && c2%2==0) || (r2%2==1 && c2%2==1)) ||
               ( ((r1%2==1 && c1%2==0) || (r1%2==0 && c1%2==1)) && ((r2%2==0 && c2%2==1) || (r2%2==1 && c2%2==0)) ) )
        {
            printf("Case %d: 2\n",i++);

        }
        else
        {
            printf("Case %d: impossible\n",i++);
        }
    }
    return 0;
}

/*

if(r1<r2 && c1<c2){
                while(r1<=r2 && c1<=c2){
                    if(r1==r2 && c1==c2){
                        printf("Case %d: 1\n",i++);
                        z=1;
                    }
                    r1++;
                    c1++;
                }
            }
            else if(r1>r2 && c1>c2){
                while(r1>=r2 && c1>=c2){
                    if(r1==r2 && c1==c2){
                        printf("Case %d: 1\n",i++);
                        z=1;
                    }
                    r1--;
                    c1--;
                }
            }
            else if(r1<r2 && c1>c2){
                while(r1<=r2 && c1>=c2){
                    if(r1==r2 && c1==c2){
                        printf("Case %d: 1\n",i++);
                        z=1;
                    }
                    r1++;
                    c1--;
                }
            }
            else if(r1>r2 && c1<c2){
                while(r1>=r2 && c1<=c2){
                    if(r1==r2 && c1==c2){
                        printf("Case %d: 1\n",i++);
                        z=1;
                    }
                    r1--;
                    c1++;
                }
            }

*/
