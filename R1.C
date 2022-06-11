#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(k=0;k<3;k++)
	{
		for(i=4;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf("# ");
			}
			printf("\n");
		}
		printf("\n");
	}
	getch();
}