#include <bits/stdc++.h>
using namespace std;

int main()
{
    string lol; cin >> lol;
    vector<char>str;

    for(int i=0; i<lol.length(); i++)
    {
        str.push_back(lol[i]);
    }

    sort(str.begin(), str.end());

    for(int i=0; i<str.size(); i++)
    {
        cout << str[i];
    }

    cout << endl;
    main();
    return 0;
}



