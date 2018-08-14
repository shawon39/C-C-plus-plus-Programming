#include<stdio.h>

int adj_mat[50][50],reach[50],n, i, j;

void dfs(int v)
{
    int i;
    printf(" %d ",v);
    reach[v]=1;
    for(i=1;i<=n;i++)
    {
        if((adj_mat[v][i] == 1) && (reach[i]==0))
        {
            dfs(i);
        }
    }
}

void main()
{
    int count=0;
    printf("\nEnter number of vertices: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        reach[i]=0;
    }

    create_graph(adj_mat, n);

    printf("\nThe DFS Travers is:  ");
    dfs(1);
    printf("\n\n");

}

int create_graph ( int adj_mat[50][50], int n )
{
   int reply;
    for ( i = 1 ; i <= n ; i++ )
    {
        for ( j = 1 ; j <= n ; j++ )
        {
            if ( i == j )
            {
                adj_mat[i][j] = 0;
            }

            else
            {
                printf("\n Vertices %d & %d are Adjacent ? ( Press 1 for YES || 0 for NO) :",i,j);
                scanf("%d", &reply);

                if ( reply == 1 )
                {
                     printf(" Connected\n");
                     adj_mat[i][j] = 1;
                }

                else
                {
                     printf(" Not connected\n");
                     adj_mat[i][j] = 0;
                }
            }
        }
    }

    show_Matrix(adj_mat,n);
    return;
}


int show_Matrix(int adj_mat[50][50], int n)
{
    printf("\nThe Adjucancy Matrix is: \n\n");

    for ( i = 1 ; i <= n ; i++ )
    {
        for ( j = 1 ; j <= n ; j++ )
        {
            printf("\t%d",adj_mat[i][j]);
        }
        printf("\n\n");
    }

}

