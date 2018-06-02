#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,k=0;
    cin >> t;
    while(t--) {

        long long n,s,s2,a,b;
        cin >> n;

        s = sqrt(n);
        s2 = s*s;

        if(s2==n){
            a = (s-1)*(s-1)+1;
            b = n;
        }
        else{
           a = (s*s)+1;
           b = (s+1)*(s+1);
        }


        long long mid = ( b-a )/2 + a;

        long long ck = sqrt(b);

        if(n==mid) printf("Case %d: %lli %lli\n",++k,ck,ck);

        else if( n>mid && ck%2==0 )
        {
            printf("Case %d: %lli %lli\n",++k,ck,(b-n)+1);
        }
        else if(n<mid && ck%2==0 ){
             printf("Case %d: %lli %lli\n",++k,(n-a)+1,ck);
        }

        else if(n>mid)
        {
            printf("Case %d: %lli %lli\n",++k,(b-n)+1,ck);
        }
        else{
            printf("Case %d: %lli %lli\n",++k,ck,(n-a)+1);
        }

    }
    return 0;
}
