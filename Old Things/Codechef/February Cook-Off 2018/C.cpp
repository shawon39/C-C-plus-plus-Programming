#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,a;
    cin >> test;

    while(test--)
    {
        int n,k;
        cin >> n >> k;
        string str;
        char ch;
        int a=0,b=0,c=0,d=0;

        for(int i=0; i<n; i++)
        {
            cin >> ch;
            str += ch;

            if( ch =='c' ) a++;
            if( ch =='h' ) b++;
            if( ch =='e' ) c++;
            if( ch =='f' ) d++;
        }
        int ct  = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {

                for(int k=j+1; k<n; k++)
                {
                    for(int p=k+1; p<n; p++)
                    {

                        if( str[i] =='c' && str[j] =='h' && str[k] =='e' && str[p] =='f' ) ct++;

                    }
                }
            }
        }

        cout << endl << endl << a << " " <<b << " " <<c << " " <<d << endl << endl;

        if( ct < k ) cout << -1 <<endl;
        else if( ct == k ) cout << -1 <<endl;
        else
        {

            for(int i=1; i<=a; i++)
            {
                for(int j=1; j<=b; j++)
                {
                    for(int k=1; k<=c; k++)
                    {
                        for(int p=1; p<=d; p++)
                        {

                        }
                    }
                }
            }

        }
    }

    return 0;
}



