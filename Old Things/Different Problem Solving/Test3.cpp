#include <bits/stdc++.h>
using namespace std;

char v[100];
int ct,lol,lol2;

bool result()
{
    int xWin=0,yWin=0;

    if( ( v[0]=='X' && v[1]=='X' && v[2]=='X' ) || ( v[0]=='O' && v[1]=='O' && v[2]=='O' ) )
    {
        if(v[0]=='X') xWin++;
        else yWin++;
    }
    if( ( v[3]=='X' && v[4]=='X' && v[5]=='X' ) || ( v[3]=='O' && v[4]=='O' && v[5]=='O' ) )
    {
        if(v[3]=='X') xWin++;
        else yWin++;
    }
    if( ( v[6]=='X' && v[7]=='X' && v[8]=='X' ) || ( v[6]=='O' && v[7]=='O' && v[8]=='O' ) )
    {
        if(v[6]=='X') xWin++;
        else yWin++;
    }
    if( ( v[0]=='X' && v[3]=='X' && v[6]=='X' ) || ( v[0]=='O' && v[3]=='O' && v[6]=='O' ) )
    {
        if(v[0]=='X') xWin++;
        else yWin++;
    }
    if( ( v[1]=='X' && v[4]=='X' && v[7]=='X' ) || ( v[1]=='O' && v[4]=='O' && v[7]=='O' ) )
    {
        if(v[1]=='X') xWin++;
        else yWin++;
    }
    if( ( v[2]=='X' && v[5]=='X' && v[8]=='X' ) || ( v[2]=='O' && v[5]=='O' && v[8]=='O' ) )
    {
        if(v[2]=='X') xWin++;
        else yWin++;
    }
    if( ( v[0]=='X' && v[4]=='X' && v[8]=='X' ) || ( v[0]=='O' && v[4]=='O' && v[8]=='O' ) )
    {
        if(v[0]=='X') xWin++;
        else yWin++;
    }
    if( ( v[2]=='X' && v[4]=='X' && v[6]=='X' ) || ( v[2]=='O' && v[4]=='O' && v[6]=='O' ) )
    {
        if(v[2]=='X') xWin++;
        else yWin++;
    }

    if(xWin==1 && yWin==1) return false;
    else if(xWin==0 && yWin==0 && ct!=9) return false;
    else
    {
        if(lol2==1)
        {
            if(xWin==1)
            {
                return false;
            }
            else return true;
        }
        else if(lol==1){
            if(yWin==1)
            {
                return false;
            }
            else return true;
        }
        else return true;
    }
}

int main()
{
    int i,T, x, o;
    scanf("%d",&T);
    char input;

    while(T--)
    {
        x=0, o=0,ct=0,lol=0,lol2=0;

        for(i=0; i<9; i++)
        {
            cin >> input;
            v[i]=input;
        }
        int len = strlen(v);
        for(i=0; i<len; i++)
        {
            if(v[i]=='X')
            {
                x++;
                ct++;
            }
            if(v[i]=='O')
            {
                o++;
                ct++;
            }
        }

        bool valid;

        if(x == (o+1))
        {
            lol = 1;
            valid = result();
            if(valid) printf("yes\n");
            else printf("no\n");
        }
        else if(x==o)
        {
            lol2 = 1;
            valid = result();
            if(valid) printf("yes\n");
            else printf("no\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
