#include<iostream.h>
#include<conio.h>
#include<string.h>
class Bank
{
	int bid;
	char bName[30];
};
class Customer:public Account
{
	int cid;
	char cName[30];
	char uName[30];
	char password[30];
};
class Account:public Bank
{
	float balance;
};
class Employee:public Bank
{
	int eid;
	char eName[30];
	float salary;
};
class Transaction:public Customer,public Account
{

};
int main()
{
	clrscr();
	getch();
	return 0;
}