#include<stdio.h>
#include<conio.h>
#define SIZE 7
void main()
{
	int a[SIZE],exchange=1;
	int i,j,tmp,count=0;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter The value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n The array before Sorting \n");
	for(i=0;i<SIZE;i++)
	{
		printf("\t%d",a[i]);
	}
	for(i=0;i<SIZE && exchange==1;i++)
	{
		exchange=0;
		for(j=0;j<SIZE-1;j++)
		{
			count++;
			if(a[j]>a[j+1])
			{
				exchange=1;
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	printf("\n The array after sorting is:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nNumber of iterations are: %d",count);
	getch();
	}