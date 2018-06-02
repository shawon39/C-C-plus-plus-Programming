#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=-1,a;
    for(int i=0; i<10; i++)
    {
        cin >> a;
        if(a==1) x = i;
    }

    long long num,i,n,digit,ct=0;
    cin >> num;

    if(x==-1) {
        cout << num <<endl;
        //cout << x << endl;
        //main();
        return 0;
    }

    for(i=x; i<num; i++)
    {
        n = i;
        if(n==0) ct++;
        while ( n > 0 )
        {
            digit = n % 10;
            if(digit == x) {
                ct++;
                break;
            }
            n = n / 10;
        }
    }
    cout << num - ct <<endl;
    //main();
    return 0;
}

