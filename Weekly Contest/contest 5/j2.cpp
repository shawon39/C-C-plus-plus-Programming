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
    int L1,R1,L2,R2, p,p2,k,d,d2;

    while( test-- )
    {
        cin >> L1 >> R1 >> p >> d;
        cin >> L2 >> R2 >> p2 >> d2;
        cin >> k;

        int lol = 0;

        for(int m=1; m<=k; m++)
        {

             if( d == 1 && d2 == 0 )
             {
                if( p < R1 ) p++;
                else d = 0, p--;

                if( p2 > L2 ) p2--;
                else d2 = 1, p2++;

             }
             else if( d == 0 && d2 == 1 )
             {
                if( p > L1 ) p--;
                else d = 1, p++;

                if( p2 < R2 ) p2++;
                else d2 = 0, p2--;
             }
             else if( d == 0 && d2 == 0 )
             {
                if( p > L1 ) p--;
                else d = 1, p++;

                if( p2 > L2 ) p2--;
                else d2 = 1, p2++;
             }
             else if( d == 1 && d2 == 1 )
             {
                if( p < R1 ) p++;
                else d = 0, p--;

                if( p2 < R2 ) p2++;
                else d2 = 0, p2--;
             }

             if( p == p2 ) lol++;
        }
        cout << lol <<endl;

    }
    return 0;
}





