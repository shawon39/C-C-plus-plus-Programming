


// Memory Limit


#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int

vector<ll>v;
vector<ll>v2;

int main()
{
    fast;
    int n; cin >> n;
    string str, str2;
    cin >> str >> str2;

    long long int ct = 0, x=0,y=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(str[i] == '1' && str[j] == '0' && str2[j] == '0' )
            {
                //arr[x++] = i+1;
                //arr2[y++] = j+1;
                v.push_back(i+1);
                v2.push_back(j+1);
                x++;
            }

            if(str[i] == '0' && str[j] == '1' && str2[j] == '0' )
            {
                //arr[x++] = i+1;
                //arr2[y++] = j+1;
                v.push_back(i+1);
                v2.push_back(j+1);
                x++;
            }

            if(str[i] == '0' && str2[i] == '0' && str[j] == '1' )
            {
                //arr[x++] = i+1;
                //arr2[y++] = j+1;
                v.push_back(i+1);
                v2.push_back(j+1);
                x++;
            }

            if(str[i] == '1' && str2[i] == '0' && str[j] == '0' )
            {
                //arr[x++] = i+1;
                //arr2[y++] = j+1;
                v.push_back(i+1);
                v2.push_back(j+1);
                x++;
            }

        }
    }

    long long int lol = 0;
    for(long long int i=0; i<x; i++)
    {
        if( v[i] == v[i+1] && v2[i] == v2[i+1] )
        {
            lol++;
        }
    }

    cout << x - lol <<endl;

    return 0;

}
