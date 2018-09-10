#include <stdio.h>

void inputAndOutput()
{
    #ifndef ONLINE_JUDGE
    freopen("D:\\Testing\\input.txt", "r", stdin);
    freopen("D:\\Testing\\output.txt", "w", stdout);
    #endif 
}

int main()
{ 
    inputAndOutput();
    
    printf("%d %d\n", 670%32, 670&31);
}