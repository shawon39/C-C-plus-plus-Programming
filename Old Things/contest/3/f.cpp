#include <iostream>
using namespace std;

int n[100005];

int main()
{
    int t,i,count=1,lol=1;
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n[i];
    }

    for(i=0; i<t; i++)
    {
        if(n[i]<=n[i+1])
        {
            count++;
            if(count>=lol)
            {
                lol=count;
            }
        }
        else
        {
            count=1;
        }
    }
    cout << lol <<endl;
    return 0;
}
