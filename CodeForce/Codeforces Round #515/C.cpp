#include <bits/stdc++.h>
using namespace std;

int arr[200005];

int main()
{
    int q; cin >> q;
    int r=0,l=0;
    for(int i=1; i<=q; i++) {
        char ch; int id;
        cin >> ch >> id;
        if(i==1) {
            arr[id] = 0;
            l--; r++;
            continue;
        }
        if(ch=='L') {
            arr[id] = l;
            l--;
        }
        else if(ch=='R'){
            arr[id] = r;
            r++;
        }
        else {
            int x = arr[id] -l-1;
            int y = r - arr[id]-1;
            cout << min(x,y) << endl;
        }
    }
    return 0;
}
