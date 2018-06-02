#include <bits/stdc++.h>
using namespace std;

int arr[1000];

int main()
{
    int l;
    cin >> l;

    for(int i=0; i<l; i++)
    {
        cin >> arr[i];
    }

     int f=0;

    if(l==1) {
        if(arr[0]==28 || arr[0]==29 || arr[0]==30 || arr[0]==31)  f=1;

         if(f==1) cout << "Yes" <<endl;
         else cout << "No" <<endl;
         return 0;
    }

    for(int i=0; i<l-1; i++)
    {
        if( arr[i]==30 && arr[i+1]==31 )
        {
            f=1;
        }
        else if( arr[i]==31 && arr[i+1]==31 )
        {
           f=1;
        }
        else if( arr[i]==31 && arr[i+1]==30 )
        {
            f=1;
        }
        else if( arr[i]==31 && ( arr[i+1]==28 || arr[i+1]==29 ) )
        {
           f=1;
        }
        else if( ( arr[i]==28 || arr[i]==29 ) && arr[i+1]==31 )
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }

    if(f==1) cout << "Yes" <<endl;
    else cout << "No" <<endl;

    return 0;
}
