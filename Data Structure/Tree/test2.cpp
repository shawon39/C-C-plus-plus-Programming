#include <bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int a,b,ct,temp,temp2,temp3;
    cin >> a >> b;
    int bal = (b-a);
    multimap <int,int, greater <int>> m;
    multimap <int,int, greater <int>>::iterator it;

    for(int i=a; i<=b; i++)
    {
        temp = i, ct = 0;

        while( temp != -1 )
        {
            int lol = temp % 10;

            if( lol == 0 ) ct++;
            else if( lol == 6 ) ct++;
            else if( lol == 9 ) ct++;
            else if( lol == 8 ) ct+=2;

            temp /= 10;
            if(!temp) break;
        }
        m.insert(make_pair(ct,i));
    }



    for(auto f:m)
    {
        cout << f.second <<endl;
        break;
    }

    return 0;
}
