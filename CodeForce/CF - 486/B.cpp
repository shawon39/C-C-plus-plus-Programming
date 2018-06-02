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
bool myfun(int a, int b){
    return a>b;
}

struct greaterr
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
//sort(v.begin(), v.end(), greaterr());
//v.erase (v.begin());


int main()
{
    fast;
    int n; cin >> n;
    string str;
    vector<string> v;
    multimap<int, string> mal;
    multimap <int, string> :: iterator rit;

    while(n--)
    {
        cin >> str;
        v.push_back(str);
    }
    int ct = 0;
    for( int i=0; i<v.size(); i++ )
    {
        for( int j=0; j<v.size(); j++ )
        {
            if( i == j ) continue;

            int pos = v[j].find(v[i]);

            if(pos != -1 ) {
                ct++;
                break;
            }
        }
    }

    for( int i=0; i<v.size(); i++ )
    {
        mal.insert(make_pair( v[i].size(), v[i] ) );
    }

    string temp; int ck = 1;

    for (rit=mal.begin(); rit!=mal.end(); ++rit)
    {
        if( ck )
        {
            temp = rit->second; ck = 0; continue;
        }
        if( rit->second.find( temp ) == -1 ) {
            cout << "NO" <<endl; return 0;
        }
        temp = rit->second;
    }

    if( v.size()-1 == ct || v.size() == ct ) cout << "YES" <<endl;
    else { cout << "NO" <<endl; return 0; }

    for (rit=mal.begin(); rit!=mal.end(); ++rit)
    {
        cout << rit->second <<endl;
    }


    return 0;
}




