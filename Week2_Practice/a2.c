#include<stdio.h>
int main() {
	int target = 50;
	int guess;
	while (1) {
		printf("请输入你猜的数字：");
		scanf("%d", &guess);
		if (guess > 50 )
			printf("猜大了\n");
		else if (guess < 50 )
			printf("猜小了\n");
		else { printf("猜对了\n"); break;
	}
	}
return 0;
}	
