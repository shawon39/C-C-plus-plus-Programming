#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
int arr[200005];
int arr2[200005];
char ch[200005];

int main() {

    fast; int n,ct,f=0; cin >> n;
    for(int i=1; i<=n; i++) { cin >> arr[i]; }

    for(int i=1; i<n; i++)
    {
        cin >> ch[i];
        if( ch[i] == '1' )
        {
            arr2[i] = 1;
        }
        else arr2[i] = 0;
    }

    for(int i=1; i<n; i++) {

        if( arr2[i] == 0 ) continue;
        int st=i, endd=i;
        while( i<n && arr2[i]==1 ) {
            endd++;
            i++;
        }
        i--; // optional because if(i==0)then break so starting of loop it goes to continue!
        sort(arr+st,arr+endd+1);

    }

    ct = 0;
    for(int i=1; i<=n; i++) { if(arr[i] == i) ct++; }
    ct==n? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}



