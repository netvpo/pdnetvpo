#include <stdio.h>
int main() {
	int a, b;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("和：%d\n", a + b);
	printf("差：%d\n", a - b);
	printf("积：%d\n", a * b);
	printf("商：%.2f\n", (double)a / b);
	return 0;
}
