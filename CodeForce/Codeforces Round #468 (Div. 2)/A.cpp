#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,lol=0;
    cin >> x >> y;

    int hmm = abs(x-y);

    if(hmm%2 == 0)
    {
        for(int i=1; i<=hmm/2; i++)
        {
            lol += i;
        }
        lol *= 2;
    }
    else
    {
        for(int i=1; i<=hmm/2; i++)
        {
            lol += i;
        }
        lol *= 2;
        lol += (hmm/2)+1;
    }
    cout << lol << endl;
    return 0;
}

