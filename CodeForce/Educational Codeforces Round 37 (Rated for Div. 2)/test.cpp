#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int mark[500];

int main()
{

    fast;
    int test=1,a,b,x;
    cin >> test;

    while (test--)
    {
        int mark[500]= {0};
        int lol = 0;
        cin >> a >> b;
        for(int i=1; i<=b; i++)
        {
            cin >> x;
            mark[x] = 1;
        }
        int ct = 0, x=0,y=0,n=a+1,m=0,f=0,mx=0;
        int bal=0,bal2=0;

        int hehe =1;
        while( hehe <=a )
        {
            if(mark[hehe]==0)bal++;
            else bal = 0;
            hehe++;
        }

        for(int hehe=1; hehe<=a; hehe++ )
        {
            if(mark[hehe]==0) bal2++;
            else {
                break;
            }
        }
        bal++;
        bal2++;
        for(int i=1; i<=a; i++)
        {

            if( mark[i] != 1)
            {
                ct++;
                if(ct==1) x = i;
            }
            else
            {
                if(ct > lol)
                {
                    m = x;
                    n = i;
                }
                lol = max(lol,ct);
                ct = 0;
            }
            if(ct > lol)
            {
                m = x;
                n = i;
            }
            lol = max(lol,ct);

        }
        int fuck = 0, fuck2 = 0;
        for(int i=1; i<m; i++)
        {
            if(mark[i]==1)
            {
                fuck = 1;
            }
        }
        for(int i=n; i<=a; i++)
        {
            if(mark[i]==1)
            {
                fuck2 = 1;
            }
        }

        if(fuck==1 && fuck2==1)
        {

            int ball = lol/2;
            if(lol%2==1)
            {
                ball++;
            }
            if(ball+1 > bal && ball+1 > bal2) cout << (ball+1) << endl;
            else
            {
                if(bal>bal2) cout << bal <<endl;
                else cout << bal2 <<endl;
            }
        }
        else
        {
            if(lol+1 > bal && lol+1 > bal2) cout << (lol+1) << endl;
            else
            {
                if(bal>bal2) cout << bal <<endl;
                else cout << bal2 <<endl;
            }
        }

    }

    return 0;
}


