#include<stdio.h>
int main()
{
  int i,t,p;
  char m[10];
  char n[10];
  scanf("%d",&t);

  for(i=1;i<=t;i++)
  {
      scanf("%s%s",&m,&n);
      if((m[2]=='s' && n[2]=='p')||(m[2]=='p' && n[2]=='d')||(m[2]=='d' && n[2]=='g')||(m[2]=='g' && n[2]=='o')||(m[2]=='o' && n[2]=='s')||(m[2]=='s' && n[2]=='g')||(m[2]=='g' && n[2]=='p')||(m[2]=='p' && n[2]=='o')||(m[2]=='o' && n[2]=='d')||(m[2]=='d' && n[2]=='s'))
    printf("Caso #%d: Bazinga!\n",i);

    else if (m[2]==n[2])

        printf("Caso #%d: De novo!\n",i);
    else
        printf("Caso #%d: Raj trapaceou!\n",i);
  }
return 0;
}
