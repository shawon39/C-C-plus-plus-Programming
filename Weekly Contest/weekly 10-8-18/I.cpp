#include <bits/stdc++.h>
using namespace std;

template <typename T>
string NumberToString(T pNumber)
{
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}

int arr[9600];

void sieve(int n)
{
    int mark[n+1]= {0};

    for(int i=4; i<=n; i+=2)
    {
        mark[i] = 1;
    }
    int limit = sqrt(n) + 1;
    for(int i=3; i<=limit; i+=2)
    {
        if(mark[i]==0)
        {
            for(int j = i*i; j<=n; j+=i )
            {
                mark[j] = 1;
            }
        }

    }
    int j=0;

    for(int i=2; i<=n; i++)
    {
        if( !mark[i] )
        {
            arr[j++] = i;
        }
    }
}

int main()
{
    int n = 100000;
    sieve(n);
    int x = 9591;

    while(1)
    {
        string str; cin >> str;

        if( str == "0" ) break;

        for(int i=x; i>=0; i--)
        {
            int bal  =  arr[i];
            string s = NumberToString(bal);

            int lol = str.find(s);

            if( lol != -1 )
            {
                cout << s <<endl;
                break;
            }
        }
    }

    return 0;
}
