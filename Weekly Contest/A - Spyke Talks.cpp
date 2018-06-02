#include <bits/stdc++.h>
using namespace std;

//int arr[1005]= {0};
map <int,int> arr;
int n, a, lol=0;

int main() {

    cin >> n;
    for(int i=0; i<n; i++) {

        cin >> a;
        if(a==0) continue;
        arr[a]++;

        if( arr[a] > 2 ) {
            cout << -1 <<endl;
            return 0;
        }
        if( arr[a] == 2) {
            lol++;
        }
    }
    cout << lol <<endl;
    return 0;
}


