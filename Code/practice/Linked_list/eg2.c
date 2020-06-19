#include<stdio.h>
#include<stdlib.h>
struct stud
{
	int roll;
	char name[100];
	int age;
	struct stud *next;
};
typedef struct stud node;
void insert(node **head);
void delete(node **head);
node *create();
void display(node *head);
void main()
{
	node *head;
	head = create();
	display(head);
	insert(&head);
	display(head);
	delete(&head);
	display(head);
}
node *create()
{
	int i,k;
	node *p,*head;
	printf("Enter number of elements you want to enter\n");
	scanf("%d",&k);
	printf("Reading..\n");
	for (int i = 0; i < k; ++i)
	{
		if(i==0)
		{
			head = (node*)malloc(sizeof(node));
			p = head;
		}
		else
		{
			p->next = (node*)malloc(sizeof(node));          
			p = p->next;
		}
		scanf("%d %s %d",&p->roll,p->name,&p->age);
	}
	p->next = NULL;
	return(head);
}
void display(node *head)
{
	printf("\nDisplaying the linked list..\n");
	node *p;
	int count=1;
	p = head;
	while(p!=NULL)
	{
		printf("%d %s %d %d\n",p->roll,p->name,p->age,count);
		p = p->next;
		count++;
	}
}
void insert(node **head)
{
	node *p,*q,*new;
	int rno;
	new = (node*)malloc(sizeof(node));
	printf("Enter data to be inserted: ");
	scanf("%d %s %d",&new->roll,new->name,&new->age);
	printf("Insert before roll no: ");
	scanf("%d",&rno);
	p = *head;
	// At the beginning
	if(p->roll == rno)
	{
		new->next = p;
		*head = new;
	}

	else
	{
		while((p != NULL) && (p->roll != rno))
		{
			q = p;
			p = p->next;
		}
		// At the end
		if(p == NULL)
		{
			q->next = new;
			new->next = NULL;
		}
		// In the middle
		else
		{
			q->next = new;
			new->next = p;
		}
	}

}
void delete(node **head)
{
	node *q,*p;
	int rno;
	printf("Enter roll no to be deleted: ");
	scanf("%d",&rno);

	p = *head;
	// Deleting the first element
	if(p->roll == rno)
	{
		*head = p->next;
		free(p);
	}
	else
	{
		while( (p != NULL) && (p->roll != rno) )
		{
			q = p;
			p = p->next;
		}
		// If element is not found
		if(p == NULL)
			printf("Element not found::Deletion failed\n");
		else if(p->roll == rno)
		{
			q->next = p->next; 
			free(p);
		}
	}
}
