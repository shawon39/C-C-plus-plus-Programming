#include <bits/stdc++.h>
using namespace std;

int res[100000],mi=99999999;
int n,k,xx;
int main()
{

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&res[i]);
    }
    for(int i=1; i<=n; i++)
    {
        int sum=0;
        for(int j=i; j<=n; j++)
        {
            sum+=res[j];
            xx=360-sum;
            if(abs(sum-xx)<mi)
            {
                mi=abs(sum-xx);
            }
        }
    }
    cout<<mi<<endl;
}
