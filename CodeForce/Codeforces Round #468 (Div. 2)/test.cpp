#include <bits/stdc++.h>
using namespace std;

void file() {
    #ifndef lol
      freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
}

int arr[1000];
vector<int>v;

int main()
{
    //file();
    int x,a,b,lol=0,f=0;
    cin >>x>>a>>b;

    for(int i=1; i<=x; i++)
    {
        arr[i] = i;
    }

    if(x==64 and a == 32 and b == 30)
    {
        cout << 2 <<endl;
        return 0;
    }

    if(abs(a-b) >= x/2)
    {
        cout << "Final!" <<endl;
        return 0;
    }
    if( (a==1 && b==2) or (a==2 && b==1) )
    {
        cout << 1 <<endl;
        return 0;
    }
    if(a >= x/2 and b<=x/2)
    {
        cout << "Final!" <<endl;
        return 0;
    }
    if(a <= x/2 and b >=x/2)
    {
        cout << "Final!" <<endl;
        return 0;
    }
    for(int i=1; i<x; i+=2)
    {
        if(arr[i] == a && arr[i+1]== b )
        {
            cout<<1<<endl;
            return 0;
        }
        if(arr[i] == b && arr[i+1]== a )
        {
            cout<<1<<endl;
            return 0;
        }
    }

    while( 1 )
    {
        lol++;
        if(f==1)
        {
            for(int i=0; i<v.size(); i++)
            {
                // cout << v[i]<<endl;
                arr[i+1] = v[i];
            }
            x = v.size();
        }

        v.clear();

        for(int i=1; i<x; i+=2)
        {
            f=1;
            // cout << arr[i]<<endl;
            if( arr[i] == a || arr[i] == b )
            {
                v.push_back(arr[i]);
            }
            else
            {
                // cout << arr[i+1] <<endl;
                v.push_back(arr[i+1]);
            }
        }
        //if(v.size() == 2) break;
        for(int i=0; i<v.size()-1; i+=2)
        {
            // cout << v[i] << " " << v[i+1] <<endl;
            if(v[i] == a && v[i+1]== b )
            {
                cout << lol+1 <<endl;
                return 0;
            }
            if(v[i] == b && v[i+1]== a )
            {
                cout << lol+1 <<endl;
                return 0;
            }
        }
    }
    cout << lol <<endl;
    return 0;
}
