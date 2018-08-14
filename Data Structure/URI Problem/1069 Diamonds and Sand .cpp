#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main()
{
    fast;

    int n; cin >> n;
    string s;
    while(n--) {

        cin >> s;
        int temp =0,ct=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='<'){
                temp++;
            }
            if(s[i]=='>' && temp>0){
                ct++;
                temp--;
            }
        }
        cout << ct <<endl;
    }

    return 0;
}

