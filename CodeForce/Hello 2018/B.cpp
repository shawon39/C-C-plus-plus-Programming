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
#define slow ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define yes printf("YES\n")
#define no printf("NO\n")
#define murikha return 0

int main()
{
    int n, arr[1010], arr2[1010];
    int ct=0,j=0,root = 1;
    cin >> n;

    for(int i=1; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]==root) {
            ct++;
        }
        else{
            if(ct<3){
                cout << "Yes" <<endl;
                murikha;
            }
            else
            {
                root = arr[i];
                arr2[j++]=ct-1;
                ct = 1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr2[i]<3){
            cout << "Yes" <<endl;
            murikha;
        }
    }
    cout << "Yes" <<endl;
    return 0;
}
