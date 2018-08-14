#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;

    int lol =  str.find("ACM");

    if( lol != -1 ) cout << "Fun!" <<endl;
    else cout << "boring..." <<endl;

    return 0;

}

