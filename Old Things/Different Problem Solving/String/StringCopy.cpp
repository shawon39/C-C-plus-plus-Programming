#include <iostream>
using namespace std;
#include <cstdio>
#include <string>

int main()
{
    int i,j,n;
    string line, line2;
    scanf("%d",&n);
    getchar();

    for(i=0; i<n; i++)
    {
        getline(cin,line);
        for(j=0; line[j]!=' '; j++)
        {
            line2+=line[j];
        }
        cout<< line2 <<endl;
        line2.clear();
    }
    return 0;
}
