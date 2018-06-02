#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

char ch[2005][2005];

int main() {

    fast;
    int row,col,k,ct,lol = 0;
    cin >> row >> col >> k;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> ch[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        ct=0;
        for(int j=0; j<col; j++)
        {
            if(ch[i][j]=='.') ct++;
            else ct=0;
            if(ct>=k) lol++;
        }
    }

    for(int i=0; i<col; i++)
    {
        ct=0;
        if(k==1) break;
        for(int j=0; j<row; j++)
        {
            if(ch[j][i]=='.') ct++;
            else ct=0;
            if(ct>=k) lol++;
        }
    }
    cout << lol <<endl;
    return 0;
}



