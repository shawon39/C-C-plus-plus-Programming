#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<char>v;

    while( n%2 == 0 )
    {
    	v.push_back('2');
    	n/=2;
    }

    for(int i=3; i*i<=n; i+=2)
    {
    	while( n%i == 0 ) {
    		v.push_back(i);
    		n/=i;
    	}
    }

    if(n > 2) v.push_back(n);

    int a=0,b=0,c=0;
    for(i=0; i<v.size(); i++)
    {
        if( v[i] == '2' )  a++;
        if( v[i] == '3' )  b++;
    }

    int res = a%3;

    for(int i=1; i<=res; i++)
    {
        cout << 2;
    }

    res = b%2;

    for(int i=1; i<=res; i++)
    {
        cout << 3;
    }

    for(int i=1; i<=a/3; i++)
    {
        cout << 4;
    }
    for(i=0; i<v.size(); i++) if( v[i] == '5' )  cout << 5;
    for(i=0; i<v.size(); i++) if( v[i] == '6' )  cout << 6;
    for(i=0; i<v.size(); i++) if( v[i] == '7' )  cout << 7;


    for(int i=1; i<=b/2; i++)
    {
        cout << 9;
    }

    return 0;
}


