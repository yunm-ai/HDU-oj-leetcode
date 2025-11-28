#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
int main()
{
	int h, m, s, n, scan_re;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			scan_re = scanf("%d %d %d", &h, &m, &s);
			if (h >= 12) { h -= 12; }
			double hour_angle = h * 30 + m * 0.5 + s * (1.0 / 120.0);
			double minute_angle = m * 6 + s * 0.1;
			double diff;
			if (hour_angle > minute_angle) { diff = hour_angle - minute_angle; }
			else { diff = minute_angle - hour_angle; }
			
			if (diff > 180.0) { diff = 360.0 - diff; }
			printf("%d\n", (int)diff);
		}
	}return 0;

}