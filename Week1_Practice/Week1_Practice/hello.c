#include <stdio.h>

int main()
{  int age;
   double height;

   printf("请输入年龄和身高（用空格隔开） ：");

   scanf("%d %lf", &age, &height);

   printf("年龄是%d,身高是%.2f\n", age, height);

   return 0;
}
