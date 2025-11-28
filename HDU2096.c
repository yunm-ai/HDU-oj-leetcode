#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int A, B, N;
	while (scanf("%d", &N) == 1)
	{
		for (int i = 0; i < N; i++)
		{
			scanf("%d %d", &A, &B);
			printf("%d\n", (A % 100 + B % 100) % 100);
		}


	}return 0;
}