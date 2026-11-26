#include<stdio.h>
int main() {
	double one;
	int num;
	printf("请输入商品单价和数量:");
	scanf("%lf %d", &one, &num);
	double fin;
	fin = one * num;
	printf("总价为%.2f\n", fin);
	return 0;
}
