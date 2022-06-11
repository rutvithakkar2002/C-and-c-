#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1,*f2,*f3;
	int n,i;
	char fileName[30];
	clrscr();
	printf("\n Input to the data file");
	printf("\n--------------------------");
	printf("\n Enter the filename with extension: ");
	gets(fileName);
	f1=fopen(fileName,"w");
	printf("\n Enter numbers: ");
	for(i=1;i<=30;i++)
	{
		scanf("%d",&n);
		if(n==-1)
		{
			break;
		}
		putw(n,f1);
	}
	fclose(f1);
	f1=fopen(fileName,"r");
	f2=fopen("odd.txt","w");
	f3=fopen("Even.txt","w");
	while((n=getw(f1))!=EOF)
	{
		if(n%2==0)
		{
			putw(n,f3);
		}
		else
		{
			putw(n,f2);
		}
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f2=fopen("odd.txt","r");
	f3=fopen("Even.txt","r");
	printf("\n The content of file odd\n");
	while((n=getw(f2))!=EOF)
	{
		printf("\t%d",n);
	}
	printf("\n The content of file Even\n");
	while((n=getw(f3))!=EOF)
	{
			printf("\t%d",n);
	}
	fclose(f2);
	fclose(f3);
	getch();
}