#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,k=1;
    cin >> T;
    while(T--)
    {
        int a,b,sum=0;
        cin>>a;
        cin>>b;
        for(int i=a; i<=b; i++)
        {
            if(i%2!=0){
                sum+=i;
            }
        }
        printf("Case %d: %d\n",k++,sum);
    }
    return 0;
}
