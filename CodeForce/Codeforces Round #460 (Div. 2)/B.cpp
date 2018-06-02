#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int pt[10005];

void perfect() {

    int n,i,j=0,sum,temp;

    for(i=19;; i++) {

        sum = 0, n=i;
        while(n)
        {
            temp = n%10;
            sum+=temp;
            n/=10;
        }
        if(sum==10)
        {
            pt[j++] = i;
        }
        if(j>10002) break;
    }
}

int main() {

    fast; perfect();
    int i,n; cin >> n;
    cout << pt[n-1] <<endl;
    return 0;
}


