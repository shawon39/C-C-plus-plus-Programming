#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int x = n%10;
   if(x>5) cout << n+(10-x) <<endl;
   else cout << (n-x) <<endl;

   return 0;
}

