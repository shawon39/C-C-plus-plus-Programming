#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int m,n,a,x,y;
    cin >> m >> n >> a;

    x = m/a;
    y = n/a;

    if(m%a!=0) x++;
    if(n%a!=0) y++;

    cout << x*y <<endl;

    return 0;
}

