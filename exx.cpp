#include<iostream>
using namespace std;
class excep
{
	public:
	double a,b;
	int result;
	void input()
	{
		cout<<"Enter Dividend:- ";
		cin>>a;
		cout<<"\nEnter Divisor:- ";
		cin>>b;
	}
	void calculate()
	{
		try
		{
			if(b!=0)
			{
				cout<<"Division Possible! Result is:- "<<a/b<<endl;
			}
			else
			{
				cout<<"Division By 0 not possible! Exception Caught!";
			}	
		}
		catch(int i)
		{
			cout<<"Catch Block!";
		}
	}
};
int main()
{
	excep e;
	e.input();
	e.calculate();
	return 0;
}
