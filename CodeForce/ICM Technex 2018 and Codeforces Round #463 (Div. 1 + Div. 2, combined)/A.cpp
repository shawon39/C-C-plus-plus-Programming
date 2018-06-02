#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    for(int i=str.length()-2; i>=0; i--) {
        str += str[i];
    }
    cout << str <<endl;
    return 0;
}

