#include <bits/stdc++.h>
using namespace std;


int main() {

    int row,col;
    cin >> row >> col ;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> ch[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << ch[i][j];

        }
    }

    return 0;
}

