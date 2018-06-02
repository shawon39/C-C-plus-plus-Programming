#include <iostream>
using namespace std;

int main()
{
    int problem,a,b,c,lol=0;
    cin >> problem;
    while(problem--)
    {
        int count=0;
        cin >> a >> b >> c;
        if(a==1) count++;
        if(b==1) count++;
        if(c==1) count++;
        if(count>1) lol++;
    }
    cout << lol <<endl;
    return 0;
}
