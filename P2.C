#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n Enter the value of x and y:");
	scanf("%d %d ",&x,&y);
	if(x%2==0 && y%2==0)
	{
		printf("%d and %d are even",x,y);
	}
	else if(x%2!=0 && y%2!=0)
	{
		printf("%d and %f are odd",x,y);
	}
	else
	{
		printf("\n one of them is odd and one of them is even");
	}
	getch();
}