#include<stdio.h>
int count_upper(char str[]) {
	int count = 0;
	for(int i=0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' &&str[i] <= 'Z') 			count++;
		}
		return count;
}
int main() {
	char test_str[] = "Hello World 2024";
	int result = count_upper(test_str);
	printf("原字符串：%s\n", test_str);
	printf("大写字母的个数:%d\n", result);
	return 0;
}
