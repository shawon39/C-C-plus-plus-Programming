#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v2){ cout << x << " "; } cout << endl;

bool LeapYear( int year ) {
	return ((year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0));
}

int main()
{
    fast; int test; cin >> test;
    map<string,int>mp;
    mp["January"] = 1; mp["February"] = 2; mp["March"] = 3; mp["April"] = 4; mp["May"] = 5; mp["June"] = 6;
    mp["July"] = 7; mp["August"] = 8; mp["September"] = 9; mp["October"] = 10; mp["November"] = 11; mp["December"] = 12;

    for(int j=1; j<=test; j++) {

        string m1, m2;
        int d1,d2, y1, y2, ans=0;

        cin >> m1 >> d1; cin.ignore(); cin >> y1;
        cin >> m2 >> d2; cin.ignore(); cin >> y2;

        if(y1==y2 && LeapYear(y1) ) {
            if( mp[m1] > 2 ) ans = 0;
            else if( mp[m2] == 2 && d2 == 29  ) ans = 1;
            else if( mp[m2] > 2 ) ans = 1;
            else ans = 0;
        }
        else {
            ans = (y2-y1)/4;
        }
        cout << "Case " << j << ": " << ans << endl;

    }
    return 0;
}


