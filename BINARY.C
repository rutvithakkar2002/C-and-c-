//linear search or sequential search
#include<stdio.h>
#include<conio.h>
#define SIZE 7
void main()
{
	int a[100],temp,pass,size,mid,high=size,low=0,key;
	int i,j,flag=-1;
	clrscr();
	printf("\n Enter the Size of an array: ");
	scanf("%d",&size);
	for(i=0;i<SIZE;i++)
	{
		printf("Enter The value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n The array is \n");
	for(i=0;i<SIZE;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\n Enter the key: ");
	scanf("%d",&key);
	high=size;
	while(low<high)
	{
		mid=(low+high)2;
		if(a[mid]==key)
		{
			printf("The number is at location [%d]: ",mid+1);
		}

	}
	getch();
}
