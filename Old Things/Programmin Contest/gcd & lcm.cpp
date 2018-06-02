#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a%b) : a; } /// One way
/// __gcd ( a , b ); /// Another Way

int main()
{
    int a = 100, b = 1000;
    int x = __gcd ( a , b );
    printf("GCD: %d\n",x);
    printf("LCM: %d\n",(a*b)/x);
    return 0;
}


/// I use a lot standard c++ gcd function (__gcd(x, y)).
/// But today, I learnt that on some compiler __gcd(0, 0) gives exception. (Maybe because 0 is divisible by any number?! )

/// Note for myself and everybody: While using __gcd we must carefully handle (0, 0) case or write own gcd.
