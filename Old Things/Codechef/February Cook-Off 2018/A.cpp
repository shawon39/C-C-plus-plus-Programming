#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a; cin >> n;

    while(n--)
    {
        int ct = 0, test = 5;
        while(test--)
        {
            cin >> a;
            if(a==1) ct++;
        }
        if(ct==0) cout << "Beginner" <<endl;
        else if(ct==1) cout << "Junior Developer" <<endl;
        else if(ct==2) cout << "Middle Developer" <<endl;
        else if(ct==3) cout << "Senior Developer" <<endl;
        else if(ct==4) cout << "Hacker" <<endl;
        else if(ct==5) cout << "Jeff Dean" <<endl;
    }

    return 0;
}


