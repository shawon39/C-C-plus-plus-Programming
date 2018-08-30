#include <iostream>
#include <vector>
#include<stack>
using namespace std;

int main ()
{
    vector<int>v(400000000, 2);
    long long int sum = 0;

    for(auto x : v){ sum += x; } cout << sum << endl;

    return 0;
}
