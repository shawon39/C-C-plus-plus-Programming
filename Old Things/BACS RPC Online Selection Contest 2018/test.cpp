#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for(int tr = 1; tr <= tc; tr++)
    {
        int n, p;
        cin >> n >> p;
        int st[n];
        int et[n];
        int start = INT_MAX;
        int finish = -INT_MAX;

        for(int i = 0; i < n; i++)
        {
            cin >> st[i];
            cin >> et[i];
            if(st[i] < start) start = st[i];
            if(et[i] > finish) finish = et[i];
        }

        int ans = INT_MAX;
        for(int i = start; i <= finish; i++)
        {
            for(int j = i; j <= finish; j++)
            {
                int cnt = 0;
                for(int x = 0; x < n; x++)
                {


                    if((st[x] >= i and st[x] <= j) or (et[x] >= i and et[x] <= j) or (st[x] <= i and et[x] >= j))
                    {
                        cnt++;
                    }
                }
                if(cnt >= p)
                {
                    if((j-i) < ans) ans = j-i;
                }
            }
        }
        printf("Case %d: %d\n", tr, ans);


    }

}
