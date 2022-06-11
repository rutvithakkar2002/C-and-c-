#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class Bank
{
	private:
		int bid,cid,eid;
		char name[30],cName[30],cUName[30],cPassword[30];
		char eName[30],eUName[30],ePassword[30];
		float salary,balance;
	public:
		static int eCounter;
		static int cCounter;
		Bank()
		{
			balance=10000;
		}
		int login(char user[],char pass[]);
		void createCustomer();
		void createEmployee();
		void displayCustomer();
		void displayEmployee();
	     /*	void delCustomer();
		void delEmployee();  */
		void checkBalance();
		void deposit();
		void withdrawl();
	//	void transfer();
};
int Bank::eCounter;
int Bank::cCounter;
void Bank::checkBalance()
{
	cout<<"\n Welcome Mr/Mrs"<<cName;
	cout<<"\n Your balance is: "<<balance;
}
void Bank::deposit()
{
	float tempDeposit;
	cout<<"\nEnter the amount you want to deposit";
	cin>>tempDeposit;
	if(tempDeposit<=0)
	{
		cout<<"\n negative balance not allowed";
	}
	else
	{
		balance=balance+tempDeposit;
	}
}
void Bank::withdrawl()
{
	float tempBalance,with;
	cout<<"\n Enter the amount you want to withdrawl: ";
	cin>>with;
	tempBalance=balance-with;
	if(tempBalance<=10000)
	{
		cout<<"\n Insufficient balance";
	}
	else
	{
		balance=tempBalance;
	}
}
int Bank::login(char user[],char pass[])
{
	int found=-1;
	if(strcmp(user,cUName)==0 && strcmp(pass,cPassword)==0)
	{
		return 1;
	}
	return found;
}
void Bank::displayEmployee()
{
	cout<<"\n"<<eid<<"\t"<<eName<<"\t"<<salary;
}
void Bank::createEmployee()
{
	if(Bank::eCounter<5)
	{
		cout<<"\n Enter the eid: ";
		cin>>eid;
		cout<<"\n Enter the ename: ";
		cin>>eName;
		cout<<"\n Enter the user Name: ";
		cin>>eUName;
		cout<<"\n Enter the password: ";
		cin>>ePassword;
		cout<<"\n Enter the salary Fixed: ";
		cin>>salary;
	}
	else
	{
		cout<<"The bank is full..";
	}
}
void Bank::createCustomer()
{
	if(Bank::cCounter<5)
	{
		cout<<"\n Enter the cid: ";
		cid=Bank::cCounter+1;
		cout<<"\n Enter the cname: ";
		cin>>cName;
		cout<<"\n Enter the user Name: ";
		cin>>cUName;
		cout<<"\n Enter the password: ";
		cin>>cPassword;
	}
	else
	{
		cout<<"\n The bank full..";
	}
}
void Bank::displayCustomer()
{
	cout<<"\n"<<cid<<"\t"<<cName<<"\t"<<balance;
}
int main()
{
	int choice,adminChoice,customerChoice,i;
	char uName[30],pass[30];
	Bank objBank[5];
	while(1)
	{
		main:
		clrscr();
		cout<<"\n1-----------Admin login";
		cout<<"\n2-----------Customer login";
		cout<<"\n3-----------Employee login";
		cout<<"\n4-----------logout";
		cout<<"\n Enter the choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\n Enter the user name: ";
				cin>>uName;
				cout<<"\n Enter the password: ";
				cin>>pass;
				if(strcmp(uName,"admin")==0 && strcmp(pass,"admin")==0)
				{
					while(1){
					clrscr();
					cout<<"\n1---------create Employee";
					cout<<"\n2---------create Customer";
					cout<<"\n3---------display Employee";
					cout<<"\n4---------display Customer";
					cout<<"\n5---------logout";
					cout<<"\n Enter your choice: ";
					cin>>adminChoice;
					switch(adminChoice)
					{
						case 1:
							objBank[Bank::eCounter].createEmployee();
							Bank::eCounter++;
							break;
						case 2:
							objBank[Bank::cCounter].createCustomer();
							Bank::cCounter++;
							break;
						case 3:
							cout<<"\neid\tename\tsalary\n";
							for(i=0;i<Bank::eCounter;i++)
							{
								objBank[i].displayEmployee();
							}
							break;
						case 4:
							cout<<"\n cid\tcustomer name\tbalance";
							for(i=0;i<Bank::cCounter;i++)
							{
								objBank[i].displayCustomer();
							}
							break;
						case 5:
							goto main;
					}//end of admin choice
					getch();
				}//end of while
				}//end of switch
				else
				{
					cout<<"The user name and password you entered is wrong!!";
					getch();
				}
				break;
			case 2:
				cout<<"\n Enter the user name: ";
				cin>>uName;
				cout<<"\n Enter the password: ";
				cin>>pass;
				for(i=0;i<Bank::cCounter;i++)
				{
					if(objBank[i].login(uName,pass))
					{       while(1){
						cout<<"\n1---------Check Balance";
						cout<<"\n2---------Deposit";
						cout<<"\n3---------Withdrawl";
						cout<<"\n4---------Transfer";
						cout<<"\n5---------Logout";
						cout<<"\n Enter your choice: ";
						cin>>customerChoice;
						switch(customerChoice)
						{
							case 1:
								objBank[i].checkBalance();
								break;
							case 2:
								objBank[i].deposit();
								break;
							case 3:
								objBank[i].withdrawl();
								break;

						    /*	case 4:
								objBank[i].transfer();
								break;                 */
							case 5:
								exit(0);
						}//end of customerchoice
						getch();
					}  //end of while
				}  //end of if
				}//end of for
				getch();
				break;
			case 3:
				cout<<"This is employee login";
				break;
			case 4:
				exit(0);
		}//end of main switch
		getch();
		return 0;
	}//end of while
}//end of main