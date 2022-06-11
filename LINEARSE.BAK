//linear search or sequential search
#include<stdio.h>
#include<conio.h>
#define SIZE 7
void main()
{
	int a[SIZE],key,count;
	int i,j,flag=-1;
	clrscr();
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
	for(i=0;i<SIZE;i++)
	{
		if(key==a[i])
		{
			//repitation
			for(j=i;j<7;j++)
			{
				if(key==a[j])
				{
					count++;
				}
				else
				{
					break;
				}
			}
			flag=i;
			break;
		}
	}
	if(flag==-1)
	{
		printf("\n element is not found!");
	}
	else
	{
		printf("\n The element %d is at %d place ",key,flag+1);
	}


	getch();
}