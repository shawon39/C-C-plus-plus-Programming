#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first, second, third;
    cin >> first >> second;

    third+=first[0];
    for(int j=1; j<first.length(); j++){
        if(second[0]>first[j]){
            third+=first[j];
        }
        else break;
    }
    third+=second[0];

    cout << third <<endl;

    return 0;
}
