#include<stdio.h>
#include<stdlib.h>
#define TOTAL 10
int queue[TOTAL],front=0,rear=-1,visited[TOTAL],i=0,j=0;;
int adjacency_matrix[TOTAL][TOTAL],vertices;
void enqueue(int vertex);
int dequeue();
void bfs();
int main()
{

	printf("enter the total number of vertices:");
	scanf("%d",&vertices);
	//visisted to 0
	for(i=0;i<TOTAL;i++)
	{
		visited[i]=0;
	}
	//adjacency matrix
	printf("enter the adjacency matrix:");
	for(i=0;i<vertices;i++)
	{
		for(j=0;j<vertices;j++)
		{
			scanf("\n%d",&adjacency_matrix[i][j]);	
		}
	}
	bfs();
	return 0;
}
void enqueue(int vertex)
{
	queue[++rear]=vertex;
	visited[vertex]=1;
	
}
int dequeue()
{
	return queue[front++];
}
void bfs()
{
	int currentvertex;
	enqueue(0);
	while(front<=rear)
	{
		currentvertex=dequeue();
		printf("traversed:%d\n",currentvertex);
		for(i=0;i<vertices;i++)
		{
			if(adjacency_matrix[currentvertex][i]&&!visited[i])
			{
				enqueue(i);
				
			}
		}
	}
	printf("traversal complete");
}

