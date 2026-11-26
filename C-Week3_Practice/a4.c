#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // 自动计算数组长度
    int temp;

    // 外层循环：控制比较的轮数（n-1轮）
    for (int i = 0; i < n - 1; i++) {
        
        // 内层循环：每一轮把当前未排序部分的最大值“冒”到最后
        for (int j = 0; j < n - 1 - i; j++) {
            
            // 如果前一个比后一个大，就交换
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 打印排序后的结果
    printf("排序后: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
