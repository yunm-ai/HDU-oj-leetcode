#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ch; char a, b, c, temp;
	while (1)
	{
		if ((ch = getchar()) == EOF)break;
		a = ch;
		if ((ch = getchar()) == EOF)break;
		b = ch;
		if ((ch = getchar()) == EOF)break;
		c= ch;
		if (a > b) {
			temp = a;
			a = b;
			b = temp;
		}
		if (a > c) {
			temp = a;
			a = c;
			c = temp;
		}
		if (b > c) {
			temp = b;
			b = c;
			c = temp;
		}
		printf("%c %c %c\n", a, b, c);
	while ((ch = getchar()) != '\n' && ch != EOF);//清楚第一次输入留下的换行符残骸
	}
	return 0;
}