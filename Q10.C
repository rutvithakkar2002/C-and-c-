#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,n;
	clrscr();
	printf("\n Enter the limit: ");
	scanf("%d",&n);
	printf("\n Enter the number: ");
	scanf("%d",&no);
	for(i=1;i<=5;i++)
	{
		printf("\t%d",no*i);
	}
	getch();
}