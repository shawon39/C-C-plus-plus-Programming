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
    int n, cost;
    cin >> n >> cost;
    int arr[105];
    vector<int>v;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int even=0, odd=0;

    for( int i=0; i<n-1; i++ )
    {
        if( arr[i]%2 == 0 ) even++;
        else odd++;

        if( even == odd )
        {
            int xx = abs( arr[i] - arr[i+1] );
            v.push_back(xx);
        }
    }
    sort(v.begin(), v.end());
    int lol = 0, ct=0;
    for(int i=0; i<v.size(); i++)
    {
        lol += v[i];
        if( lol <= cost ) ct++;
    }
    cout << ct <<endl;
    return 0;

}











