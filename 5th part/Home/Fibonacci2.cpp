#include <iostream>
#include <stdio.h>
#define pf(x) printf("%d\n",x)
using namespace std;

int cnt,arr[10001];

int fib(int num)
{
    cnt++;
    if(arr[num]!=0){
        return arr[num];
    }
    if( num == 1 || num==2 ){
        return arr[num];
    }
    arr[num] = fib(num-1) + fib(num-2);
    return arr[num];
}

int main()
{
    arr[1]=1;
    arr[2]=1;
    cout << "Fib: " << fib(7) <<endl;
    pf(cnt);
    return 0;
}



