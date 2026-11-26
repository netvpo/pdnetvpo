#include<stdio.h>
int main() {
	FILE *fp_in;
	char butter[265];
	int count =0;
	fp_in = fopen("textd3.rpt", "r");
	if (fp_in == NULL) {
		printf("文件打开失败\n");
		return 1; }
	while(fgets(butter, sizeof(butter), fp_in) != NULL) {
              for (int i = 0; butter[i] != '\0'; i++) {
		      if(butter[i] >= 'a' && butter[i] <= 'z') {
			      count++;
		      }
	      }
	}
	fclose(fp_in);
	printf("文件中的小写字母总数为：%d\n", count);
	return 0;
}

