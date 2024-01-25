#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node * pev;
    int ele;
    struct node * next;
}*head=NULL, *t, *p, *newnode;
void create()
{
    int i, n, ele;
    printf("size:\n");
    scanf("%d",&n);
    printf("elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ele);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->ele=ele;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        p=newnode;
    }
    else
    {
        for(p=head;p->next!=NULL;p=p->next);
        p->next=newnode;
        newnode->pev=p;
        p=newnode;
    }
    }
}

void reverse()
{
	for(p=head;p->next!=NULL;p=p->next);
	printf("Reverse\n");
	for( ;p!=NULL;p=p->pev)
	{
		printf("->%d",p->ele);
	}
}
void display()
{
    t=head;
    printf("\noriginal of the list:");
    while(t!=NULL)
    {
        printf("%d->",t->ele);
        t=t->next;
    }
}
int main()
{
    create();
    reverse();
    display();
	return 0;
}