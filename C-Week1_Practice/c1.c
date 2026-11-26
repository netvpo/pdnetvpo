#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	printf("请输入语文，数学，英语成绩：");
	scanf("%d %d %d", &a, &b, &c);
	double t = (a + b + c) / 3.0;
	printf("平均数是%f\n", t);
return 0;
}
