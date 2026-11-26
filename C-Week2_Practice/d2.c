#include<stdio.h>
#include<string.h>
int main() {
	FILE *fp;
	fp = fopen("timing.rpt", "w");
	if(fp == NULL) {
		printf("文件创建失败!\n");
		return 1;
	}
	fprintf(fp, "Path 1: Setup Violation, slack -0.5\n");
	fprintf(fp, "Path 2: Hold Vionlation, slack -0.1\n");
        fprintf(fp, "Path 3: Setup Vionlation, slack -0.2\n");
	fprintf(fp, "Path 4: Met\n");
	fprintf(fp, "Path 5: Setup Violation, slack -0.8\n");
	fclose(fp);
	printf("假数据生成完毕！\n");



	FILE *fp_in;
	FILE *fp_out;
	char buffer[265];
	fp_in = fopen("timing.rpt", "r");
	fp_out = fopen("setup_log.rpt", "w");
	if (fp_in == NULL || fp_out == NULL) {
		printf("文件打开失败\n");
		return 1;
	}
	while(fgets(buffer, sizeof(buffer), fp_in)!= NULL) {
			if (strstr(buffer, "Setup") != NULL) {
			fprintf(fp_out, "%s", buffer);
			}
			}
			fclose(fp_in);
			fclose(fp_out);
			printf("过滤完成!\n");


			return 0;
			}
