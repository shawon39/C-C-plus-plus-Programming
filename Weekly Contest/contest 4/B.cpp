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

// descending order
bool myfun(int a, int b)
{
    return a>b;
}

struct greaterr
{
    template<class T>
    bool operator()(T const &a, T const &b) const
    {
        return a > b;
    }
};
//sort(v.begin(), v.end(), greaterr());
//v.erase (v.begin());

int arr[10000000];

int check(int x)
{
    if(x%7==0) return 1;
    int temp = x;
    while( temp!=0 )
    {
        if(temp%10==7) return 1;
        temp /= 10;
    }
    return 0;
}

int preCalculation()
{
    for(int i=1; i<10000000; i++)
    {
        if( check(i) == 1 ) arr[i]=1;
        else arr[i]=0;
    }
}


int main()
{
    int n,m,k;

    preCalculation();

    while( cin >> n >> m >> k )
    {
        if( n == 0 && m == 0 && k==0 ) break;

        int ct = 0, ck = 1, lol = 0; int mr[105]={0};

        while(1)
        {
            if(ck==1)
            {
                for(int j=1; j<=n; j++)
                {
                    if(arr[++ct] == 1) mr[j]++;
                    if( mr[m] == k ) {
                        cout << ct <<endl;
                        lol = 1;
                        break;
                    }
                }
                ck = 0;
            }
            else
            {
                for(int j=n-1; j>=2; j--)
                {
                    if(arr[++ct] == 1) mr[j]++;
                    if( mr[m] == k ) {
                        cout << ct <<endl;
                        lol = 1;
                        break;
                    }
                }
                ck = 1;
            }
            if(lol == 1) {
                break;
            }
        }
    }
    return 0;
}







