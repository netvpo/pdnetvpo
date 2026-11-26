#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
int main(void)
{
	struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
	struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
	struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
	if (n1 == NULL || n2 == NULL || n3 == NULL )
	{
		printf("内存分配失败\n");
		return -1;
	}
	n1->data = 11;
	n2->data = 22;
	n3->data = 33;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	struct Node *p = n1 ;
	printf("data\t地址\n");
	while (p != NULL )
	{
		printf("%d\t%p\n", p->data, p);
		p = p->next;
	}
	free(n1);
	free(n2);
	free(n3);
	n1 = NULL;
	n1 = NULL;
	n3 = NULL;
	return 0;
}
