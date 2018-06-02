#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ghanophobia.in", "r", stdin);
    int test, i=0; cin >> test;

    while(test--)
    {
        char ch; i++;
        int egypt, ghana, g, e;

        scanf("%d%c%d", &e,&ch,&g);

        egypt = 1 + e;
        ghana = 6 + g;

        if( egypt > ghana ) {
            cout << "Case " << i <<": YES" <<endl;
        }
        else if( egypt < ghana) {
            cout << "Case " << i <<": NO" <<endl;
        }
        else {
            if( g > 1 ) {
                cout << "Case " << i <<": NO" <<endl;
            }
            else if(g < 1){
                cout << "Case " << i <<": YES" <<endl;
            }
            else {
                cout << "Case " << i <<": PENALTIES" <<endl;
            }
        }
    }
    return 0;
}

