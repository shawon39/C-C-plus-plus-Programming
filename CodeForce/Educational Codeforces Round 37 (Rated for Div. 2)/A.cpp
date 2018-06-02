#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int mark[500];

int main() {

    fast; int test,a,b,x;
    cin >> test;

    while (test--)
    {
        int mark[500]={0};
        int lol = 0;
        cin >> a >> b;
        for(int i=1; i<=b; i++) {
            cin >> x;
            mark[x] = 1;
        }

        while(1)
        {
            vector <int> v;
            lol++;
            for(int i=1; i<=a; i++) {if(mark[i]) v.push_back(i);}

            if(v.size() == a) break;

            for( int i : v ){

                if(i+1 <= a) {
                    mark[i+1] = 1;
                }
                if(i-1 >= 1){
                    mark[i-1] = 1;
                }
            }

        }
        cout << lol <<endl;
    }

    return 0;
}

