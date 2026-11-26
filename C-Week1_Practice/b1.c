#include <stdio.h>

int main() {
    int a, b;
    printf("请输入A和B的数量: ");
    scanf("%d %d", &a, &b);
    
    int t;
	    t = a;
	    a = b;
	    b = t;
    
    printf("交换后: A=%d, B=%d\n", a, b);
    return 0;
}
