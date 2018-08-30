#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string str;
    cin >> str;
    vector<char>v,v2;

    if(n==1) {
        cout << "Yes" <<endl;
        return 0;
    }

    for(int i=0; i<str.length(); i++){
        v.push_back(str[i]);
    }
    sort(v.begin(), v.end());
    int f = 0;
    for(int i=0; i<v.size()-1; i++)
    {
        if( v[i] == v[i+1] )
        {
             f = 1;
             break;
        }
    }
    f ? cout << "Yes" <<endl : cout << "No" << endl;
}
