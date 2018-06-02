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
    list<int>::iterator it;

    it = find(mylist.begin(),mylist.end(),24);
    cout << *it <<endl;

    mylist.insert(it,5);

    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout << *it << " ";
    }
    puts("");

    it = find(mylist.begin(),mylist.end(),25);

    if( it == mylist.end()){
        cout << "Not found !\n";
    }
    else cout << "Found !\n";

    it = mylist.begin();
    it = find(mylist.begin(),mylist.end(),24);
    mylist.erase(it);
    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout << *it << " ";
    }

   return 0;
}

