#include<stdio.h>
int main() {

int A[5],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
for (i=0;i<n;i++)
{
printf("%d",A[i]);
}
return 0;
}