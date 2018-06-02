#include <bits/stdc++.h>
using namespace std;

int ct[100] = {0};

int main()
{
    int M,n,m,x;
    cin >> M;

    while(M--) {
        cin >> n >> m;
        char arr[101][101]={{0},{0}},arr2[101][101]={{0},{0}};

        for(int i=0; i<m; i++) {
            cin >> arr[i];
            strcpy( arr2[i],arr[i] );
        }

        for(int i=0; i<m; i++) {
           for(int j=0; j<n-1; j++) {
                for(int k=0; k<n-1; k++) {
                    if( arr[i][k] > arr[i][k+1]) {
                        swap(arr[i][k],arr[i][k+1]);
                        ct[i]++;
                    }
                }
           }
        }
        puts("");
        int mx,index,a=m-1;
        for(int i=m; i>0; i--) {
            index=-1,mx=-1;
            for(int j=0; j<m; j++) {
                if( ct[j]>mx ){
                    mx = ct[j];
                    index = j;
                }
            }
            ct[index]=-1;
            strcpy(arr[a--],arr2[index]);
        }

        for(int i=0; i<m; i++) {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
