#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

// descending order
bool myfun(int a, int b)
{
    return a>b;
}

struct greaterr
{
    template<class T>
    bool operator()(T const &a, T const &b) const
    {
        return a > b;
    }
};
//sort(v.begin(), v.end(), greaterr());
//v.erase (v.begin());


int main()
{
    int n,a,b,w=1;
    cin >> n;
    vector<int> v,v2,v3;

    for(int i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        cin >> b;
        v2.push_back(b);
    }

    /*

    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if( v[i] == v[j] )
            {
                v[j] = -1;
            }
        }
    }
    int ct = 0;
    for(int i=0; i<v.size(); i++)
    {
        if( v[i] != -1 ) ct++;
    }

    if( ct < 3 )
    {
        cout << -1 << endl;
        return 0;
    }

    */

    int xx = 0;

    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1, k=v.size()-1; j<v.size(); j++, k--)
        {
            if( k == j || k == i ) continue;

            if( k == -1 ) break;

            if( k < j )
            {
                if( v[i] < v[j] && v[j] > v[k] && v[i] < v[k] )
                {
                    int sum = v2[i] + v2[j] + v2[k];
                    v3.push_back(sum);
                    xx = 1;
                }

            }
            else if( k < i )
            {
                if( v[i] < v[j] && v[j] > v[k] && v[i] > v[k] )
                {
                    int sum = v2[i] + v2[j] + v2[k];
                    v3.push_back(sum);
                    xx = 1;
                }

            }
            else if( v[i] < v[j] && v[j] < v[k] && v[i] < v[k] )
            {
                int sum = v2[i] + v2[j] + v2[k];
                v3.push_back(sum);
                xx = 1;
            }

        }
    }

    if( !xx )  cout << -1 << endl;
    else
    {
        sort(v3.begin(), v3.end());
        cout << v3[0] <<endl;
    }

    return 0;
}

