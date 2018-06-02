#include <iostream>
#include <stdio.h>
#define pf(x) printf("%d\n",x)
using namespace std;

int sumAllNumber(int num)
{
    if(num==1) return 1;
    return num+sumAllNumber(num-1);
}

int main()
{
    printf("Enter a number: ");
    int n; cin >> n;
    cout << sumAllNumber(n);
    return 0;
}



