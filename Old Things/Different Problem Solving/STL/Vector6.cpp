#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(39);
    v.push_back(35);
    v.push_back(43);
    v.push_back(13);
    v.push_back(31);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << ' ';

    puts("");
    v.insert(v.begin()+3,10);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << ' ';

    puts("");
    v.erase(v.begin()+3);

    for(int i=0; i<v.size(); i++)

        cout << v[i] << ' ';
    puts("");
    v.clear();
    if(v.empty())
        cout << "Empty!";

    else
        cout << "Not Empty!";
    return 0;
}





