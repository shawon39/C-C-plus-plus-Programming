#include <stdio.h>
int main()
{
    int test; scanf("%d", &test);

    for(int x=1; x<=test; x++)
    {
        char matrix[55][55];
        int n, m;
        scanf("%d%d", &n, &m);

        int one = 0, sideZero=0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {

                scanf(" %c", &matrix[i][j]);
            }
        }

        for(int i=0; i<m; i++) {
            if( matrix[0][i] == '0' ) sideZero++;
        }
        for(int i=0; i<m; i++) {
            if( matrix[n-1][i] == '0' ) sideZero++;
        }
        for(int i=1; i<n-1; i++) {
            if( matrix[i][0] == '0' ) sideZero++;
        }
        for(int i=1; i<n-1; i++) {
            if( matrix[i][m-1] == '0' ) sideZero++;
        }

        int middleOne = 0;
        for(int i=1; i<n-1; i++) {
            for(int j=1; j<m-1; j++) {

                if( matrix[i][j] == '1' ) middleOne++;
            }
        }

        if( sideZero > middleOne ) printf("-1\n");
        else printf("%d\n", sideZero);

    }
    return  0;
}
