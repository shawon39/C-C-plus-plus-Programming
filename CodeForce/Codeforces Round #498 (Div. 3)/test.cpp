#include<bits/stdc++.h>
using namespace std;

map<long long, long long>mp;

int main() {
    long long n, a, x = 0, y = 0, j, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        mp[i] = a;
    }


    for( auto x : mp )
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}


