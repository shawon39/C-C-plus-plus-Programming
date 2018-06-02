#include <bits/stdc++.h>
using namespace std;

void file() {
    #ifndef lol
      freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    //file();

    int n,a; cin >> n;
    int pos=0, neg=0; //mx =-10000;

    for(int i=0; i<n; i++)
    {
        cin >> a;
        //mx = max(mx, a);
        if(a>0) pos += a;
        else neg += a;
    }

    if(neg == 0) {
        cout << pos <<endl;
    }else if(pos == 0) {
        cout << abs(neg) <<endl;
    } else {
        cout << pos - neg <<endl;
    }
    return 0;

}
