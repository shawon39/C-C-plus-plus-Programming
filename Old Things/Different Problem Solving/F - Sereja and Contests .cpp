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
#define murikha return 0

int main()
{
    int round,part, arr[5000]={0}, lol[5000];
    cin >> round >> part;

    int div, a,b;

    while(part--) {

        sf1(div);
        if(div==1)
        {
            cin >> a >> b;
            arr[a]=-1;
            arr[b]=-1;
        }
        else cin >> a;
        arr[a]=-1;
    }
    int mx=0, mn=0;
    for(int i=1,j=0; i<round; i++) {
        if(arr[i]==0){
            lol[j++]=i;
            mx++;
        }
    }

    for(int i=0; i<mx-1; i++) {
        if((lol[i+1]-lol[i])==1){
            mn++;
            i++;
        }
    }
    cout << (mx-mn) << " " << mx <<endl;
    return 0;
}

