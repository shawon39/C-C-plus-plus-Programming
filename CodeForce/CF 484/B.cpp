#include <bits/stdc++.h>
using namespace std;

struct greaterr
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

int arr[200005];
int arr2[200005];
int arr3[200005];
vector <int> v;

int main()
{
    int n;
    string str;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        arr3[i] = arr[i];
    }
    cin >> str;

    sort(arr, arr+n);

    int a=0,m=0;

    for(int i=0; i<str.length(); i++)
    {
        if( str[i] == '0' )
        {
            for(int j=0; j<n; j++)
            {
                if(arr3[j] == arr[a] )
                {
                    cout << j+1 << " ";
                    v.push_back(arr[a]);
                    a++;
                    break;
                }
            }
        }
        else
        {
            sort(v.begin(), v.end(), greaterr());

            for(int j=0; j<n; j++)
            {
                if(arr3[j] == v[0] )
                {
                    cout << j+1 << " ";
                    v.erase (v.begin());
                    break;
                }
            }
        }
    }
    return 0;
}




