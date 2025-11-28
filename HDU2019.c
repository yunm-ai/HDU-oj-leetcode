#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define maxn 110
//len表示元素个数
int main()
{
	
	int n, m;
	int arr[maxn];
	while (scanf("%d %d", &n, &m) == 2 && m + n)
	{

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		int pos = n;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > m) {
				pos = i; break;
			}
		}
		for (int i = n; i > pos; i--)
		{
			arr[i] = arr[i - 1];//arr[pos+1]=arr[pos]就是arr[i+1]=arr[i]，这里只能写i-1，不能写--i，否则会改变i的值

		}
		arr[pos] = m;
		for (int i = 0; i < n + 1; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		

	}return 0;
}