#include <bits/stdc++.h>
using namespace std;

#define ALL(c) c.begin(), c.end()
#define common(a,b) sort(ALL(a)), sort(ALL(b)), a.erase(set_intersection(ALL(a),ALL(b),a.begin()),a.end())

int main()
{
    int n; scanf("%d", &n);
    vector<int>v[105];

    for(int i=0; i<n; i++) {

        int m; scanf("%d", &m);

        for(int j=0; j<m; j++) {
           int a; scanf("%d", &a);
           v[i].push_back(a);
        }
    }

    for(int i=0; i<n-1; i++) {
        common(v[0], v[i+1]);
    }
    for(int i=0; i<v[0].size(); i++) {
        cout << v[0][i] << " ";
    }
}
