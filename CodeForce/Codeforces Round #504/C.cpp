#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int n, k; cin >> n >> k;
    string str; cin >> str;

    vector<char>v,v2;

    for(int i=0; i<str.length(); i++)
    {
        if( str[i] == '(' )
        {
            v.push_back(str[i]);

            v2.push_back(str[i]);

            if( v.size() + v2.size() == k ) break;

        }
        else
        {
            v.push_back(str[i]);
            v2.pop_back();

        }
    }

    for(int i=0; i<v.size(); i++)
    {
        cout << str[i];
    }

    for(int i=0; i<v2.size(); i++)
    {
        cout << ")";
    }

    cout << endl;

    return 0;
}






