#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Bank
{
	int cid;
	char cName[30];
	char uName[30];
	char password[30];
	float balance;
	int transactionCounter;
	struct Bank *next;
}*Head=NULL;
void createAccount();
void displayAll();
//void del();
struct Bank* login(char user[],char pass[]);
//void displayParticular();
void main()
{
	int choice,adminchoice,ans,id,choiceCustomer;
	char user[30];
	struct Bank *temp;
	char pass[30];
	while(1)
	{
		main:
		clrscr();
		printf("\n1---------------Admin");
		printf("\n2---------------Customer User");
		printf("\n3---------------Exit");
		printf("\n Enter The choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n Please enter Your user name & password: ");
				fflush(stdin);
			    //	gets(user);
				scanf("%s",user);
				printf("\nEnter the password: ");
			      //	gets(pass);
				scanf("%s",pass);
				if(strcmp(user,"admin")==0 &&strcmp(pass,"admin")==0)
				{
					clrscr();
					printf("\n1------------Create Account");
					printf("\n2------------Delete Account");
					printf("\n3------------Display all records");
					printf("\n4------------Display Particular");
					printf("\n5------------Logout");
					printf("\nEnter The choice:");
					scanf("%d",&adminchoice);
					switch(adminchoice)
					{
						case 1:
							createAccount();
							break;
					/*	case 2:
							printf("\n Enter id You want to delete: ");
							scanf("%d",&id);
							del(id);
							break; */
						case 3:
							displayAll();
							getch();
							break;
					 /*	case 4:
							printf("\n Enter id You want to delete: ");
							scanf("%d",&id);
							displayParticular(id);
							break;*/
						case 5:
							exit(0);
						default:
							printf("\n Invalid choice!!!");
					}//end of admin switch
				}//end of if
				else
				{
					clrscr();
					textcolor(RED);
					cprintf("\n check your user name and password");
					getch();
				} //end of else
				break;
			case 2:
				printf("\n Please enter Your user name & password: ");
				gets(user);
				printf("\n Enter the password: ");
				gets(pass);
				temp=login(user,pass);
				if(temp!=NULL)
				{
					printf("\n Successfully login");
					printf("\n1-----------check balance");
					printf("\n2-----------deposit");
					printf("\n3----------withdraw");
					printf("\n4----------logout");
					printf("\n Enter the choice: ");
					scanf("%d",&choiceCustomer);
					switch(choiceCustomer)
					{
						case 1:
							printf("\nwelcome Mr %s",temp->cName);
							printf("Your balance is %.2f",temp->balance);
							getch();
							break;
						case 2:
							deposit();
							break;
						case 3:
							withdraw();
							break;
						case 4:
							exit(0);
						default:
							printf("\n invalid choice!!");
						} //end of Customer switch
				} //end of if
				else
				{
					printf("\n User and password incorrect!!");
					getch();
					goto main;
				} //end of else of customer */
				getch();
				break;
			case 3:
				exit(0);																			exit(0);
			default:
				printf("Invalid choice!!");
		}//end of main switch
		goto main;
	}//end of while
}//end of main
void createAccount()
{
	FILE *fp;
	struct Bank *temp=Head,*temp1;
	if(Head==NULL)
	{
		fp=fopen("royalbank.txt","w");
		Head=(struct Bank *)malloc(sizeof(struct Bank));
		printf("\n Enter Customer ID: ");
		scanf("%d",&Head->cid);
		printf("\n Enter The cusomer Name: ");
		fflush(stdin);
		scanf("%s",Head->cName);
		printf("\n Enter the customer user Name:");
		fflush(stdin);
		scanf("%s",Head->uName);
		printf("\n Enter the customer Password: ");
		fflush(stdin);
		scanf("%s",Head->password);
		Head->balance=10000;
		Head->transactionCounter=0;
		fwrite(&Head,sizeof(Head),1,fp);
		fclose(fp);
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		fp=fopen("royalbank.txt","a");
		temp1=(struct Bank *)malloc(sizeof(struct Bank));
		printf("\n Enter Customer ID: ");
		scanf("%d",&temp1->cid);
		printf("\n Enter The cusomer Name: ");
		fflush(stdin);
		scanf("%s",temp1->cName);
		printf("\n Enter the customer user Name:");
		fflush(stdin);
		scanf("%s",temp1->uName);
		printf("\n Enter the customer Password: ");
		fflush(stdin);
		scanf("%s",temp1->password);
		temp1->balance=10000;
		temp1->transactionCounter=0;
		fwrite(&temp1,sizeof(temp1),1,fp);
		fclose(fp);
		temp->next=temp1;
		temp1->next=NULL;
	}//end of else
}//end of create account
void displayAll()
{
	FILE *fp;
	struct Bank *temp;
	fp=fopen("royalbank.txt","r");
	printf("\nccid\t cname \tuser\tpassword\tbalance\n");
	while(fread(&temp,sizeof(temp),1,fp));
	{
		printf("\n%d\t%s\t%.2f",temp->cid,temp->cName,temp->uName,temp->password,temp->balance);
	}
	fclose(fp);
}
struct Bank* login(char user[],char pass[])
{
	FILE *fp;
	struct Bank *temp;
	fp=fopen("royalbank.txt","r");
	while(fread(&temp,sizeof(temp),1,fp))
	{
		if(strcmp(temp->uName,user)==0 && strcmp(temp->password,pass==0))
		{
			printf("Welcome Mr %s",temp->cName);
			printf("Your Balance is %.2f",temp->balance);
			pos=ftell(fp);
			temp->pos=pos-1;
			printf("\n The position is %d",pos-1);
			getch();
			return temp;
		}
	}
	return NULL;
}