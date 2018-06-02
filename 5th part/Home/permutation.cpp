#include <bits/stdc++.h>
using namespace std;

void swaap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l,int r)
{

    cout << a << endl;
    cout << *a << endl;
    /*
    if(l==r) cout << a <<endl;
    else
    {
        for(int i=l; i<=r; i++)
        {
            swaap((a+l),(a+i));
            permute(a, l+1, r);
            swaap((a+l),(a+i));
        }
    }
    */
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str,0,n-1);
    return 0;
}
