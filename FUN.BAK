#include<stdio.h>
#include<conio.h>
void add();
void sub(int x,int y);
int mul(int x,int y);
float div();
int avg(int a[],int size);
void main()
{
	float ans1;
	int ch,ans,a,b,i;
	int x[5];
	while(1)
	{
		printf("\n 1----addition");
		printf("\n 2----Subtraction");
		printf("\n 3---multiplication");
		printf("\n 4---division");
		printf("\n 5----Average");
		printf("\n 6---Exit");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				printf("\n Enter the value of a and b");
				scanf("%d %d",&a,&b);
				sub(a,b);
				break;
			case 3:
				ans=mul(5,6);
				printf("\n The answer of multiplication is %d",ans);
					break;
			case 4:
				ans1=div();
				printf("\n The answer for division is %f",ans1);
				break;
			case 5:
				for(i=0;i<5;i++)
				{
					printf("Enter the value of x[%d]",i);
					scanf("%d",&x[i]);
				}
				ans=avg(x,5);
				printf("The ans for average is %d",ans);
				break;
			case 6:
				exit(0);
			default:
				printf("Invalid choice!!");
		}
	getch();
	}
}
void add()
{
	int a,b,c;
	printf("\n Enter the value of a & b: ");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n The answer of addition of %d and %d is %d",a,b,c);
}
void sub(int x,int y)
{
	int z;
	z=x-y;
	printf("\n Subtraction of numbers is %d",z);
}
int mul(int a,int b)
{
	int m;
	m=a*b;
	return m;
}
float div()
{
	int x,y;
	float z;
	printf("\n Enter the value of x & y: ");
	scanf("%d %d",&x,&y);
	z=(float)x/y;
	return z;
}
int avg(int a[],int size)
{
	int i,sum=0,ans;
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	ans=sum/size;
	return ans;
}