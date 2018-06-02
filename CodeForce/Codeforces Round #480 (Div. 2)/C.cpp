#include <bits/stdc++.h>
using namespace std;

int n,k,ct=0,ct2;
int arr[100005];
int key[100005];
int lex[100005];

int main()
{
    cin >> n >>k;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0, j=0; i<=255; i+=k)
    {
        key[j++] = i;
        ct++;
    }

    key[ct++] = 10000000;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<ct; j++)
        {
            if(arr[i] < key[j] ) {
                cout << key[j-1] << " ";
                break;
            }
            else if(arr[i] == key[j] )
            {
                cout << key[j] << " ";
                break;
            }
        }
    }
    return 0;
}

