#include<stdio.h>
void quicksort(int a[10],int first,int last)
{
	int pivot,j,t,i;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
    while(i<j)
    {
        if (a[i]<=a[pivot])
        i++;
        if (a[j]>=a[pivot])
        j--;
	   if(i<j)
	   {
	   	t=a[i];
	   	a[i]=a[j];
	   	a[j]=t;
	   }
     t=a[pivot];
     a[pivot]=a[j];
     a[j]=t;
     quicksort(a,first,j-1);
     quicksort(a,last,j+1);
    }
 }
}
 int main()
 {
 
 	int a[10],i,n;
 	printf("enter the size:");
 	scanf("%d",&n);
 	printf("enter the element:");
 	for(i=0;i<n;i++)
 	scanf("%d",a[i]);
 	
 	quicksort(a,0,n-1);
 	printf("sorted elements:");
	 for(i=0;i<n;i++)
	 printf("%d",a[i]); 	
	 return 0;
}