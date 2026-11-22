#include <stdio.h>

// 错误示范：不加括号
#define SQUARE_ERR(x) x * x

// 正确示范：整体和参数都加括号
#define SQUARE_OK(x) ((x) * (x))

// 宏定义工程规范：名字全大写，用 do-while(0) 包裹多行代码（进阶常识）
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int a = 5;
    
    // 错误演示
    // 展开后变成了: printf("ERR: %d\n", 5 + 1 * 5 + 1);
    // 根据乘法优先级: 5 + (1 * 5) + 1 = 11
    printf("ERR: %d\n", SQUARE_ERR(a + 1)); 
    
    // 正确演示
    // 展开后变成了: printf("OK: %d\n", ((5 + 1) * (5 + 1)));
    // 结果: 6 * 6 = 36
    printf("OK:  %d\n", SQUARE_OK(a + 1));

    // 宏函数测最大值
    int x = 10, y = 20;
    printf("MAX: %d\n", MAX(x, y)); // 展开成: ((10) > (20) ? (10) : (20))

    return 0;
}
