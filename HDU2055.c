#define _CRT_SECURE_NO_WARNINGS
#define maxn 26
#include<stdio.h>
int main()
{
	int small[maxn], big[maxn];
	int big_c = 1, small_c = -1;
	//Ð¡µÄ
	 for (int i = 0; i < 26; i++)
	{
		 small[i] = small_c--;

	}
	 for (int i = 0; i < 26; i++)
	 {
		 big[i] = big_c++;
	 }
	 int N, M;
	 while (scanf("%d", &N) == 1) {
		 while ((M = getchar()) != '\n' && M != EOF);
		 for (int i = 0; i < N; i++) {
			 
			 char x;
			 int y, scan_re;
			 scan_re = scanf("%c %d", &x, &y);
			 while ((M = getchar()) != '\n' && M != EOF);
			 if (x >= 'a' && x <= 'z') {
				 
				 printf("%d\n", small[x-'a'] + y);
			 }
			 else if (x >= 'A' && x <= 'Z') {
				 
				 printf("%d\n", big[x-'A'] + y);
			 }
		 }
	 }return 0;



}