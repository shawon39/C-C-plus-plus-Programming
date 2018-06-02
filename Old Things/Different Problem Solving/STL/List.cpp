#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    //list <int>mylist(4);
    //list <int>mylist(4,2);
    list <int>mylist;
    list <int>::iterator it;

    mylist.push_back(10);
    mylist.push_back(16);
    mylist.push_front(5);
    mylist.push_back(11);

    mylist.reverse();
    mylist.clear();

    cout << mylist.size() <<endl;

    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout << *it << " ";
    }
}
