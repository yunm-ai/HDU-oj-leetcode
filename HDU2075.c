#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, n, scan_re;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++) {
			scan_re = scanf("%d %d", &a, &b);
			if (a % b == 0) { printf("YES\n"); }
			else { printf("NO\n"); }
		}
	}
	return 0;
}