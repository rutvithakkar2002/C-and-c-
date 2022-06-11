#include<stdio.h>
#include<conio.h>
//void getdata(int n,int r1,char ch);
void main()
{
	int choice1,choice2,choice3;
	int n,r1,k,i,j,k1;
	int flag;
	char ch;
	clrscr();
	while(1)
	{
	printf("\n1---------------Normal triangle");
	printf("\n2---------------Reverse triangle");
	printf("\n3---------------Exit");
	printf("\nEnter Your choice: ");
	scanf("%d",&choice1);
	switch(choice1)
	{
		case 1:
			printf("\n1---------------Horizontal triangle");
			printf("\n2---------------Vertical triangle");
			printf("\n3---------------Exit");
			printf("\nEnter Your choice: ");
			scanf("%d",&choice2);
			switch(choice2)
			{
				case 1:
				   //	getdata(n,r1,ch);
					printf("\nHow many triangles do you want?: ");
					scanf("%d",&n);
					printf("\nHow many Rows in the triangle?: ");
					scanf("%d",&r1);
					fflush(stdin);
					printf("\nWhich character do you want to print in triangle: ");
					scanf("%c",&ch);
					for(i=0;i<r1;i++)
					{
						for(j=0;j<n;j++)
						{
							for(k=0;k<=i;k++)
							{
								printf("%c",ch);
							}
							printf("\t");
						}
						printf("\n");
					}
					break;
				case 2:
					printf("\nHow many triangles do you want?: ");
					scanf("%d",&n);
					printf("\nHow many Rows in the triangle?: ");
					scanf("%d",&r1);
					fflush(stdin);
					printf("\nWhich character do you want to print in triangle: ");
					scanf("%c",&ch);
					for(k=0;k<n;k++)
					{
						for(i=0;i<r1;i++)
						{
							for(j=0;j<=i;j++)
							{
								printf("%c",ch);
							}
							printf("\n");
						}
						printf("\n");
					}
					break;
				case 3:
					exit(0);
			}
		case 2:
			printf("\n1---------------Horizontal triangle");
			printf("\n2---------------Vertical triangle");
			printf("\n3---------------Exit");
			printf("\nEnter Your choice: ");
			scanf("%d",&choice3);
			switch(choice3)
			{
				case 1:
					printf("\nHow many triangles do you want?: ");
					scanf("%d",&n);
					printf("\nHow many Rows in the triangle?: ");
					scanf("%d",&r1);
					fflush(stdin);
					printf("\nWhich character do you want to print in triangle: ");
					scanf("%c",&ch);
					flag=r1;
					for(i=r1;i>=1;i--)
					{
						for(j=0;j<n;j++)    //no. of triangles
						{
							for(k=0;k<flag;k++)
							{
								printf("%c",ch);
							}
							printf("\t");
						}
						printf("\n");
						flag--;
					}
					getch();
					break;
				case 2:
					printf("\nHow many triangles do you want?: ");
					scanf("%d",&n);
					printf("\nHow many Rows in the triangle?: ");
					scanf("%d",&r1);
					fflush(stdin);
					printf("\nWhich character do you want to print in triangle: ");
					scanf("%c",&ch);
					for(k1=0;k1<n;k1++)
					{
						for(i=r1;i>=1;i--)
						{
							for(j=1;j<=i;j++)
							{
								printf("%c",ch);
							}
							printf("\n");
						}
						printf("\n");
					}
					getch();
					break;
				case 3:
					exit(0);
			}
		case 3:
			exit(0);

		default:
			printf("\n Invalid choice!!!");
	}
	getch();//to hold the output...
	}
}
/*void getdata(int n,int r1,char ch)
{
	printf("\nHow many triangles do you want?: ");
	scanf("%d",&n);
	printf("\nHow many Rows in the triangle?: ");
	scanf("%d",&r1);
	fflush(stdin);
	printf("\nWhich character do you want to print in triangle: ");
	scanf("%c",&ch);
} */


/******  ****  ****
***   ***   ***
**    **    **
*     *     *       */