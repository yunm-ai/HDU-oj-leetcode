#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int prime_judge(int num) {
	if (num == 2 || num == 3) { return 1; }
	if (num % 2 == 0 || num % 3 == 0) { return 0; }
	if ((num + 1) % 6 != 0 && (num - 1) % 6 != 0) { return 0; }
	for (int i = 5; i <= sqrt(num); i += 6)
	{
		if (num % i == 0 || num % (i + 2) == 0) { return 0; }

	}return 1;
}
int main()
{
	int x, y;
	while (scanf("%d %d", &x, &y) == 2 && x + y)
	{
		int flag = 1;
		int count = 0;
		for (int i = x; i <= y; i++)
		{
			int result = i * (i + 1) + 41;
			int judge = prime_judge(result);
			if (!judge) { flag = 0; break; }

		}
		if (flag) { printf("OK\n"); }
		else { printf("Sorry\n"); }


	}return 0;
}