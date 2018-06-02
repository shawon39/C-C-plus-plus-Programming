#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string str;
    set <string> st;
    set <char> ch;

    while(n--)
    {
        cin >> str;
        for(int i=0; i<str.length(); i++)
        {
           ch.insert(str[i]);
        }
        string lol;
        for(auto a: ch) {
           lol += a;
        }
        //cout << lol <<endl;
        st.insert(lol);
        ch.clear();
    }
    cout << st.size() <<endl;
    //main();
    return 0;
}
