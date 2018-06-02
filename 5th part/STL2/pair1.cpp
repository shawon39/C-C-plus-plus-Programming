#include <bits/stdc++.h>
using namespace std;

int main() {

    /// part 1
    ///------------------
    /*

    pair < int , int > p[10];
    int a, b;

    for(int i=0; i<5; i++)
    {
        cin >> a >> b;
        p[i] = make_pair(a,b);
    }

    for(int i=0; i<5; i++)
    {
        cout << p[i].first << " " << p[i].second <<endl;
    }
    */

    /// part 2
    ///------------------

     vector < pair < int , pair < int, int > > > v;
     vector < pair < int , pair < int, int > > > ::iterator it;

     for(int i=1; i<=5; i++)
     {
         v.push_back(make_pair(i,make_pair(i+5,i+10)));
     }

     for(it= v.begin(); it!= v.end(); it++)
     {
         cout << it->first << " " << it->second.first << " " << it->second.second <<endl;
     }

}
























