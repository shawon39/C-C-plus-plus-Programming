#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

int ct;

int check(int temp){

    if(temp%10==7){
        return ct;
    }
    else return -1;

}

int main()
{
    int n, h, m, ct=0,lol;
    cin >> n >> h >> m;

    lol = check(h);
    if(lol!=-1) {cout << ct <<endl; return 0; }
    lol = check(m);
    if(lol!=-1) {cout << ct <<endl; return 0; }

    while(1) {
        ct++;
        m-=n;

        if(h<0){
            h+=24;
        }

        if(m>=0)
        {
            lol = check(m);
            if(lol!=-1) {cout << ct <<endl; return 0; }
        }
        else
        {
            h--;
            lol = check(h);
            if(lol!=-1) {cout << ct <<endl; return 0; }
            m = (60+m);
            lol = check(m);
            if(lol!=-1) {cout << ct <<endl; return 0; }

        }
    }
    return 0;
}


