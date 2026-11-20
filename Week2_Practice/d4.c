#include<stdio.h>
#include<string.h>
int main() {
	FILE *fp;
	FILE *fp_in;
	fp_in = fopen("textd4.rpt", "r");
	fp = fopen("textd44.rpt", "w");
	if (fp == NULL || fp_in == NULL ) {
		printf("文件夹打开失败\n");
	return 1;}
	char buffer[256];
	while(fgets(buffer, sizeof(buffer), fp_in) != NULL){
		if (strstr(buffer,"Fatal") != NULL ){
			fprintf(fp,"%s", buffer);
			}
	}
	fclose(fp);
	fclose(fp_in);
	printf("提取完成");
	return 0;
}
