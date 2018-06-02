#include <iostream>
#include <stdio.h>
#define pf(x) printf("%d\n",x)
using namespace std;

int bal;
int recursion(int cnt)
{
    bal++;
    if(cnt==0) return 1;
    return cnt*recursion(cnt-1);
}

void lol(int ct){
    if(ct>5) return;
    cout << ct <<endl;
    lol(ct+1);
    cout << ct <<endl;
}

int main()
{
    cout << recursion(4)<<endl;
    cout << bal <<endl;
    return 0;
}

