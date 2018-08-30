#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{

    int n,position;
    cin >> n;
    vector<char>v;
    vector<char>::iterator it;
    string str;
    cin >> str;
    position = str.length();

    for(int i=0; i<str.length(); i++)
    {
        v.push_back(str[i]);
    }

    while(n--)
    {
        int ck;
        cin >> ck;

        if(ck==1)
        {
            string s;
            cin >> s;

            if( s.length() > 1 )
            {
                if( position > 0 )
                {
                    v.erase (v.begin()+position-1);
                    position--;
                }
            }
            else if( s.length() == 1 )
            {
                it = v.begin() + position;
                v.insert (it,s[0]);
                position++;
            }

        }
        else if(ck==2)
        {
            int pos;
            cin >> pos;
            position = pos;
        }

    }

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;

    return 0;
}

