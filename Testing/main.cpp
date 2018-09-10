#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v2){ cout << x << " "; } cout << endl;
#define ll long long int
//for(int i=1; i<=n; i++ ) { cout << arr[i] << " "; } cout << endl;

void inputAndOutput()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\C--Programming\\Testing\\input.txt", "r", stdin);
    freopen("D:\\C--Programming\\Testing\\output.txt", "w", stdout);
    #endif  
}

int main()
{
    inputAndOutput();
    
    for(int i='A'; i<='Z'; i++)
    {
        printf("%c", i+32);
    }

    return 0;
}
