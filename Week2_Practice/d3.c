#include<stdio.h>
int main() {
	FILE *fp;
	fp = fopen("textd3.rpt", "w");
	if (fp == NULL) {
		printf("文件创建失败\n");
		return 1;
	}
	fprintf(fp,"WdsadfW123456\n");
	fprintf(fp,"fsadfeEfh123\n");
	return 0;
}
