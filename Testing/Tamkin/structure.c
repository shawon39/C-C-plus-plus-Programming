#include <stdio.h>

struct Account {
    char name[20];
    float balance, transaction;
};

int main()
{
    int i,n;  scanf("%d", &n);
    struct Account ac[10000];

    for(i=0; i<n; i++)
    {
        scanf("%s", &ac[i].name);
        scanf("%f", &ac[i].balance);
        scanf("%f", &ac[i].transaction);
    }

    for(i=0; i<n; i++)
    {
        printf("Name: %s\n", ac[i].name);
        printf("Balance: %f\n", ac[i].balance);
        printf("Transaction: %f\n\n", ac[i].transaction);
    }

    return 0;
}

//Sakib 4523.045 245.435
//Sakib 4523.045 245.435
//Sakib 4523.045 245.435
//Sakib 4523.045 245.435
//Sakib 4523.045 245.435


