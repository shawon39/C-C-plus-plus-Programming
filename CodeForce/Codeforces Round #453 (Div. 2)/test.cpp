#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,f=0,lol;
    int a[110],b[110],c[110]={0};
    cin >> n >> m;

    for(int i=0; i<n; i++) {
            cin >> a[i] >> b[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int k = a[i]; k<b[i]; k++){
            c[k]=1;
        }
    }
    int l=0;
    for(int i=0; i<m; i++){
        if(c[i]==1) l++;
    }

    (l==m)? cout << "YES" <<endl : cout << "NO" <<endl;

    return 0;
}

