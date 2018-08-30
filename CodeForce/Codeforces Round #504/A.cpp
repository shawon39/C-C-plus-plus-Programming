#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<char>v,v2,v3;

    int ck = 0, len=-1;
    for(int i=0; i<n; i++)
    {
        char ch;
        cin >> ch;

        if( ch == '*' )
        {
            ck = 1;
            continue;
        }

        if( ck == 0 )
        {
            v.push_back(ch);
        }
        else
        {
            v2.push_back(ch);
        }
    }

    for(int i=0; i<m; i++)
    {
        char ch;
        cin >> ch;
        v3.push_back(ch);
    }

    if( v.size() + v2.size() > v3.size() )
    {
        cout << "NO" <<endl;
        //main();
        return 0;
    }

    if( !ck )
    {
        if( v == v3 )
        {
            cout << "YES" <<endl;
            //main();
            return 0;
        }
        else
        {
            cout << "NO" <<endl;
            //main();
            return 0;
        }
    }

    int lol = 1;
    for(int i=0; i<v.size(); i++)
    {
        if( v[i] == v3[i] ) lol = 1;
        else
        {
            lol = 0;
            break;
        }
    }

    if( lol == 0  )
    {
        cout << "NO" <<endl;
        //main();
        return 0;
    }

    int x = v2.size()-1;
    int y = v3.size()-1;

    for(int i=x, j=y; i>=0; i--, j-- )
    {
        if( v2[i] == v3[j] ) lol = 1;
        else
        {
            lol = 0;
            break;
        }
    }

    if( lol == 0  )
    {
        cout << "NO" <<endl;
       // main();
        return 0;
    }

    cout << "YES" <<endl;

   // main();

    return 0;

}


