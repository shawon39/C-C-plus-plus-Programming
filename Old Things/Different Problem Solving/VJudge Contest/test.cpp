#include <bits/stdc++.h>
using namespace std;

vector <char> v;
vector <string> v2;
vector <string>::iterator it;

bool result(char ch)
{

    if(  v[0]==ch && v[1]=='X' && v[2]==ch )
    {
       return true;
    }
    else if( v[3]==ch && v[4]=='X' && v[5]==ch )
    {
       return true;
    }
    else if( v[6]==ch && v[7]=='X' && v[8]==ch )
    {
       return true;
    }
    else if( v[0]==ch && v[3]=='X' && v[6]==ch )
    {
       return true;
    }
    else if( v[1]==ch && v[4]=='X' && v[7]==ch )
    {
       return true;
    }
    else if( v[2]==ch && v[5]=='X' && v[8]==ch )
    {
       return true;
    }
    else if( v[0]==ch && v[4]=='X' && v[8]==ch )
    {
       return true;
    }
    else if( v[2]==ch && v[4]=='X' && v[6]==ch )
    {
        return true;
    }

    else return false;
}

int main()
{
    int i,T, x, o;
    scanf("%d",&T);
    char input;

    while(T--)
    {
        x=0, o=0;

        for(i=0; i<9; i++)
        {
            cin >> input;
            v.push_back(input);
        }
        if(T>0) puts("");

        for(int i=0; i<v.size(); i++)
        {
            if(v[i]=='X') x++;
            if(v[i]=='O') o++;
        }

        bool valid;
        int ct=0;

        if(x == (o+1)){
           valid = result('X');
        }
        if(x==o){
           valid = result('O');
        }
        else{
            v2.push_back("no");
        }

        v.clear();

    }

    for(it = v2.begin(); it!=v2.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
