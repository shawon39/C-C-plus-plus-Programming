#include <stdio.h>
#include <stdlib.h>

struct AdjListNode
{
    int dest;
    struct AdjListNode *next;
};

struct AdjList
{
    struct AdjListNode *head;
};

struct Graph
{
    int v;
    struct AdjList *array;
};

struct AdjListNode *newAdNode(int dest)
{
    struct AdjListNode *newNode=(struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest=dest;
    newNode->next=NULL;
    return newNode;
}

struct Graph *CreteGraph(int v)
{
    struct Graph *graph=(struct Graph*)malloc(sizeof(struct Graph));
    graph->v=v;
    graph->array=(struct AdjList*)malloc(v*sizeof(struct AdjList));
    int i;
    for(i=0; i<v; i++)
    {
        graph->array[i].head=NULL;
    }
    return graph;
}

void AddEdge(struct Graph *graph,int src,int dest)
{
    struct AdjListNode *newNode=newAdNode(dest);
    newNode->next=graph->array[src].head;
    graph->array[src].head=newNode;
    newNode=newAdNode(src);
    newNode->next=graph->array[dest].head;
    graph->array[dest].head=newNode;
}

void print(struct Graph *graph)
{
    int v;
    for(v=0; v<graph->v; ++v)
    {
        struct AdjListNode *p=graph->array[v].head;
        printf("\nAdj List of Vertex: %d\n",v);
        while(p)
        {
            printf("-> %d ",p->dest);
            p=p->next;
        }
        printf("\n");
    }
}
int main()
{
    int v=5;
    struct Graph *graph=CreteGraph(v);
    AddEdge(graph,0,1);
    AddEdge(graph,0,4);
    AddEdge(graph,1,2);
    AddEdge(graph,1,3);
    AddEdge(graph,1,4);
    AddEdge(graph,2,3);
    AddEdge(graph,3,4);
    print(graph);
    return 0;
}

















