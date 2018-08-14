#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    string s;
    cin >> s;

    list <char> liist;
    list <char>::iterator it;
    liist.push_back('(');

    for(it=liist.begin(); it!=liist.end(); it++)
    {
        if( *it=='*' || *it=='/' )
        {
            liist.push_back(')');
            liist.push_back('(');
        }
    }

}
