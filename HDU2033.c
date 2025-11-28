#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	int time1[3], time2[3], scan_re;
	while (scanf("%d", &n) == 1)
	{
		for (int m = 0; m < n; m++) {
			for (int i = 0; i < 3; i++)
			{
				scan_re=scanf("%d", &time1[i]);
			}
			for (int i = 0; i < 3; i++)
			{
				scan_re=scanf("%d", &time2[i]);
			}
			int S = time1[2] + time2[2];
			int M = time1[1] + time2[1];
			int H = time1[0] + time2[0];
			if (S >= 60) { S -= 60; M += 1; }
			if (M >= 60) { M -= 60; H += 1; }
			printf("%d %d %d\n", H, M, S);
		}
	}return 0;
}