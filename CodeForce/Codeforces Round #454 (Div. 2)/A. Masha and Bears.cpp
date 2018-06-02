#include <bits/stdc++.h>
bits/stdc++.h
using namespace std;

int main()
{
   int a,b,c,x;
   cin >> a >> b >> c >> x;

   if(2*c >= x) {
      if(a>b && a>c ) cout << a <<endl;
      if(b<a && b>a ) cout << b <<endl;
      if(c<a && c<b) cout << c <<endl;
   }
   else { cout << -1 <<endl; return 0; }

   return 0;
}
