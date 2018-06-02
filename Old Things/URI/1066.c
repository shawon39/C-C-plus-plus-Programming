#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,count=0,count1=0,count2=0,count3=0;
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);

    if(a%2==0) count+=1;
    if(a%2==1 || a%2==-1) count1+=1;
    if(a>0) count2+=1;
    if(a<0) count3+=1;

    if(b%2==0) count+=1;
    if(b%2==1 || b%2==-1) count1+=1;
    if(b>0) count2+=1;
    if(b<0) count3+=1;

    if(c%2==0) count+=1;
    if(c%2==1 || c%2==-1) count1+=1;
    if(c>0) count2+=1;
    if(c<0) count3+=1;

    if(d%2==0) count+=1;
    if(d%2==1 || d%2==-1) count1+=1;
    if(d>0) count2+=1;
    if(d<0) count3+=1;

    if(e%2==0) count+=1;
    if(e%2==1 || e%2==-1) count1+=1;
    if(e>0) count2+=1;
    if(e<0) count3+=1;

    printf("%d valor(es) par(es)\n",count);
    printf("%d valor(es) impar(es)\n",count1);
    printf("%d valor(es) positivo(s)\n",count2);
    printf("%d valor(es) negativo(s)\n",count3);

    return 0;

}



