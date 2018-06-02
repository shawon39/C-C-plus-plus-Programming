#include <bits/stdc++.h>
using namespace std;

#define pf printf

#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)

#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)

int n,arr[100000000],arr2[10],ct=0;

int main()
{
    sf1(n);
    int mn = 1000000000;
    for(int i=0; i<n; i++) {
       cin >> arr[i];
       mn = min(mn,arr[i]);
    }
    for(int i=0, j=0; i<n; i++) {
        if(mn==arr[i]){
           arr2[j++]=i;
           ct++;
        }
    }
    int m = 1000000000;
    for(int i=0; i<ct; i++){
        int m2 = abs(arr2[i]-arr2[i+1]);
        m = min(m,m2);
    }
    pf1(m);
    return 0;
}
