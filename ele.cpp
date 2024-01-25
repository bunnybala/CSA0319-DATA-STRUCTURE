#include<stdio.h>
#include<stdlib.h>
struct node
{
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
        p=newnode;
    }
    }
}
void search()
{
    int key, flag=0;
    printf("key:\n");
    scanf("%d",&key);
    for(p=head;p!=NULL;p=p->next)
    {
        if(key==p->ele)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    printf("found");
    else
    printf("not found");
}
void display()
{
    t=head;
    printf("\nElements in the list:");
    while(t!=NULL)
    {
        printf("%d->",t->ele);
        t=t->next;
    }
}
int main()
{
    create();
    search();
    display();
	return 0;
}
