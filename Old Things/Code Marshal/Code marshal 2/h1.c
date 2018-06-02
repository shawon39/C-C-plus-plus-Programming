#include <stdio.h>

void func1();
void func2(void);

int main()
{
    func2();
    printf("3");
    return 0;
}

void func2()
{
    func1();
    printf("2 ");
}

void func1()
{
    printf("1 ");
}
