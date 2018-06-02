#include <stdio.h>

struct student
{
    char name[20];
    char id[20];
    double cgpa;
};

int main()
{
    struct student result[50];
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%s",result[i].name);
        scanf("%s",result[i].id);
        scanf("%lf",&result[i].cgpa);
    }
    for(i=0; i<10; i++)
    {
        printf("%s\n",result[i].name);
        printf("%s\n",result[i].id);
        printf("%.2lf\n\n",result[i].cgpa);
    }
    return 0;
}
