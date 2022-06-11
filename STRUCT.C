#include<stdio.h>
#include<conio.h>
struct Student
{
	int sid,flag;                  //members of the structure
	char name[30];
	float maths,eng,comp;
	float total,per;
	char grade;
}s[2];//s1,s2; //structure variables  //there r 2 students.. //if 10 students-->s[10]
void scanStudentDetails();
void displayStudentDetails();
int search(int id);
int update(int id);
void displayParticular(int index);
int del(int id);
void main()
{
	int ch,ans,id;
	clrscr();
	while(1)
	{
		printf("\n1---------------Scan structure details");
		printf("\n2---------------Display details");
		printf("\n3---------------update details");
		printf("\n4---------------delete details");
		printf("\n5---------------Search details");
		printf("\n6---------------Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				scanStudentDetails();
				break;
			case 2:
				displayStudentDetails();
				break;
			case 3:
				printf("\n Enter the is u want to search?:");
				scanf("%d",&id);
				ans=update(id);
				if(ans=-1)
				{
					printf("\n record not updated");
				}
				else
				{
					printf("\n record is updated");
					displayParticular(ans);
				}
				break;

			case 4:
				printf("\n please enter the id you want to delete: ");
				scanf("%d",&id);
				ans=del(id);
				if(ans>=0)
				{
					printf("\n The record is deleted\n");
					displayParticular();
				}
				break;
			case 5:
				printf("\n Enter the is u want to search?:");
				scanf("%d",&id);
				ans=search(id);
				if(ans=-1)
				{
					printf("\n Record not find!");
				}
				else
				{
				//	printf("\n The record found.. details are as follow");
				  //	printf("\n %d \t %s ",s[i].sid,s[i].name);
					displayParticular(ans)								;
				}
				break;
			case 6:
				exit(0);
		}
		getch();
	}
}
void scanStudentDetails()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter the sid and name ");
		scanf("%d %s",&s[i].sid,s[i].name);
	}
}
void displayStudentDetails()
{
	int i;
	printf("\n Student id \t name\n");
	for(i=0;i<2;i++)
	{
		if(s[i].flag==1)
		{
			printf("\n %d \t %s ",s[i].sid,s[i].name);
		}
	}
}
void displayParticular(int index)
{
	printf("\n The record found.. details are as follow");
	printf("\n %d \t %s ",s[index].sid,s[index].name);
}
int search(int id)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		if(id==s[i].sid)
		{
			return i;
		}
	}
	return -1;
}
int update(int id)
{
	int ans=-1;
	float tmp;
	ans=search(id);
	if(ans!=-1)
	{
		printf("\n enter new maths , eng & computer marks");
		scanf("%f",&tmp);
		s[ans].maths=tmp;
		scanf("%f",&tmp);
		s[ans].eng=tmp;
		scanf("%f",&tmp);
		s[ans].comp=tmp;
		return ans;
	}
	return ans;

}
int del(int id)
{
	int index;
	index=search(id);
	if(index>=0)
	{
		s[index].flag=-1;
		reurn index;
	}
	return index;

}