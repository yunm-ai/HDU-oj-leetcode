#define _CRT_SECURE_NO_WARNINGS
char grade_sort(int grade) {
	char rank;
	
	 if(grade>=0&&grade<=59)
	{
		rank = 'E';
	}
	else if (grade >= 60 && grade <= 69)
	{
		rank = 'D';
	}
	else if (grade >= 70 && grade <= 79)
	{
		rank = 'C';
	}
	else if (grade >= 80 && grade <= 89)
	{
		rank = 'B';
	}
	else { rank = 'A'; }
	return rank;
}
#include<stdio.h>
int main()
{
	int grade; char result;
	while(scanf("%d",&grade)==1)
	{
		if (grade > 100 || grade < 0) { printf("Score is error!\n"); }
		else {
			result = grade_sort(grade);
			printf("%c\n", result);
		}
	}
	return 0;
}