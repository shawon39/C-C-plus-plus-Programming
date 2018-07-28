#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int check(string str, int limit)
{
    int ct = 0;
    for(int i=0; i<str.length()-(limit-1); i++)
    {
        string s,s2;
        int lol = i, lol2 = i;

        for(int j=0; j<limit; j++)
        {
            s += str[lol++];
        }
        string temp = s;
        reverse(temp.begin(), temp.end());
        if( s == temp ) {
            ct++;
            return 1;
        }

        for(int j=0; j<str.length(); j++)
        {
            s2 += str[lol2++];
            if( j+1 >= limit )
            {
                string temp2 = s2;
                reverse(temp2.begin(), temp2.end());
                if( s2 == temp2 )
                {
                    ct++;
                    return 1;
                }
            }
        }

    }
    return ct;
}


int main()
{
    int test;
    cin >> test;

    for(int t=1; t<=test; t++)
    {
        int limit;
        cin >> limit;
        string str;
        cin >> str;

        ll sum = 0;

        for(int i=1; i<=str.length(); i++)
        {
            sum += i;
        }

        int ct = 0, haha = limit;

        while( limit != str.length() + 1 )
        {

            for(int i=0; i<str.length()-(limit-1); i++)
            {
                string s;
                int lol = i;

                for(int j=0; j<limit; j++)
                {
                    s += str[lol++];
                }

                string temp = s;
                reverse(temp.begin(), temp.end());

                if( temp == s ) ct++;
                else
                {
                    int bal = check( s, haha );
                    if(bal) ct++;
                }

            }
            limit++;
        }
        cout << sum - ct <<endl;

    }

    return 0;

}
