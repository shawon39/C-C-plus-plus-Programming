#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int check(string str)
{
    string temp = str;
    reverse(str.begin(), str.end());

    if( str == temp ) return 1;
    else return 0;

}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        string str;
        cin >> str;
        vector<string>v;

        for (int i = 0; i < str.length(); i++)
        {
            string lol = "";
            for (int j = i; j < str.length(); j++)
            {
                lol += str[j];
                if( check(lol) )
                {
                    v.push_back(lol);
                }
            }
        }

        sort(v.begin(), v.end());

        while(q--)
        {
            int x,ct=0; cin >> x;
            char ch; cin >> ch;

            string lol = v[x-1];

            for(int i=0; i<lol.length(); i++)
            {
                if( lol[i] == ch ) ct++;
            }
            cout << ct <<endl;

        }
    }

    return 0;
}

