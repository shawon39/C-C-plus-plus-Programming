#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;
    char str[105][105];
    cin >> x >> n;

    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++)
        {
            cin >> str[i][j];
        }
    }

    for(int i=1; i<=x; i++)
    {
        int ct = 0;
        for(int j=1; j<=x; j++)
        {
            if(str[i][j] == '.' ) ct++;
            else ct = 0;

            if(ct == n) {
                //cout << "First" <<endl;
                cout << i << " " << j <<endl;
                return 0;
            }
        }
    }
    for(int i=1; i<=x; i++)
    {
        int ct = 0;
        for(int j=1; j<=x; j++)
        {
            if(str[j][i] == '.' ) ct++;
            else ct = 0;

            if(ct == n) {
                //cout << "Second" <<endl;
                cout << i << " " << j <<endl;
                return 0;
            }
        }
    }

    cout << 1 << " " << 1 <<endl;
    return 0;

}

