#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//N表示收费站个数
int num_sheep(int N) {
	int beginning = 3;
	for (int i = 0; i < N; i++)
	{
		beginning = (beginning - 1) * 2;
	}
	return beginning;
}
int main()
{
	int M, N, scan_re;
	while (scanf("%d", &M) == 1)
	{
		for (int m = 0; m < M; m++)
		{
			scan_re=scanf("%d", &N);
			int result = num_sheep(N);
			printf("%d\n", result);
		}
	}
}