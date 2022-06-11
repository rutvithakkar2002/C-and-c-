/*
	objective :to understand 1 d array
*/
#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main()
{
	int a[SIZE],b[SIZE],c[SIZE]={0};
	int i,choice;
	clrscr();
	for(i=0,i<SIZE;i++)
	{
		printf("\n Enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}       //end of for
	for(i=0,i<SIZE;i++)
	{
		printf("\n Enter the value of b[%d]",i);
		scanf("%d",&b[i]);
	}       //end of for
       clrscr();
       printf("\n1------------Addition");
       printf("\n2------------Subtraction");
       printf("\n3------------multiplication");
       printf("\n4------------division");
       printf("\n5-----------sorting");
       printf("\n6------------Searching");
       printf("\n7-------------Exit")
       printf("\n Enter the choice:");
       scanf("%d",&choice);
       switch(choice)
       {
		case 1:
			for(i=0;i<SIZE;i++)
			{
				c[i]=a[i]+b[i];
			}
			for(i=0;i<SIZE;i++)
			{
				printf("\n%d+%d=%d",a[i],b[i],c[i]);
			}
			break;
		case 7:
			exit(0);
		default:
			printf("\n Invalid choice!!");
       }
	getch();
}