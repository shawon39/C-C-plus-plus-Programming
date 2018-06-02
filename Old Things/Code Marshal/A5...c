#include<conio.h>
#include<stdio.h>
void main()
{
    float u,a,dist;
    int t;

    printf(" Enter the value of a : ");
    scanf("%f",&a);

    printf(" Enter the year of u :- ");
    scanf("%f",&u);

    printf(" Enter the value of t :- ");
    scanf("%d",&t);


    dist = (u * t) + (a * t * t)/2;
    printf("\n The distance equal to :- %f",dist);

    getch();
}
