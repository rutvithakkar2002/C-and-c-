#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,i,j,k,l;
	char ch;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\t");
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\t");
	for(i=1;i<=5;i++)
	{
		for(l=1;l<=i;l++)
		{
			printf("%");
		}
		printf("\t");
	}
	getch();
}
