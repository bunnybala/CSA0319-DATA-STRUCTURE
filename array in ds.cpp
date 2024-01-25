#include<stdio.h>
#include<string.h>
int top=-1;
char stk[25];
void push(char x)
{
	top=top+1;
	stk[top]=x;
}
void pop()
{
	top=top-1;
}
int main ()
{
	char st[100];
	int i,n;
	scanf("%s",st);
	n=strlen(st);
	for(i=0;i<n;i++)
	{
		if(st[i]=='(' || st[i]=='{'|| st[i]=='[')
		push(st[i]);
		else if(st[i]==')'&& stk[top]=='(' ||
		st[i]=='}' && stk[top]=='{' ||
		st[i]==']' && stk [top]=='[' )
		pop();
		else
		continue;
		if(top==-1)
		printf("balanced");
		else
		printf("not balanced");
		
	}
	
}
