#include<stdio.h>
int main() {
	int a = 10;
	int* p = &a;
	*p =20;
	printf("a的值：%d\n", a);
	printf("通过指针p访问的值：%d\n", *p);
	printf("a 的内存地址：%p\n", (void*)&a);
	printf("p中保存的地址：%p\n", (void*)p);
	return 0;
}

