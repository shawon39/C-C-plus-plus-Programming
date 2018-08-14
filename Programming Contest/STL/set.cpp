#include <iostream>
using namespace std;
#include <set>

int main()
{
    set <int> s;
    set <int>::iterator it;

    for(int i=1; i<=10; i++) {
        s.insert(10-i);
    }
    it = s.find(6);

    if( s.find(61) != s.end() ) {
        return 0;
    }

    s.insert(5);
    s.insert(5);
    s.insert(51);
    s.insert(51);
    s.insert(15);
    s.insert(15);

    for(it = s.begin(); it != s.end(); it++) {
        cout << *it <<endl;
    }

}
