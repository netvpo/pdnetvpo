 #include<stdio.h>
#include<string.h>
void reverse(char str[] ){
 int left = 0 ;
 int right = strlen(str) -1;
 char temp;
 while (left < right) {
	 temp = str[left];
	 str[left] = str[right];
	 str[right] = temp;
	 left++;
	 right--;
 }
}
int main() {
	char test_str[] = "chip";
	printf("反转前： %s\n", test_str);
	reverse(test_str);
	printf("反转后：%s\n", test_str);
	return 0;
}
