#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,x,y,a=0,b=0,c=0,d=0;
   cin >> t;

   while(t--)
   {
       cin >> x >> y;
       if(x>=0 && y>=0) a++;
       else if(x>=0 && y<0) b++;
       else if(x<0 && y>=0) c++;
       else if(x<0 && y<0) d++;
   }

   int m = a+b;
   int n = c+d;

   if( m>=n && n<=1) cout << "Yes" <<endl;
   else if(n>=m && m<=1) cout << "Yes" <<endl;
   else cout << "No" <<endl;

   return 0;
}

