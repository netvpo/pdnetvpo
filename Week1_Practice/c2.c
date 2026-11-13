#include<stdio.h>
int main() {
	int day;
       int week;
	printf("输入总天数：");
	scanf("%d", &day);
        week = day / 7;
		day = day % 7;
		printf("%d周零%d天\n", week, day);
		return 0;
}
