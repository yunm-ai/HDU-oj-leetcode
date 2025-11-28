#define _CRT_SECURE_NO_WARNINGS
#define maxn 110
#include<stdio.h>
#include<stdbool.h>
//len表示数组元素个数
void bubble_sort(int arr[],int len) {
	for (int i = 0; i < len - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag += 1;
			}
		}
		if (flag == 0) { break; }
	}
}
int main()
{
	int n, m, scan_re;
	int a1[maxn], a2[maxn], c[maxn];
	//开始录入
	while (scanf("%d%d", &n, &m) == 2&&m+n)
	{
		//录入a1
		for (int i = 0; i < n; i++)
		{
			scan_re = scanf("%d", &a1[i]);
		}
		//录入a2
		for (int i = 0; i < m; i++)
		{
			scan_re = scanf("%d", &a2[i]);
		}
		int count = 0;
		bool is_keep[maxn];
		for (int i = 0; i < n; i++)
		{
			is_keep[i] = true;
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a1[j] == a2[i]) { is_keep[j] = false; }
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (is_keep[i]) { c[count++] = a1[i]; }
		}
		if (count == 0) { printf("NULL\n"); }
		else {
			bubble_sort(c, count);
			for (int i = 0; i < count; i++)
			{
				printf("%d ", c[i]);
			}
			printf("\n");
}
	}return 0;
	
}