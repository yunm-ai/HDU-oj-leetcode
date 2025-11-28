#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define maxn 105
float* find_max(float *arr,int len) {
	float* max_index = &arr[0];
	
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > *max_index)
		{ max_index = &arr[i]; }
	}

	return max_index;

}
int main()
{
	int t, n; float arr[maxn];
	float* p;
	while (scanf("%d", &t) == 1)
	{
		for(int i=0;i<t;i++)
		{
			scanf("%d", &n);
			for (int j = 0; j < n; j++)
			{
				scanf("%f", &arr[j]);
			}
			p = find_max(arr, n);
			printf("%.2f\n", *p);
		}
	}return 0;
}