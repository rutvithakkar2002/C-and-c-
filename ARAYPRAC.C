#include<stdio.h>
#include<conio.h>
void add();
void fadd();
void mul();
void fmul();
void sub();
void main()
{
	int choice1,choice2,choice3,choice4,choice5,choice6,choice7,choice8;
	printf("\n1------------Single Dimenssion");
	printf("\n2------------Multi Dimenssion");
	printf("\n3------------Exit");
	printf("\n Enter Your choice: ");
	scanf("%d",&choice1);
	while(1)
	{
		clrscr();
		switch(choice1)
		{
			case 1:
				printf("\n1------------Integer Operation");
				printf("\n2------------Float Operation");
				printf("\n3------------character Operation");
				printf("\n4------------Exit");
				printf("\n Enter Your choice: ");
				scanf("%d",&choice2);
				switch(choice2)
				{
					case 1:
						printf("\n1------------Addition Operation");
						printf("\n2------------Subtraction Operation");
						printf("\n3------------Multiplication Operation");
						printf("\n4------------Division Operation");
						printf("\n5-------------Sorting");
						printf("\n6-------------Searching");
						printf("\n7------------Exit");
						printf("\n Enter Your choice: ");
						scanf("%d",&choice3);
						switch(choice3)
						{
							case 1:
								add();
								break;
							case 2:
								sub();
								break;
							case 3:
								mul();
								break;
						   /*	case 4:
								div();
								break;  */
							case 5:
								printf("\n1------------Ascending Operation");
								printf("\n2------------Decending Operation");
								printf("\n3------------Exit");
								printf("\n Enter Your choice: ");
								scanf("%d",&choice4);
								switch(choice4)
								{
									case 1:

										break;
									case 2:
										break;
									case 3:
										exit(0);
									default:
										printf("\n inavalid choice!!");
								}
								break;
							case 6:
								printf("\n1------------Linear search Operation");
								printf("\n2------------Binary Search Operation");
								printf("\n3------------Exit");
								printf("\n Enter Your choice: ");
								scanf("%d",&choice5);
								switch(choice5)
								{
									case 1:
										break;
									case 2:
										break;
									case 3:
										exit(0);
									default:
										printf("\nInvalid Choice!!");
								}
								break;
							case 7:
								exit(0);
							default:
								printf("\nInvalid choice!!");
						}
					break;
					case 2:
				       /*	printf("\n Enter your choice: ");
						scanf("%d",&choice6);
						switch(choice6)
						{
							case 1:   */
								printf("\n1------------Addition Operation");
								printf("\n2------------Subtraction Operation");
								printf("\n3------------Multiplication Operation");
								printf("\n4------------Division Operation");
								printf("\n5-------------Sorting");
								printf("\n6-------------Searching");
								printf("\n7------------Exit");
								printf("\n Enter Your choice: ");
								scanf("%d",&choice7);
								switch(choice7)
								{
									case 1:
										fadd();
										break;
									case 2:
										break;
									case 3:
										fmul();
										break;
									case 4:
										break;
									case 5:
										printf("\n1------------Ascending Operation");
										printf("\n2------------Decending Operation");
										printf("\n3------------Exit");
										printf("\n Enter Your choice: ");
										scanf("%d",&choice7);
										switch(choice7)
										{
											case 1:
												break;
											case 2:
												break;
											case 3:
												exit(0);
											default:
												printf("\n inavalid choice!!");
										}
										break;
									case 6:
										printf("\n1------------Linear search Operation");
										printf("\n2------------Binary Search Operation");
										printf("\n3------------Exit");
										printf("\n Enter Your choice: ");
										scanf("%d",&choice8);
										switch(choice8)
										{
											case 1:
												break;
											case 2:
												break;
											case 3:
												exit(0);
											default:
												printf("\nInvalid Choice!!");
										}
										break;
									case 7:
										exit(0);
									default:
										printf("\nInvalid choice!!");
								}
						}

						break;
					case 3:
						printf("\n1------------Ascending Operation");
						printf("\n2------------Decending Operation");
						printf("\n3------------Exit");
						printf("\n Enter Your choice: ");
						scanf("%d",&choice7);
						switch(choice7)
						{
							case 1:
								break;
							case 2:
								break;
							case 3:
								exit(0);
							default:
								printf("\n inavalid choice!!");
						}
						break;
										case 4:
						exit(0);
					default:
						printf("Invalid choice!!!");
				}
				break;
	  /*		case 2:
				break;
			case 3:
				exit(0);
			default:
				printf("\n Invalid choice!!");     */
		}//end of switch
		getch();
	} //end of while
//}//end of main()

void add()
{
	int add=0,i;
	int a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t%d\t",a[i]);
	}
	for(i=0;i<5;i++)
	{
		add=add+a[i];
	}
	printf("\n Addition of 5 Integer elements is %d ",add);
}
void fadd()
{
	float add=0;
	int i;
	float a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\nElements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t%f\t",a[i]);
	}
	for(i=0;i<5;i++)
	{
		add=add+a[i];
	}
	printf("\n Addition of 5 float elements is %f ",add);
}
void sub()
{
	int sub=0,i;
	int a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t%d\t",a[i]);
	}
	for(i=0;i<5;i++)
	{
		sub=sub-a[i];
	}
	printf("\n subtraction of 5 Integer elements is %d ",sub);
}
void fmul()
{
	float mul=1;
	int i;
	float a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\nElements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t%f\t",a[i]);
	}
	for(i=0;i<5;i++)
	{
		mul=mul*a[i];
	}
	printf("\n multiplication of 5 float elements is %f ",mul);
}

void mul()
{
	int mul=1,i;
	int a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElements are: ");
	for(i=0;i<5;i++)
	{
		printf("\t%d\t",a[i]);
	}
	for(i=0;i<5;i++)
	{
		mul=mul*a[i];
	}
	printf("\n Multiplication of 5 elements is %d ",mul);
}