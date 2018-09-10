#include <stdio.h>
int main()
{
    int test; scanf("%d", &test);

    for(int x=1; x<=test; x++)
    {
        char matrix[55][55];
        int n, m;
        scanf("%d%d", &n, &m);

        int one = 0, sideOne=0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {

                scanf(" %c", &matrix[i][j]);
                if( matrix[i][j] == '1' ) one++;
            }
        }

        for(int i=0; i<n; i++) {
            if( matrix[0][i] == '1' ) sideOne++;
        }
        for(int i=0; i<n; i++) {
            if( matrix[m-1][i] == '1' ) sideOne++;
        }
        for(int i=1; i<m-1; i++) {
            if( matrix[i][0] == '1' ) sideOne++;
        }
        for(int i=1; i<m-1; i++) {
            if( matrix[i][n-1] == '1' ) sideOne++;
        }

        int totalOne = n*2 + ( m-2 )*2;

        if( sideOne == totalOne ) printf("0\n");
        else if( one < totalOne ) printf("-1\n");
        else printf("%d\n", (totalOne-sideOne) );

    }
    return  0;
}
