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
#define murikha return 0

int main()
{
    int ct=0,totalReading=0,timeForReadingPerDay,days,times,work[110];
    cin >> days >> times;
    for(int i=0; i<days; i++) {
        cin >> work[i];
    }
    for(int i=0; i<days; i++) {
        ct++;
        timeForReadingPerDay = 86400-work[i];
        totalReading += timeForReadingPerDay;
        if(totalReading >= times){
           cout << ct <<endl;
            murikha;
        }
    }
    return 0;
}


