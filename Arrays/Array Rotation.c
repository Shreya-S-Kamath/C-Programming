#include<stdio.h>
#include<stdlib.h>
int main()
{
	int T, N, K;
	int i,j;
	scanf("%d",&T);
	for(i = 0; i<T; i++)
	{
		scanf("%d %d",&N, &K);
		int *arr = (int*)malloc(N * sizeof(int));
		for(i = 0; i<N; i++)
			scanf("%d", (arr+i));
		for(i = 0; i<K; i++)
		{
			int temp = *(arr+N-1);
			for(j = N-1; j>0; j--)
				*(arr+j) = *(arr+j-1);
			*(arr+0) = temp;
		}
		for(i = 0; i<N; i++)
			printf("%d ",*(arr+i));
	}
	return 0;
}
