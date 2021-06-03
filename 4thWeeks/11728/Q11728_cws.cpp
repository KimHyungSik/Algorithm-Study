#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[1000001];
int B[1000001];


int main(void) {

	int n, m;
	int i, j,temp,least;

	scanf("%d %d", &n, &m);

	for ( i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
		
	}

	for ( i = 0; i < m; i++)
	{
		scanf("%d", &A[i+n]);
	}

	for ( i = 0; i < n+m; i++)
	{
		least = i;
		for ( j = i+1; j < n+m; j++)
		{
			if (A[j] < A[least])
			{
				least = j;
			}
		}
		temp = A[i];
		A[i] = A[least];
		A[least] = temp;
	}
	for ( i = 0; i < n+m; i++)
	{
		printf("%d", A[i]);
	}
	return 0;
}


