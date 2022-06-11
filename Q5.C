#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i;
	long ans=0;
	clrscr();
	printf("\n Enter number of term: ");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		ans=no*i;
		printf("\n%d*%d=%d",no,i,ans);
	}
	getch();
}