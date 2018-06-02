#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int ar[5]={43,243,24,234,3};
    list <int> mylist(ar,ar+5);
    list <int>::iterator it;

    cout << mylist.front();
    puts("");
    cout << mylist.back();
    puts("");

    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout << *it << " ";
    }
    puts("");
    mylist.pop_back();
    mylist.pop_front();

    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout << *it << " ";
    }

   return 0;
}


