#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
/*
bool cmp(string a,string b){
   return a.size() < b.size();
} sort(s,s+n,cmp);
*/
// descending order
bool myfun(int a, int b){
    return a>b;
}

struct Greater {
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
//sort(v.begin(), v.end(), Greater());
//v.erase (v.begin());

// multimap.insert( make_pair(12, 34) );
// multimap <int, string> :: reverse_iterator rit;

// for (rit=mmap.rbegin(); rit!=mmap.rend(); ++rit)
    //cout << rit->first << rit->second <<endl;

// b.find(a) != -1

int solve(int n)
{
    if (n >= 1)
        return n*solve(n-1)%7901;
    else
        return 1;
}

int main()
{
    int test; cin >> test;

    while(test--)
    {
        int n, arr[1005]; cin >> n;
        map<int,int>mp;
        for( int i=0; i<n; i++ ) { cin >> arr[i]; mp[arr[i]]++; }
        long long fact = 1;
        for( auto x: mp )
        {
            if( x.second > 1 )
            {
                fact = (fact * solve(x.second))%7901;
            }
        }
        cout << fact <<endl;
    }
    return 0;

}


