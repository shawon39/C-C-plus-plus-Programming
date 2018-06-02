#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a;
    cin >> l >> r >> a;

    while(1)
    {
        if(a==0) {
            cout << min(l,r) * 2 <<endl;
            return 0;
            //main();
        }
        if(l>=r) r++;
        else l++;
        a--;
    }
}

