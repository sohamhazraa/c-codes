#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
void creation(int, struct node**);
void Print(struct node*);
void main()
{
	struct node* head = NULL;
	printf("Enter the number of nodes:-\n");
	int size;
	scanf("%d",&size);
	int ele;
	printf("Enter the elements of the linked list:-\n");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&ele);
		creation(ele, &head);
	}
	Print(head);
}
void creation(int ele, struct node** bigg)
{
	struct node* newNode = malloc(sizeof(struct node));
	newNode->data = ele;
	newNode->link = NULL;
	struct node* t1 = *bigg;
	if(t1==NULL)
	t1 = newNode;
	else
	{	
		while(t1->link != NULL)
		{
			t1 = t1->link;
		}
		t1->link = newNode;
	}
}
Print(struct node* p)
{
	while(p!=NULL)
	{
		printf("%d",p->data);
		p = p->link;
	}
	
}