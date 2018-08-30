#include <bits/stdc++.h>
using namespace std;

int arr[105][105];

int main()
{
    int n; cin >> n;
    int a=0,b=n+1,cnt=0,ck=0;

    while(1)
    {
        int lol=0;

        if(!ck){
            a++; b--;
            for(int i=1, j=b; i<=a; i++, j++) {
                arr[i][j] = ++cnt;
                lol++;
            }
        }
        else {
            a++; b--;
            for(int i=a, j=1; i<=n; i++, j++) {
                arr[i][j] = ++cnt;
            }
        }
        if(lol == n){ ck = 1; a=1; b=n; }
        if(cnt == n*n) break;
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
