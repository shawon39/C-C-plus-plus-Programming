#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;
    char arr[105][105];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int key = arr[i][j]-48;
            int ct = 0;

            if(key >=0 && key<=9) {

                if(j-1 >= 0 )   if( arr[i][j-1] == '*' ) ct++;
                if(j+1 < m )   if( arr[i][j+1] == '*' ) ct++;
                if(i-1 >= 0 )   if( arr[i-1][j] == '*' ) ct++;
                if(i+1 < n )   if( arr[i+1][j] == '*' ) ct++;

                if(j+1 < m && i-1 >= 0 )   if( arr[i-1][j+1] == '*' ) ct++;
                if(i+1 < n && j-1 >= 0 )   if( arr[i+1][j-1] == '*' ) ct++;
                if(j-1 >= 0 && i-1 >= 0 )   if( arr[i-1][j-1] == '*' ) ct++;
                if(i+1 < n && j+1 < m )   if( arr[i+1][j+1] == '*' ) ct++;

                if( key != ct  ) { cout << "NO" <<endl; return 0; }

            }
            else if( key == -2 ) {

                if(j-1 >= 0 )   if( arr[i][j-1] == '*' ) { cout << "NO" <<endl; return 0; }
                if(j+1 < m )   if( arr[i][j+1] == '*' ) { cout << "NO" <<endl; return 0; }
                if(i-1 >= 0 )   if( arr[i-1][j] == '*' ) { cout << "NO" <<endl; return 0; }
                if(i+1 < n )   if( arr[i+1][j] == '*' ) { cout << "NO" <<endl; return 0; }

                if(j+1 < m && i-1 >= 0 )   if( arr[i-1][j+1] == '*' ) { cout << "NO" <<endl; return 0; }
                if(i+1 < n && j-1 >= 0 )   if( arr[i+1][j-1] == '*' ) { cout << "NO" <<endl; return 0; }
                if(j-1 >= 0 && i-1 >= 0 )   if( arr[i-1][j-1] == '*' ) { cout << "NO" <<endl; return 0; }
                if(i+1 < n && j+1 < m )   if( arr[i+1][j+1] == '*' ) { cout << "NO" <<endl; return 0; }

            }
        }
    }

    cout << "YES" <<endl;
    return 0;
}

