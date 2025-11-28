/*有一个长度为n(n<=100)的数列，该数列定义为从2开始的递增有序偶数，
现在要求你按照顺序每m个数求出一个平均值，如果最后不足m个，则以实际数量求平均值。编程输出该平均值序列。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2)
	{
		int* arr = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; i++)
		{
			arr[i] = 2 * (i + 1);
		}
		int sum = 0;
		int crt = 0;
		for (int i = 0; i < n; i++)
		{
			int num = arr[i]; crt++;
			sum += num;
			if (crt == m || i == n - 1)
			{
				printf("%d ", sum / crt);
			}
			if (crt == m)
			{
				crt = 0;
				sum = 0;
			}
		}printf("\n");
		free(arr);
		arr = NULL;
	}return 0;
}