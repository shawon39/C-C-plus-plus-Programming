#include <bits/stdc++.h>
using namespace std;

#define node unsigned long long int

void file() {
    #ifndef lol
      freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    file();
    node a,b; cin >> a >> b;

    while(1)
    {
        if( a==0 || b == 0) {
            break;
        }
        else if( a/2 >= b ) {
            a = a% (2*b);
        }
        else if( b/2 >= a ) {
            b = b% (2*a);
        }
        else break;
    }
    cout << a << " " << b <<endl;
    return 0;
}
