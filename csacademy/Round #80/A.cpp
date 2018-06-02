#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1005], ct = 4;
    for(int i=0; i<16; i++) {
        cin >> arr[i];
    }
    int lol = arr[3];
    for(int i=4; i<16; i++) {
        if( lol < arr[i]+300 ) ct++;
    }
    cout << ct <<endl;
    return 0;
}
