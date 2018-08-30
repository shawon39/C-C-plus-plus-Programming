#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;

int main()
{
    fast; int test; cin >> test;
    cin.ignore();
    for(int j=1; j<=test; j++)
    {
        vector<char>v,v2;
        string str;
        getline(cin, str);
        for(int i=0; i<str.length(); i++)
        {
            if( str[i] >= 'a' && str[i] <= 'z' ) v.push_back(str[i]);
            else if( str[i] >= 'A' && str[i] <= 'Z' ) v.push_back(str[i]+32);
        }
        string str2;
        getline(cin, str2);
        for(int i=0; i<str2.length(); i++)
        {
            if( str2[i] >= 'a' && str2[i] <= 'z' ) v2.push_back(str2[i]);
            else if( str2[i] >= 'A' && str2[i] <= 'Z' ) v2.push_back(str2[i]+32);
        }
        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());

        if(v==v2) cout << "Case " << j << ": " << "Yes" << endl;
        else cout << "Case " << j << ": " << "No" << endl;
    }
    return 0;
}

