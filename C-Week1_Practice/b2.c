#include <stdio.h>

int main() {
    double age;
    printf("请输入你的年龄: ");
    scanf("%lf", &age);
     double t = 2024 - age;
    printf("出生年份=%.1lf\n", t);

    return 0;
}
