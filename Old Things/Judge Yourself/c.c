#include<stdio.h>
int main()
{
      int long long x,y;
      while(scanf("%lld %lld",&x,&y)==2){
            if(x>y)
                  printf("%lld\n",x-y);
                  else
                  printf("%lld\n",y-x);
      }
      return 0;
}
