#include <stdio.h>

int solve(int n)
{
    if (!n) return 0;
    int res = (n / 3) * 2;
    if (n % 3 == 2) res++;
    return res;
}

int main()
{

    int caseNo, cases = 0, a, b;
    scanf("%d", &caseNo);
    while (caseNo--)
    {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", ++cases, solve(b) - solve(a - 1));
    }
    return 0;
}
