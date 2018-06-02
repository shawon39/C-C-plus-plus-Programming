#include <stdio.h>

struct student
{
    char name[20];
    char id[20];
    double cgpa;
};
int main()
{
    struct student result[10];
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%s",result[i].name);
        scanf("%s",result[i].id);
        scanf("%lf",&result[i].cgpa);
    }

    for(i=0; i<10; i++)
    {
        printf("NAME: %s\n",result[i].name);
        printf("ID: %s\n",result[i].id);
        printf("CGPA: %.2lf\n\n",result[i].cgpa);
    }
    return 0;
}

/**Shawon 161.15-6753 3.25
Rakib 161.15-6953 3.25
Rohan 161.15-6953 3.25
sarjan 161.15-6353 3.25
rafa 161.15-6953 3.15
tania 161.15-6933 3.25
ahyaa 161.15-6953 3.75
vhaa 161.15-6933 3.25
kmaa 161.15-6953 3.28
Shjhijaawon 161.15-6953 3.25*/
