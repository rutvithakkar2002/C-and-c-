#include<stdio.h>
#include<conio.h>
void add();
void fadd();
void mul();
void fmul();
void sub();
void fsub();
void div();
void fdiv();
void asc();
void dec();
void fasc();
void fdec();
void linear();
void binary();
void flinear();
void fbinary();
void main()
{
	int choice1,choice2,choice3,choice4,choice5,choice6,choice7,choice8;
	printf("\n1------------Single Dimenssion");
	printf("\n2------------Multi Dimenssion");
	printf("\n3------------Exit");
	printf("\n Enter Your choice: ");
	scanf("%d",&choice1);
	while(1	)
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
							case 4:
								div();
								break;
							case 5:
								printf("\n1------------Ascending Operation");
								printf("\n2------------Decending Operation");
								printf("\n3------------Exit");
								printf("\n Enter Your choice: ");
								scanf("%d",&choice4);
								switch(choice4)
								{
									case 1:
										asc();
										break;
									case 2:
										dec();
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
										linear();
										break;
									case 2:
										binary();
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
								fsub();
								break;
							case 3:
								fmul();
								break;
							case 4:
								fdiv();
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
										fasc();
										break;
									case 2:
										fdec();
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
										flinear();
										break;
									case 2:
										fbinary();
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
								charasc();
								break;
							case 2:
								chardec();
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
	int i;
	int a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&b[i]);
	}
	printf("\n2nd array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\n Addition of elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	}
}
void fadd()
{
	int i;
	float a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&b[i]);
	}
	printf("\n2nd array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\n Addition of elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",c[i]);
	}
}
void sub()
{
	int i;
	int a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&b[i]);
	}
	printf("\n2nd array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]-b[i];
	}
	printf("\n Addition of elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	}
}
void fsub()
{
	int i;
	float a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&b[i]);
	}
	printf("\n2nd array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]-b[i];
	}
	printf("\n Addition of elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",c[i]);
	}
}
void mul()
{
	int i;
	int a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&b[i]);
	}
	printf("\n2nd array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]*b[i];
	}
	printf("\n Multiplication of elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	}
}
void fmul()
{
	int i;
	float a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&b[i]);
	}
	printf("\n2nd array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]*b[i];
	}
	printf("\n Multiplication of elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",c[i]);
	}
}
void fdiv()
{
	int i;
	float a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&b[i]);
	}
	printf("\n2nd array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]/b[i];
	}
	printf("\n Division of elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",c[i]);
	}
}
void div()
{
	int i;
	int a[5],b[5],c[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&b[i]);
	}
	printf("\n2nd array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]/b[i];
	}
	printf("\n Division of elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	}
}
void asc()
{
	int i,j,temp;
	int a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
void fasc()
{
	int i,j;
	float temp,a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
}
void fdec()
{
	int i,j;
	float temp,a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
}


void dec()
{
	int i,j,temp;
	int a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
void linear()
{
	int a[5],key,i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n Enter key element you want to search?");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("%d is present at %d position",key,i+1);
		}
	}
}
void binary()
{
	int a[5],key,i,low=0,high=5-1,mid,flag=-1;
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n Enter key element: ");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag=mid;
			break;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(flag==-1)
	{
		printf("\n key not found!!");
	}
	else
	{
		printf("\n Key found..");
	}
}
void flinear()
{
	float a[5],key;
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
	printf("\n Enter key element you want to search?");
	scanf("%f",&key);
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("%f is present at %f position",key,i+1);
		}
	}
}

void fbinary()
{
	float a[5],key;
	int i,low=0,high=5-1,mid,flag=-1;
	for(i=0;i<5;i++)
	{
		printf("\n Enter no %d: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("\n1st array Elements are: ");
	for(i=0;i<5;i++)
	{
		printf("%f ",a[i]);
	}
	printf("\n Enter key element: ");
	scanf("%f",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag=mid;
			break;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(flag==-1)
	{
		printf("\n key not found!!");
	}
	else
	{
		printf("\n Key found..");
	}
}
/*void charasc()
{

}    */