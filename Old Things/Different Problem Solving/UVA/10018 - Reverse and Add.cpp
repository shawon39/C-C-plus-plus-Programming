#include <bits/stdc++.h>
using namespace std;

long long int rev(long long int num) {

    long long int lol,add = 0;;
    while(num)
    {
        lol = num % 10;
        add=(add*10)+lol;
        num = num/10;
    }
    return add;
}

int main()
{
    long long int test,num,add,sum,check;
    cin >> test;
    while(test--)
    {
       cin >> num;
        for(long long int i=0; i<1000; i++) {

         sum = num + rev(num);
         check = rev(sum);
         if(sum==check) {
            cout << i+1 << " " << sum <<endl;
            break;
         }
         num = sum;

        }
    }

    return 0;
}
