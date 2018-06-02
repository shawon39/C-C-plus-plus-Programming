#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

bool myfun(int a, int b){
    return a>b;
}

int main()
{
    vector <int> v;
    vector <int>::iterator it;

    v.push_back(54);
    v.push_back(43);
    v.push_back(143);
    v.push_back(522);
    v.push_back(10);
    v.push_back(44);

    sort(v.begin(), v.begin()+3);    /// Sorting to exact point
    for(it = v.begin(); it!=v.end(); it++)
    {
        cout << *it << ' ';
    }
    puts("");

    sort(v.begin(), v.end());   /// Ascending
    for(it = v.begin(); it!=v.end(); it++)
    {
        cout << *it << ' ';
    }

    puts("");
    sort(v.begin(), v.end(), myfun);    /// Descending
    for(it = v.begin(); it!=v.end(); it++)
    {
        cout << *it << ' ';
    }

    return 0;
}




