#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector <int> v(5,2);
    v.push_back(10);

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] <<endl;
    }
    return 0;
}


