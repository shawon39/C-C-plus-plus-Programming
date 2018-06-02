 #include <stdio.h>
int main()
{
    int row,space,star,num;
    scanf("%d",&num);

    for(row=1; row<=num; row++)
    {
        for(space=num-row; space>=0; space--)
        {
            printf(" ");
        }
        for(star=1; star<=(row*2)-1; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}





























