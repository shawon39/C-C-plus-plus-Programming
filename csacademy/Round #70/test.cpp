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
    int  k = 0, ans=-1;

    for(it = m.begin(); it!=m.end(); it++)
    {
        arr[k++] = it->first;
    }


    for( int i=0; i<bal; i++ )
    {
        if( arr[i] == 0 )
        {
            ans = 0; break;
        }
        if(arr[i-1] != arr[i] && arr[i+1] != arr[i]){
            ans = arr[i]; break;
        }
    }


    for(auto f:m)
    {
        if(f.first==ans){
            cout << f.second <<endl;
            return 0;
        }
    }

    return 0;
}
