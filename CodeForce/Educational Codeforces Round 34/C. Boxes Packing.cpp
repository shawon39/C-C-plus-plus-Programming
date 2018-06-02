#include <bits/stdc++.h>
using namespace std;

int lol[5001],lol2[5001];

int main()
{
    int i,n,ct=0,b,j;
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> lol[i];
    }

    sort(lol, lol+n);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(lol[i] < lol[j] && lol2[j]!=-1)
            {
                lol[i]=-1;
                lol2[j]=-1;
                break;
            }
        }
    }

    for(i=0; i<n; i++) {
        if(lol[i]!=-1) ct++;
    }

    cout << ct <<endl;

    return 0;
}



