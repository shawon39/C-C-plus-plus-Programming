#include<stdio.h>

int adj_mat[50][50],i,j,k,n,qu[50],front=1,rare=1,v,visit[50],visited[50];

int main()
{
    int m;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("\n");

    create_graph(adj_mat, n);

    for(i=1;i<=n;i++)
    {
        visit[i]=0;
        visited[i]=0;
    }

    printf("\n");

    printf("\nEnter the Start Node: ");
    scanf("%d",&v);

    printf("\n\nBFS Traverse:\n\n ");
    printf("%d",v);

    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=1;j<=n;j++)
        {
            if(adj_mat[v][j]==1 && visited[j]==0 && visit[j]==0)
            {
                visit[j]=1;
                qu[rare++]=j;
            }
        }
        v=qu[front++];
        printf("  %d  ",v);
        k++;
        visit[v]=0;
        visited[v]=1;
    }

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



