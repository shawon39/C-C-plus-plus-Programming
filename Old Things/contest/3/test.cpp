
#include<iostream>

using namespace std;

long long n,f[1000];

int main()
{
    int t,i,j,n,k,r=0;
    cin >> t;
    while(t--)
    {
        int b=0;
        cin >> n;
        if(n%2==1)
        {
            cout << "Case "<<++r<<": Impossible"<<endl;
            continue;
        }
        for(i=2,j=0; i<=n/2; i++)
        {
            if(n%i==0)
            {
                if(i%2==1)
                {
                    f[j]=i;
                    j++;
                }
            }
        }
        k=j;
        for(i=0; i<k; i++)
        {
            int v=n/f[i];
            if(v%2==0)

                cout << "Case "<<++r<<": " << f[i] << ' ' << v <<endl;
                b=1;
                break;1

        }
        if(b==0) cout << "Case "<<++r<<": Impossible"<<endl;
    }
    return 0;
}
