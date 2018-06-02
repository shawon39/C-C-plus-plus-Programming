#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,n;
    cin >> T;

    while(T--){

    cin >> n;

    n = n * 567;
    n = n / 9;
    n = n + 7492;
    n = n * 235;
    n = n /47;
    n = n - 498;

    stringstream ss;
	ss << n;
    string str = ss.str();
    int m = str.length();
    cout << str[m-2] <<endl;

    }
    return 0;
}
