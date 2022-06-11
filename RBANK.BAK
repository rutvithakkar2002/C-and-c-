/*Auther: Rutvi Thakkar
  Doc:
  Objective:
*/
//bydefault members are private
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Bank
{
	int cid;            //data members
	char cName[30];
	char uName[30];
	char password[30];
	float balance;
     //	public:
     //		protected:
     public:
	Bank()  //special function
	{
		cid=3;
		strcpy(cName,"royal");
		cout<<"\n Constructor is called";
	}
	Bank(int id,char name[])
	{
		cid=id;
		strcpy(cName,name);
		cout<<"\n This is parameterized constructor" ;
	}
	void scanBankDetails()
	{
		cout<<endl<<"Enter the value of cid and cname: ";
		cin>>cid>>cName;
	}
	void displayBankDetails()
	{
																				cout<<"\ncid\tname";
		cout<<"\n"<<cid<<"\t"<<cName;
	}
	~Bank()
	{
		cout<<"Destructor is distroyed";
	}
};
int main()
{
	clrscr();
	Bank objBank;
	Bank objBank1(1,"Rutvi");
	objBank.scanBankDetails();
	objBank.displayBankDetails();
	objBank1.displayBankDetails();
	getch();
	return 0;
}