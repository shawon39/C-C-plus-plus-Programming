#include <iostream>
using namespace std;

int main()
{
    int n,i,j,sum,lol;
    while(true)
    {
        cin >> n;
        if(n==0) break;
        for(i=1; i<=n; i++)
        {
            if(i==1) lol=1;
            else lol=lol*2;
            sum=lol;
            for(j=1; j<=n; j++)
            {
                if(j==1) cout << sum;
                else cout << ' ' << sum;
                sum=sum*2;
            }
            cout <<endl;
        }
    }
    return 0;
}
