#include <bits/stdc++.h>
using namespace std;

int main() {

    vector < pair < int , int > > v;

    int arr[]={4,3,7,5,1,9,8};
    int arr2[]={44,23,17,25,31,19,38};

    for(int i=0; i<7; i++)
    {
        v.push_back( make_pair(arr[i],arr2[i]) );
    }

    for(int i=0; i<7; i++)
    {
        cout << v[i].first << " " << v[i].second <<endl;
    }

    sort(v.begin(), v.end());
    puts("");

    for(int i=0; i<7; i++)
    {
        cout << v[i].first << " " << v[i].second <<endl;
    }

}
