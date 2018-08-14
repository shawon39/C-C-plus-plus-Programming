#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p; cin >> n >> p;
    int arr[205];

    for(int i=1; i<=n*2; i++)
    {
        cin >> arr[i];
    }

    int ran,price, eat = 0, h=0, sum=0;

    for(int i=1; i<=n; i++)
    {
        ran = rand() % n + 1;
        cin >> price;

        if( sum  +  price > p )
        {
            p += 100;
            cout << ++h << " " << eat <<endl;
        }

        if( sum + price == p ) break;

        sum += price;

        cout << h << " " << ++eat <<endl;

    }

    return 0;
}


