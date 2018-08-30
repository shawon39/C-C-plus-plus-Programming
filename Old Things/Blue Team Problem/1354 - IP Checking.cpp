#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define dbg1(x) cout<< #x<<" = "<<x<<endl;
#define dbg2(x,y) cout<<#x<<" = "<<x<<" , "<<#y<<" = "<<y<<endl;
#define loop(v) for(auto x : v2){ cout << x << " "; } cout << endl;

int main()
{
   fast; int test; cin >> test;

    for(int j=1; j<=test; j++) {

        string str, str2;
        cin >> str >> str2;
        vector<int> v;
        vector<string>v2,v3;

        int ans  = 0;
        for(int i=0; i<str.length(); i++) {
            if(str[i] == '.') {
                v.push_back(ans);
                ans = 0;
                continue;
            }
            ans = ans*10 + ( str[i]-48 );
        }
        v.push_back(ans);

        ans  = 0; string lol="";
        for(int i=0; i<str2.length(); i++) {

            if(str2[i] == '0' && !ans ) continue;
            if(str2[i] == '.') {
                if(lol=="") v2.push_back("0");
                else v2.push_back(lol);
                lol = "";
                ans  = 0;
                continue;
            }
            ans = 1;
            lol += str2[i];
        }
        if(lol=="") v2.push_back("0");
        else v2.push_back(lol);

        for(int i=0; i<v.size(); i++) {
            ans = v[i];
            lol = "";
            while(ans) {
                int temp = ans%2;
                lol += temp+48;
                ans /= 2;
            }
            if(lol=="") {
               v3.push_back("0");
               continue;
            }
            reverse(lol.begin(), lol.end());
            v3.push_back(lol);
        }

        //loop(v2);
        //loop(v3);

        if(v3==v2) cout << "Case " << j << ": " << "Yes" << endl;
        else cout << "Case " << j << ": " << "No" << endl;
    }
    return 0;
}

