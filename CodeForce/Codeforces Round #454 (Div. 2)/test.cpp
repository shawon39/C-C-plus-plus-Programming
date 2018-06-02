#include<bits/stdc++.h>

using namespace std ;

int main(void)
{
      int a,b,c,d ;
      scanf("%d%d%d%d",&a,&b,&c,&d) ;
      int res = 2*d ;
      res= min(res, 2*c );
      if(res  < d  || 2*d >= a*2 || 2*d >= b*2 )printf("-1\n");
      else printf("%d\n%d\n%d\n",2*a ,2*b , res);

      return 0 ;
}
