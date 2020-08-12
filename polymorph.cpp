#include<iostream>
using namespace std;
class shape
{
	protected:
		double a;
	public:
		virtual float compute_area()=0;
};
//---------------------------------------------------------------------------------------------------------------------------------------------------
class circle:public shape
{
	float ans;
	public:
		void getdata();
		float compute_area();
		void display()
		{
			cout<<"Area of circle is:- "<<ans<<" sq/cm";
			cout<<"\n";
		}
};
void circle::getdata()
{
	cout<<"Enter the radius in cm:- ";
	cin>>a;
}
float circle::compute_area()
{
	ans=3.14*a*a;
	return ans;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------
class triangle:public shape
{
	float ans,height;
	public:
		void getdata();
		float compute_area();
		void display()
		{
			cout<<"\nArea of triangle is:- "<<ans<<" sq/cm";
			cout<<"\n";
		}
};
void triangle::getdata()
{
	cout<<"\nEnter the base in cm:- ";
	cin>>a;
	cout<<"\nEnter the height in cm:- ";
	cin>>height;
}
float triangle::compute_area()
{
	ans=0.5*a*height;
	return ans;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------
class rectangle:public shape
{
	float ans,breadth;
	public:
		void getdata();
		float compute_area();
		void display()
		{
			cout<<"\nArea of rectangle is:- "<<ans<<" sq/cm";
			cout<<"\n";
		}
};
void rectangle::getdata()
{
	cout<<"\nEnter the length in cm:- ";
	cin>>a;
	cout<<"\nEnter the breadth in cm:- ";
	cin>>breadth;
}
float rectangle::compute_area()
{
	ans=a*breadth;
	return ans;
	
}
//---------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
	int ch;
	do
	{
	cout<<"1)Calculate the area of circle\n2)Calculate the area of triangle\n3)Calculate the area of rectangle";
	cout<<"\nEnter your choice:- ";
	cin>>ch;
	switch(ch)
	{
		case 1:	
		{
		
			shape *ptr;
			circle c;
			ptr=&c;
			c.getdata();
			ptr->compute_area();
			c.display();
			break;
		}
		case 2:
		{
			shape *ptr;
			triangle t;
			ptr=&t;
			t.getdata();
			ptr->compute_area();
			t.display();
			break;
		}
		case 3:
		{
			shape *ptr;
			rectangle r;
			ptr=&r;
			r.getdata();
			ptr->compute_area();
			r.display();
			break;
		}
	}
}while(ch!=4);
}

