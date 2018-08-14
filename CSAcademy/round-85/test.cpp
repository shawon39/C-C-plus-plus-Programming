#include <bits/stdc++.h>
using namespace std;

int arr[105];
#define ll long long int

int solve()
{
    for(int i=1; i<=200; i++)
    {
        int temp = i, sum=0;
        while(temp)
        {
            sum += (temp%10);
            temp /= 10;
        }
        arr[i] = sum;
    }
}

int main()
{
    int n, x; solve();

    for(int i=1; i<=200; i++)
    {
        cout << i << " " << arr[i] << endl;
    }
    return 0;

}

