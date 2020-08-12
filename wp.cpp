#include<iostream>
using namespace std;
class weather_report
{
	int day;
	float low_temp,high_temp,amt_rain,amt_snow;
	public:
		weather_report();
		void display(int);
		void modify();
		void average(weather_report[],int);
};
int days_month(int,int);
int main()
{
	int flag;
	weather_report w[31],avg;
	int year,month,choice,i;
	char ch;
	cout<<"Enter the year:- ";
	cin>>year;
	do
	{
		flag=0;
		cout<<"Enter month:- ";
		cin>>month;
		if(month>12||month<1)
		{
			flag=1;
			cout<<"Invalid entry!";
		}
	}while(flag==1);
	int days=days_month(year,month);
	do
	{
		cout<<"\n1)Modify Report\n2)Average\n3)Display\n4)Exit";
		cout<<"\nEnter your choice:- ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				do
				{
					cout<<"Enter day of month to modify:- ";
					cin>>i;
					if(i>days||i<1)
					{
						printf("Invalid day!");
					}
					else
					{
						w[i-1].modify();
					}
					cout<<"Do you want to modify another record(y/n):- ";
					cin>>ch;
				}while(ch=='y'||ch=='Y');
				break;
				
			case 2:
				avg.average(w,days);
				break;
				
			case 3:
				cout<<"Day\tLow Temp\tHigh Temp\tAmount of rain\nAmount of snow"<<endl;
				for(i=0;i<days;i++)
				{
					w[i].display(i);
				}
				break;
				
			case 4:
				break;
				
			default:
				cout<<"Invalid choice!\n";
		}
	}while(choice!=4);
}
int days_month(int y,int m)
{
	int d;
	if((m%2!=0 && m<8)||(m%2==0 && m>7))
	{
		d=31;
	}
	else if(m!=2)
	{
		d=30;
	}
	else
		if(y%4==0)
			d=29;
		else
			d=28;
	return d;
}
weather_report::weather_report()
{
	low_temp=high_temp=amt_rain=amt_snow=0.0;
}
void weather_report::display(int d)
{
	day=d+1;
	cout<<" "<<day<<"\t  "<<low_temp<<"\t   "<<high_temp<<"\t  "<<amt_rain<<"\t  "<<amt_snow<<endl;
}
void weather_report::modify()
{
	int flag;
	do
	{
		cout<<"\nEnter low temperature:- ";
		cin>>low_temp;
		cout<<"\nEnter high temperature:- ";
		cin>>high_temp;
		if(low_temp>high_temp)
		{
			flag=1;
			cout<<"INVALID!\n";
		}
	}while(flag==1);
	cout<<"\nEnter amount of rain:- ";
	cin>>amt_rain;
	cout<<"\nEnter amount of snow:- ";
	cin>>amt_snow;
}
void weather_report::average(weather_report w[31],int days)
{
	int i=0;
	while(i<days)
	{
		low_temp=low_temp+w[i].low_temp;
		high_temp=high_temp+w[i].high_temp;
		amt_rain=amt_rain+w[i].amt_rain;
		amt_snow=amt_snow+w[i].amt_snow;
		i++;
	}
	low_temp=low_temp/days;
	high_temp=high_temp/days;
	amt_rain=amt_rain/days;
	amt_snow=amt_snow/days;
	cout<<"\nAvg Low temp: "<<low_temp;
	cout<<"\nAvg High temp: "<<high_temp;
	cout<<"\nAvg Amount of rain: "<<amt_rain;
	cout<<"\nAvg Amount of snow: "<<amt_snow;
}








































