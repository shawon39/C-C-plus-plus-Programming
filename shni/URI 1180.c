#include<stdio.h>
int main()
{
    int n,array[1000],i,j,mini,p=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
        mini = array[0];
    }
        for(i=1; i<n; i++)
        {
            if(array[i]<mini)
            {
                mini = array[i];
                   p = i;
            }

    }

    printf("Menor valor: %d\n",mini);
    printf("Posicao: %d\n",p);
return 0;

}
