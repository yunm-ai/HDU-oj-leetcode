#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char x;
	int n;
	while (scanf("%c %d", &x, &n) == 2 && x != '@')

	{
		for (int i = 1; i < n; i++)
		{
			for (int j = 1; j <= n - i; j++)
			{
				printf(" ");
			}
			printf("%c", x);
			for (int m = 0; m < 2 * i - 3; m++)
			{
				printf(" ");
			}
			if (i != 1) { printf("%c", x); }
			printf("\n");

		}
		for (int i = 0; i < 2 * n - 1; i++)
		{
			printf("%c", x);
		}
		printf("\n\n");
		while ((x = getchar()) != '\n' && x != EOF);
	}return 0;
}