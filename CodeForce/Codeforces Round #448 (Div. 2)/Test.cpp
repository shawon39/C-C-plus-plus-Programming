#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[500];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(n==1)
    {
        printf("360\n");
        return 0;
    }
    if(n==2)
    {
        printf("%d\n",abs(arr[0]-arr[1]));
        return 0;
    }
    sort(arr,arr+n);

    int sum=0,sum2=0;

    sum = arr[0];
    for(int i=1; i<n; i++)
    {
        if(sum<=sum2)
        {
            sum+=arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
         if(arr[i]>=180 || sum2==180 || sum==180){
            printf("0\n");
            return 0;
        }
    }
    cout << sum << " " << sum2 <<endl ;
    printf("%d\n",abs(sum-sum2));
    return 0;
}

