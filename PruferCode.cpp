#include <stdio.h>
// PRUFER CODE
int main()
{
	// Input
	int numOfEdges;
	scanf("%d", &numOfEdges);

	int edge[2][numOfEdges];
	for (int a = 0; a < numOfEdges; a++)
	{
		scanf("%d", &edge[0][a]);
		scanf("%d", &edge[1][a]);
	}

	// Degree Counting
	int degreeCounting[numOfEdges + 1] = {0};
	for (int b = 0; b < numOfEdges; b++)
	{
		degreeCounting[edge[0][b]]++;
		degreeCounting[edge[1][b]]++;
	}

	// Declaring Mark Variable
	int deleteLabel;
	int deletedEdge[numOfEdges] = {0};

	for (int i = 0; i < numOfEdges - 1; i++)
	{
		// Finding The Smallest Label With The Smallest Degree
		for (int j = 1; j <= numOfEdges; j++)
		{
			if (degreeCounting[j] == 1)
			{
				deleteLabel = j;
				break;
			}
		}

		// Delete Edge And Print
		for (int k = 0; k <= numOfEdges - 1; k++)
		{
			if (deletedEdge[k] == 0)
			{
				if (edge[0][k] == deleteLabel)
				{
					degreeCounting[edge[0][k]]--;
					degreeCounting[edge[1][k]]--;
					printf("%d ", edge[1][k]);
					deletedEdge[k] = 1;
					break;
				}
				if (edge[1][k] == deleteLabel)
				{
					degreeCounting[edge[0][k]]--;
					degreeCounting[edge[1][k]]--;
					printf("%d ", edge[0][k]);
					deletedEdge[k] = 1;
					break;
				}
			}
		}
	}
	return 0;
}
