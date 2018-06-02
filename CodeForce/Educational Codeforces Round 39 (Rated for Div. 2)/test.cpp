#include <bits/stdc++.h>
using namespace std;

void file() {
    #ifndef lol
      freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    file();
    float x = 3.1;
    double y = 3.1;
    cout << x << " " <<y <<endl;
    x==y? cout << "yes" <<endl : cout << "No" <<endl;
    return 0;
}
