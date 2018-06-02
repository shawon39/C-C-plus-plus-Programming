#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

bool myfun(int a, int b){
    return a>b;
}

int main()
{
    int ar[5] = {42,324,34,432,54};

    sort(ar, ar+5);
    for(int i=0; i<5; i++){
        cout << ar[i] << ' ';
    }
    puts("");
    sort(ar, ar+5, myfun);

    for(int i=0; i<5; i++){
        cout << ar[i] << ' ';
    }

    return 0;
}




