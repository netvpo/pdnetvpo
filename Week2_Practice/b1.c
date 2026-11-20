#include<stdio.h>
int main() {
	int arr[5];
	printf("请输入5个整数：");
	for (int i = 0; i < 5; i++){
		scanf("%d", &arr[i]);
	}
	printf(": ");
	for (int i = 4; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

