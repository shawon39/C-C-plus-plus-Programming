#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    char ch[10000];

    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,x=0,y=0;

    for(int i=0; i<n; i++)
    {
        cin >> ch[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if(ch[i]=='L'){
            b = 0;
            for(int j=i+1; j<n; j++){
                if(ch[j]=='.'){
                    b++;
                }
                if(ch[j]=='L'){
                    break;
                }
                if(ch[j]=='R'){
                    c = c+b;
                    break;
                }
            }
            x=1;
        }
    }

    for(int i=0; i<n-1; i++)
    {
        if(ch[i]=='R'){
            d = 0;
            for(int j=i+1; j<n; j++){
                if(ch[j]=='.'){
                    d++;
                }
                if(ch[j]=='R'){
                    break;
                }
                if(ch[j]=='L'){
                    if(d%2==0) k+=0;
                    else k+=1;
                    break;
                }
            }
            y=1;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(ch[i]=='.'){
            f++;
        }
        if(ch[i]=='L'){
            f=0;
            break;
        }
        if(ch[i]=='R'){
            break;
        }
    }

    for(int i=n; i>=0 && (x==1 || y==1) ; i--)
    {
        if(ch[i]=='.'){
            g++;
        }
        if(ch[i]=='L'){
            break;
        }
        if(ch[i]=='R'){
            g =0;
            break;
        }
    }

    //cout << c << " " << k << " " << f << " " << g <<endl;
    cout << (c+k+f+g) <<endl;
    return 0;

}
