#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int M,n,i,j,k,x,y,t,z;
    string m;
    char dir;

    while(scanf("%d %d",&M,&n)!=EOF){

        x=0, y=0,z=1;
        dir='r';

        for(k=0; k<n; k++){

            cin >> m;
            scanf("%d",&t);

            if(m.compare("MOVE")==0){

                if(dir=='r')  x=x+t;

                else if(dir=='u')  y=y+t;

                else if(dir=='l')  x=x-t;

                else if(dir=='d')  y=y-t;

            }
                if(m.compare("TURN")==0){

                if(dir=='r'){

                    if(t==0) dir='u';

                    else dir='d';
                }
                else if(dir=='u'){

                    if(t==0) dir='l';

                    else dir='r';
                }
                else if(dir=='l'){

                    if(t==0) dir='d';

                    else  dir='u';
                }
                else if(dir=='d'){

                    if(t==0) dir='r';

                    else dir='l';
                }

            }

            if(x<0 || x>M || y<0 || y>M){
                z=0;
            }
        }

        if(z==1){
            printf("%d %d\n",x,y);
        }
        else{
             printf("-1\n");
        }
    }
    return 0;
}
