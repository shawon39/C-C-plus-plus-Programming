#include <iostream>
using namespace std;

int main()
{
    pair<int, int>p,p2;

    p = make_pair(2,2);
    p2 = make_pair(2,10);

    swap(p.first, p.second);

    cout << (p == p2) << endl;
    cout << (p != p2) << endl;
    cout << (p >= p2) << endl;
    cout << (p <= p2) << endl;
    cout << (p > p2) << endl;
    cout << (p < p2) << endl;

    return 0;
}
