#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector <int> v;
    vector <int>::iterator it;

    for(int i=1; i<=5; i++){
        v.push_back(i);
    }

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    puts("\n-----------------------");
    it = v.begin();
    cout << ++*it ;
    puts("\n-----------------------");

    for(it = v.begin(); it!=v.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}



