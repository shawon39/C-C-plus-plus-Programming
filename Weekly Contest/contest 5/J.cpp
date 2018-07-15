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
    int test; cin >> test;
    int a,b,p,d, a2,b2,p2,d2, k,k2;

    while( test-- )
    {
        cin >> a >> b >> p >> d;
        cin >> a2 >> b2 >> p2 >> d2 >> k;

        int ct = 0, lol = 0, ck = abs(p-p2);
        if( d == 1 && d2 == 0 )
        {
            for(int i=p, j=p2; i<=b || j>=a2 ; i++, j--)
            {
                if( i == j ) {
                    lol ++;
                }
                //if( abs(i-j) > ck ) break;
                if( ct >= k ) break;
                ct++;
            }
        }
        else if( d == 0 && d2 == 1 )
        {
            for(int i=p, j=p2; i>=b || j<=a2 ; i--, j++)
            {
                if( i == j ) {
                    cout << i << endl; return 0;
                }
                //if( abs(i-j) > ck ) break;
                if( ct >= k ) break;
                ct++;
            }
        }
        else cout << 0 << endl;
    }
    return 0;
}




