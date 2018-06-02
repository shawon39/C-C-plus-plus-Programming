

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n > 36) cout << "-1" << endl;
    else {
        while(n) {
            if(n % 2 == 0) {
                cout << "8";
                n -= 2;
            } else {
                cout << "9";
                n--;
            }
        }
        cout << endl;
    }
    main();
    return 0;
}
