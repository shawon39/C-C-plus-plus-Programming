#include <bits/stdc++.h>
using namespace std;

void inputAndOutput()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\Testing\\input.txt", "r", stdin);
    freopen("D:\\Testing\\output.txt", "w", stdout);
#endif
}

int isVowel(char ch)
{
    if( ch == 'a' ) return 1;
    else if( ch == 'e' ) return 1;
    else if( ch == 'i' ) return 1;
    else if( ch == 'o' ) return 1;
    else if( ch == 'u' ) return 1;
    else if( ch == 'n' ) return 1;
    else return 0;
}

int main()
{
    //inputAndOutput();

    string str; cin >> str;

    for(int i=0; i<str.length(); i++)
    {
        if( !isVowel(str[i]) )
        {
            if( !isVowel(str[i+1]) or str[i+1] == 'n' )
            {
                cout << "NO" <<endl;
                return 0;
            }
        }
    }
    cout << "YES" <<endl;
    return 0;
}

