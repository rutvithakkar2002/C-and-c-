#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main()
{
	int a[SIZE][SIZE];
	int b[SIZE][SIZE];
	int c[SIZE][SIZE]={0};
	int r1,c1,r2,c2,i,j,k,l;
	clrscr();
	start:
	printf("\n Enter the number of rows & col u want to have for first matrix");
	scanf("%d%d",&r1,&c1);
	printf("\n Enter the number of rows & col u want to have for second matrix");
	scanf("%d%d",&r2,&c2);
	if(r1>10 || c1>=10 || r2>10 || c2>10)
	{
		printf("\n The uper limit of the each of them is 10");
		goto start;
	}
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("\n Enter the value of a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("\n Enter the value of b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			     printf("%d",a[i][j]);
			}
			printf("\t");
			for(k=0;k<3;k++)
			{
				printf("%d",b[i][k]);
			}
			printf("\t");
			for(l=0;l<3;l++)
			{
				     printf("%d",c[i][l]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n The matrix are not confromable to multiply");
	}
	getch();
}
