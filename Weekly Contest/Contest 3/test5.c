#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if( num >=0 && num <=9 )
    {
        printf("%d\n", num + 48 );
    }
    else
    {
        printf("Error!\n");
    }
    main();
    return 0;
}
