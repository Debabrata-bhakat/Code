#include<stdio.h>
#include<stdlib.h>
struct stud 
{
	int roll;
	char name[20];
	int age;
	struct stud *next;
};
typedef struct stud node;
// void traverse(struct stud * head);
void traverse(node * head);
void main()
{
	// struct stud s1,s2,s3;
	node s1,s2,s3;
	printf("Enter details\n");
	scanf("%d %s %d", &s1.roll, s1.name, &s1.age);
	scanf("%d %s %d", &s2.roll, s2.name, &s2.age);
	scanf("%d %s %d", &s3.roll, s3.name, &s3.age);

	s1.next = &s2;
	s2.next = &s3;
	s3.next = NULL;
	traverse(&s1);
}
// void traverse(struct stud * head)
void traverse(node * head)
{
	while(head!=NULL)
	{
		printf("%d %s %d\n", head->roll, head->name, head->age );
		head = head->next;
	}
}