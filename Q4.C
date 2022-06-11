#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,cube=0;
	clrscr();
	printf("\n Enter number of term: ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		cube=i*i*i;
		printf("\n number is: %d",i);
		printf(" cube of %d is %d",i,cube);
	}
	getch();
}
