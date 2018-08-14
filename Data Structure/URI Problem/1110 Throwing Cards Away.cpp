#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main() {

    fast; int n;
    list <int> mylist;

    while( cin >> n ) {

        if(n==0) break;
        cout << "Discarded cards: ";
        for(int i=1; i<=n; i++)
        {
            mylist.push_back(i);
        }
        for(int i=1; i<n; i++)
        {
            if(i!=(n-1)) cout << mylist.front() << ", ";
            else cout << mylist.front() << "";

            mylist.pop_front();
            int s = mylist.front();
            mylist.push_back(s);
            mylist.pop_front();
        }
        cout << endl << "Remaining card: " << mylist.front() <<endl;
        mylist.clear();
    }
    return 0;
}

