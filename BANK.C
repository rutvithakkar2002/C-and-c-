#include<stdio.h>
#include<conio.h>
struct Bank
{
	int cid,flag;                  //members of the structure
	char cname[30];
	double balance;
	int flag;
}b[5];
void scanData();
void displayDetails();
int search(int id);
void displayParticular(int index);
int deposite(int amt);
int withdraw(int amt);
void main()
{
	int choice,id,ans;
	clrscr();
	while(1)
	{
		printf("\n1---------------create Account");
		printf("\n2---------------Display all customer");
		printf("\n3---------------Update details");
		printf("\n4--------------Delete Account");
		printf("\n5--------------Search");
		printf("\n6--------------Deposite Ruppees");
		printf("\n7--------------Withdrawl Ruppees");
		printf("\n8--------------Exit");
		printf("\n Enter Your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				scanData();
				break;
			case 2:
				displayDetails();
				break;
			case 3:

				break;
			case 4:
				break;
			case 5:
				printf("\n Enter Customer id do you want to search: ");
				scanf("%d",&id);
				ans=search(id);
				if(ans==-1)
				{
					printf("\n Record not found");
				}
				else
				{
					displayParticular(ans);
				}
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				exit(0);
			default:
				printf("\n Invalid Choice!! Try Agail!!!!");
		}
		getch();
	} //end of while
}
void scanData()
{
	int i;
	double tmp;
	for(i=0;i<5;i++)
	{
		printf("\n ENter customer id,name: ");
		scanf("%d %s ",b[i].cid,b[i].cname);
		printf("\n initial Balance is %lf",b[i].balance);
		b[i].flag=1;
	}
}
void displayDetails()
{
	int i;
	printf("\nCustomerId \tName \tBalance");
	for(i=0;i<5;i++)
	{
		if(b[i].flag==1)
		{
			printf("\n %d\t %s\tname %ldbalance",b[i].cid,b[i].cname,b[i].balance);
		}
	}
}
int search(int id)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(id==b[i].cid)
		{
			return i;
		}
		return -1;
	}
}
