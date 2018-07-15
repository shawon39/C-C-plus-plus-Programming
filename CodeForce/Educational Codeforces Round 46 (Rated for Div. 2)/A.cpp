#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")

bool cmp(string a,string b)
{
    return a.size() < b.size();
} //sort(s,s+n,cmp);

// descending order
bool myfun(int a, int b)
{
    return a>b;
}

struct Greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const
    {
        return a > b;
    }
};
//sort(v.begin(), v.end(), Greater());
//v.erase (v.begin());

// multimap.insert( make_pair(12, 34) );
// multimap <int, string> :: reverse_iterator rit;

// for (rit=mmap.rbegin(); rit!=mmap.rend(); ++rit)
//cout << rit->first << rit->second <<endl;

// b.find(a) != -1


int main()
{
    int n;
    cin >> n;
    string str;
    vector<string>v,v2;
    vector<string>::iterator it;
    set<string>s;

    for( int i=0; i<n; i++ )
    {
        cin >> str;
        v.push_back(str);
    }
    for( int i=0; i<n; i++ )
    {
        cin >> str;
        v2.push_back(str);
    }

    int ct = 0;
    for( int i=0; i<n; i++ )
    {
        int lol = 0;
        for( int j=0; j<n; j++ )
        {
            if( v[i] == v2[j] ) {
                v2[j] = "Lol";
                lol = 1;
                break;
            }
        }
        if( !lol ) ct++;
    }
    cout << ct <<endl;
    //main();
    return 0;
}






