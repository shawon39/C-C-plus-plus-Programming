#include <stdio.h>
#include <stdlib.h>


int adj_mat[50][50];
int i, j, n;



void main()
{
   int option;
   do
   {
    printf("\n A Program to represent a Graph by using an ");

	printf("Adjacency Matrix method \n ");

	printf("\n 1. Directed Graph ");

	printf("\n 2. Un-Directed Graph ");

	printf("\n 3. Exit ");

	printf("\n\n Select a proper option : ");

	scanf("%d", &option);

	switch(option)
	{

            case 1 : directed_graph();
                     break;

            case 2 : undirected_graph();
                     break;

            case 3 : exit(0);

	} // switch

    }while(1);
}

int directed_graph()
{
    int in_degree, out_degree;

    printf("\n How Many Vertices ? : ");
    scanf("%d", &n);

    create_graph(adj_mat, n);

    printf("\n Vertex \t In_Degree \t Out_Degree \t Total_Degree ");
    for (i = 1; i <= n ; i++ )
    {
        in_degree = out_degree = 0;

        for ( j = 1 ; j <= n ; j++ )
        {
                if ( adj_mat[j][i] > 0)
                    in_degree++;
        }

        for ( j = 1 ; j <= n ; j++ )
        {
            if (adj_mat[i][j] > 0 )
                out_degree++;
        }

        printf("\n\n %5d\t\t\t%d\t\t%d\t\t%d\n\n",i,in_degree,out_degree,in_degree+out_degree);
    }
    return;
}


int undirected_graph()
{
    int degree;

    printf("\n How Many Vertices ? : ");
    scanf("%d", &n);

    create_graph(adj_mat, n);

    printf("\n Vertex \t Degree ");

    for ( i = 1 ; i <= n ; i++ )
    {
        degree = 0;
        for ( j = 1 ; j <= n ; j++ )
            if ( adj_mat[i][j] > 0)
                degree++;

        printf("\n\n %5d \t\t %d\n\n", i, degree);
    }
    return;
}



int create_graph ( int adj_mat[50][50], int n )
{
   int reply, weight;

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
                     printf("\n Enter Weight :");
                     scanf("%d", &adj_mat[i][j]);
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

