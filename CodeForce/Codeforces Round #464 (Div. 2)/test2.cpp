#include <bits/stdc++.h>
using namespace std;

vector <int> v;

int main()
{

    int n, a;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cin >> a;
       if( i =! a ) v.push_back(a);
    }

    if( v.size() < 3 )
    {
        cout << "NO" <<endl;
        return 0;
    }

    for(int i=0; i<v.size()-2; i++)
    {
        for(int j = i+1; j<v.size()-1; j++)
        {
            for(int k=j+1; k<v.size(); k++)
            {
                if( ( (v[i] + v[j] >= v[k]) || (v[i] + v[k] >= v[j]) || (v[j] + v[k] >= v[i]) ) && v[i] != v[j]  && v[i] != v[k] && v[k] != v[j]  ){
                    cout << "YES" <<endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" <<endl;

    return 0;
}
