#include<stdio.h>
int my_strcmp(const char *s1, const char *s2){
	while(*s1 == *s2 && *s1 != '\0' ) {
		s1++;
		s2++;
	}
}
int main(int argc, char const *argv[])
{
	char s1[] = "apple";
	char s2[] = "banana";
	char s3[] = "cherry";
	printf("%d\n", my_strcmp(s1, s1));
	printf("%d\n", my_strcmp(s1, s2));
	printf("%d\n", my_strcmp(s3, s1));
	return 0;
}
