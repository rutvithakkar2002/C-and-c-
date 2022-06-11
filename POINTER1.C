#include<stdio.h>
#include<conio.h>
void main()
{
	int x=9;
	char ch='A';
	float y=453.55;
	double z=5642.995;
	int *p;
	char *q;
	float *r;
	double *s;
	p=&x;
	q=&ch;
	r=&y;
	s=&z;
	printf("\n The value is %d address is %u",*p,p);
	printf("\n The value is %c address is %u",*q,q);
	printf("\n The value is %f address is %u",*r,r);
	printf("\n The value is %d address is %u",*s,s);
	getch();
}