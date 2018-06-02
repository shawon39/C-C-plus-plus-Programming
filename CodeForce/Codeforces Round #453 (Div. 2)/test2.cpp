#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,f=1,lol,muriKha,mx=0;
    int a[110],b[110];
    cin >> n >> m;

    for(int i=0; i<n; i++) {
            cin >> a[i] >> b[i];
            if(a[i]==0){
                lol=1;
            }
    }

    if(b[n-1]!=m || lol!=1 ) { cout << "NO" <<endl; return 0; }

    for(int i=0; i<n; i++)
    {
        if(a[i] <= mx){
            mx = max(b[i],mx);
            continue;
        }
        else {f=0; break;}
    }

    (f==1)? cout << "YES" <<endl : cout << "NO" <<endl;

    return 0;
}


