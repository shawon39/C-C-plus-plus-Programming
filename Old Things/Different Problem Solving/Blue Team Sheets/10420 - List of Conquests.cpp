#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main()
{
    int i,j,n,ct;
    string line,temp;
    map <string, int>m;
    map <string, int>::iterator it;
    scanf("%d",&n);
    getchar();
    for(j=0; j<n; j++)
    {
        getline(cin,line);
        i=0,ct=0;
        while(line[i]!=' ')
        {
            ct++;
            i++;
        }
        temp = line.substr(0,ct);
        if ( m.find(temp) != m.end() )
        {
            m[temp]++;
        }
        else m[temp] = 1;

    }

    for(it=m.begin(); it!=m.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
