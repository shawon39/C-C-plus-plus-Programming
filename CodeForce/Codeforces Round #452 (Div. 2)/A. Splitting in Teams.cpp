#include <bits/stdc++.h>
using namespace std;

int main()
{
    int group,member,ct=0,ct2=0;
    int lol,lol2;
    cin >> group;
    while(group--) {
        cin >> member;
        if(member==1) ct++;
        else ct2++;
    }
    if(ct2 > ct) {
       cout << ct <<endl;
       return 0;
    }
    lol = (ct-ct2);
    lol2 = lol/3;
    cout << (ct2+lol2) <<endl;
    return 0;
}
