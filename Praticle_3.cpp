#include<iostream>
using namespace std;

class complex
{
	float real,img;
	public:
		complex();
		complex(float,float);
		friend complex operator+(complex,complex);
		friend complex operator-(complex,complex);
		complex operator*(complex);
		complex operator/(complex);
		void display();
};
complex::complex()
{
	real=img=0;
}
complex::complex(float r,float i)
{
	real=r;
	img=i;
}
complex operator+(complex c1 ,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;

	return temp;
}

complex operator-(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real-c2.real;
	temp.img=c1.img-c2.img;

	return temp;

}
complex complex::operator*(complex x)   /* if (a,b)(c,d) then formula of multiplication is (ac-bd,ad+bc) */
{
	complex temp;
	temp.real=(real*x.real)-(img*x.img);
	temp.img=(real*x.img)+(img*x.real);

	return temp;
}
                                                                                                                              
complex complex::operator/(complex x)
{
	complex temp;
	temp.real=((real*x.real)+(img*x.img)) / ((x.real*x.real)+(x.img*x.img));  
  	temp.img=((img*x.real)-(real*x.img)) / ((x.real*x.real)+(x.img*x.img));  

	return temp;
}

void complex::display()
{
	cout<<real<<"+"<<img<<"i"<<endl;
}

int main()
{
	int ch;
	float R1,I1,R2,I2;
		complex c3;
		cout<<"\nFirst number\nEnter real part: ";
		cin>>R1;
		cout<<"Enter imaginary part: ";
		cin>>I1;
		complex c1(R1, I1);
		
		cout<<"First complex No:"<<endl;
		c1.display();
		
		cout<<"\nSecond number\nEnter real part: ";
		cin>>R2;
		cout<<"Enter imaginary part: ";
		cin>>I2;
		complex c2(R2, I2);
		
		cout<<"second complex No:"<<endl;
		c2.display();
	
	do
	{
		cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n";
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Addition of complex No:"<<endl;
				c3=operator+(c1,c2);
				c3.display();
			break;
			
			case 2:
				cout<<"subtraction of complex No:"<<endl;
				c3=operator-(c1,c2);
				c3.display();
			break;
			
			case 3:
				cout<<"Multiplication of complex No:"<<endl;
				c3=c1*c2;
				c3.display();
			break;
			
			case 4:
				cout<<"Division of complex No:"<<endl;
				c3=c1/c2;
				c3.display();
			break;
			
		}
	}while(ch!=5);
	
	return 0;
}
