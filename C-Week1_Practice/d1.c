#include<stdio.h>
int main() {
	int a;
	printf("请输入一个整数：");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("%d是偶数\n", a);
	else printf("%d是奇数\n", a);
	return 0;
}

