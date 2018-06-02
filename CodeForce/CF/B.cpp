#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string str; cin >> str;

    int ans = 0, ct = 0;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'x') ct++;
        else ct = 0;

        if(ct>=3)
        {
            ans++;
        }
    }
    cout << ans << endl;
    //main();
    return 0;
}
