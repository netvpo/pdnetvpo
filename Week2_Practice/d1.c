#include<stdio.h>
void swap(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	printf("交换前:arr[0]=%d, arr[4]=%d\n", arr[0], arr[4]);
	swap(&arr[0], &arr[4]);
	printf("交换后:arr[0]=%d, arr[4]=%d\n", arr[0], arr[4]);
	return 0;
}
