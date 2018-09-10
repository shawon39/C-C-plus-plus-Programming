#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v){ cout << x << " "; } cout << endl;
//int floop(int arr[], int n) { for(int i=0; i<n; i++) { cout << arr[i] << " "; } cout <<endl; }

int main()
{
    int n, k; cin >> n >> k;

    int lol = n/(k+1);
    int x = lol/2;
    int y = n/2;

    cout << lol <<endl;

    for(int i=1; i<=lol; i++) {
        cout << x << " ";
        x += y;
    }
    return 0;
}
