#include <bits/stdc++.h>
using namespace std;

#define pf printf
#define sf scanf
#define nl printf("\n")
#define pf1(x) printf("%d\n",x)
#define pf2(x,y) printf("%d %d\n",x,y)
#define pf3(x,y,z) printf("%d %d %d\n",x,y,z)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d %d",&x,&y)
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define for1(i, x, y) for(int i=(x); i<(y); i++)
#define for2(i, x, y) for(int i=(x-1); i>=(y); i--)
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")

bool myfun(int a, int b){
    return a>b;
}

struct greaterr
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
//sort(v.begin(), v.end(), greaterr());
//v.erase (v.begin());

int arr[1000005];
int arr2[1000005];

int main()
{
    int n; cin >> n;
    for(int i=0; i<n; i++) { cin >> arr[i]; arr2[i] = arr[i]; }
    sort(arr, arr+n);
    if( arr[0] == arr[1] ) {
        cout << "Still Rozdil" <<endl;
    }
    else {
        for(int j=0; j<n; j++)
            {
                if(arr2[j] == arr[0] )
                {
                    cout << j+1 << " " <<endl;
                    break;
                }
            }
    }
    return 0;
}















