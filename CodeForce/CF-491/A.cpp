#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")

bool cmp(string a,string b){
   return a.size() < b.size();
} //sort(s,s+n,cmp);

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


int main()
{
    int a,b,c,n;
    cin >> a >> b >> c >>n;

    int x = a+b-c;

    int xx = a-c;
    int yy = b-c;

    if( xx < 0 || yy < 0 ) {
        cout << -1 <<endl;
        return 0;
    }

    if( x == n ) cout << -1 <<endl;
    else if( x < 0 ) cout << -1 <<endl;
    else if ( n < x ) cout << -1 <<endl;
    else cout << n-x <<endl;
    //main();
    return 0;
}




















