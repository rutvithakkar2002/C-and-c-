#include<iostream.h>
#include<conio.h>
#include<string.h>
class Shape
{
	float radius,length,breadth,ans;
	public:
		Shape()
		{
			radius=0;
			length=0;
			breadth=0;
		}
		void area();
		void area(float r);
		void area(float l,float b);
};
void Shape::area()
{
	cout<<"\n Enter the value length: " ;
	cin>>length;
	ans=length*length;
	cout<<endl<<"\n The area of square is: "<<ans;
}
void Shape::area(float l,float b)
{
	length=l;
	breadth=b;
	ans=length*breadth;
	cout<<endl<<"\n The area of is: "<<ans;
}

void Shape::area(float r)
{
	radius=r;
	ans=3.14*radius*radius;
	cout<<endl<<"\n The area of circle is: "<<ans;
}
int main()
{
	clrscr();
	Shape obj;
	obj.area();
	obj.area(3.5f);
	obj.area(3.7f,3.4f);
	getch();
	return 0;
}