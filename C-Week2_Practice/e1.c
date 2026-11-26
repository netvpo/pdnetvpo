#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student {
	int id;
	char name[20];
	double score;
};
void print_student(struct Student *p){
	printf("【指针打印】ID：%d, 姓名：%s,分数：%f\n",p->id, p->name, p->score); }
int main() {
	struct Student s1 = {1001, "Alice", 95.5};
	printf("【普通打印】ID：%d，姓名：%s,分数：%f\n", s1.id, s1.name, s1.score);
	print_student(&s1);
	struct Student *arr = malloc(3 * sizeof(struct Student));
	if (arr == NULL){ printf("内存分配失败");
		return 1;
	}
	for (int i=0; i<3; i++ ) {
		arr[i].id = i+1;
		sprintf((arr + i)->name,"Student_%d", i + 1);
		arr[i].score = (-i+9)*10;
	}
	printf("\n---动态数组数据---\n");
	for ( int i=0; i<3; i++ ) {
		print_student(&arr[i]);
	}
	free(arr);
	arr = NULL;
	return 0;
}
