#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int ct = 0;
    for(int i=1; i<n-1; i++)
    {
        int x =  arr[i] - arr[i-1] ;
        int y =  arr[i+1] - arr[i] ;

        if(x==y) continue;
        else if( x+1 == y ) {

        }
        else if( x == y+1 ) ct++;


    }
    cout << ct <<endl;
    return 0;
}

