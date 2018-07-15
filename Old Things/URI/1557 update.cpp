#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int ct = 0;
    while( n )
    {
        n /= 10;
        ct++;
    }
    return ct;
}

int main()
{

//    #ifndef ONLINE_JUDGE
//        freopen("input.txt", "r", stdin);
//        freopen("output.txt", "w", stdout);
//    #endif

    while(1)
    {
        int n,sum,lol, arr[10005];
        cin >> n;
        if(n==0) break;

        int xx = n-1 + n-1;
        int yy = pow(2,xx);
        int ck = countDigit(yy);

        for(int i=0; i<n; i++)
        {
            for(int j=i, k = 0; ; j++)
            {
                lol = pow(2,j);

                int a = countDigit(lol);
                int slv = ck - a ;

                while(slv)
                {
                    cout << ' ';
                    slv--;
                }
                if( k == 0 ) cout << lol;
                else cout << ' ' << lol;
                k++;
                if( k == n ) break;
            }
            puts("");
        }
        puts("");

    }
    return 0;
}
