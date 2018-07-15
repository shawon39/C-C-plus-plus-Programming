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
#define M_PI 3.14159265358979323846

int main()
{
    int T,r,R; cin >> T;

    while(T--)
    {
        cin >> R >> r;

        double x = M_PI *  (double)R *  (double)R;
        double y = M_PI *  (double)r *  (double)r;
        y *= 2;

        if( x > y ) cout << 1 <<endl;
        else cout << 2 <<endl;
    }
    return 0;

}





