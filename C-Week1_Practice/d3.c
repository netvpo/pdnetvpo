#include<stdio.h>
int main() {
	int target = 50 ;
	printf("请输入你猜的数字：");
		int t;
	scanf("%d", &t);
	if(t > target)
		printf("猜大了\n");
	else if(t < target)
		printf("猜小了\n");
	else printf("猜对了\n");
	return 0;
}

