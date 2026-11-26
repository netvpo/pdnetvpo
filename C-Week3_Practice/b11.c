#include <stdio.h>
#include "b1.h"
int main() {
	int a = 15, b = 42;
	printf("最大值：%d\n", get_max(a,b));
	int scores[] = {85, 90, 78, 95, 88};
	int len = sizeof(scores) / sizeof(scores[0]);
	printf("平均分：%.2f\n", get_average(scores, len));
	return 0;
}
