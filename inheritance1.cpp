#include<iostream>
using namespace std;
class B1
{
	protected:
		char name[10];
		int date,month,year;
		char blood_group[4];
};
class B2
{
	protected:
		float height;
		float weight;
};
class B3
{
	protected:
		char insurance_policy_no[20];
		char address[20];
};
class D:public B1,public B2,public B3
{
	char telephone_no[11];
	int driving_licence_no;
	int No;
	int flag;
	public:
		void getdata();
		void display(int);
};
void D::getdata()
{
	cout<<"Enter Name:- ";
	cin>>name;
	cout<<"\nDOB";
	cout<<"\nEnter your birth year(YYYY):- ";
	cin>>year;
	do
	{
		flag=0;
		cout<<"\nEnter your birth month(1-12):- ";
		cin>>month;
		if(month>12||month<1)
		{
			flag=1;
			cout<<"Invalid entry for month!";
		}
	}while(flag==1);
	
	do
	{
		flag=0;
		cout<<"\nEnter your birth date:- ";
		cin>>date;
		if(date>31||date<1)
		{
			flag=1;
			cout<<"Invalid date entry!";
		}
	}while(flag==1);
	cout<<"\nEnter your Blood Group:- ";
	cin>>blood_group;
	cout<<"\nEnter your height(in cms):- ";
	cin>>height;
	cout<<"\nEnter your weight(in kg):- ";
	cin>>weight;
	cout<<"\nEnter your insurance policy number:- ";
	cin>>insurance_policy_no;
	cout<<"\nEnter your address:- ";
	cin>>address;
	cout<<"\nEnter your telephone number:- ";
	cin>>telephone_no;
	cout<<"\nEnter your driving license number:- ";
	cin>>driving_licence_no;
}
void D::display(int a)
{
	No=a+1;
	cout<<No;
	cout<<"\t"<<name;
	cout<<"\t"<<date<<"/"<<month<<"/"<<year;
	cout<<"\t"<<blood_group;
	cout<<"\t\t"<<height;
	cout<<"\t"<<weight;
	cout<<"\t"<<insurance_policy_no;
	cout<<"\t\t\t"<<address;
	cout<<"\t"<<telephone_no;
	cout<<"\t"<<driving_licence_no;
	cout<<"\n";
}
int main()
{
	D d[10];
	int ch,n;
	char ans;
	do
	{
		cout<<"1)Create\n2)Display\n3)Search\n4)Modify\n5)Insert\n6)Delete";
		cout<<"\nEnter your choice:- ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				int i,n,a;
					cout<<"How many record you want to create? "<<endl;
					cin>>n;
					for( i=0;i<n;i++)
					   {
					       d[i].getdata();
					   }
  		  		break;
  		  	
  		  	case 2:
         		cout<<"No."<<"\t"<<"Name"<<"\t"<<"DOB"<<"\t\t"<<"Blood Grp"<<"\t"<<"Height"<<"\t"<<"Weight"<<"\t"<<"Insurance Policy No"<<"\t"<<"Address"<<"\t"<<"Telephone No"<<"\t"<<"Driving Licence No"<<"\n";
		             for(i=0;i<n;i++)
					   {
					       d[i].display(i);   
					   }
    	  		break;
    	  		
    	  	case 3:
    	  		int search;
			    cout<<"Enter the record No. to be searched:- "<<endl;
			    cin>>search;
			    d[search-1].display(a);
   		  		break;
   		  		
   		  	case 4:
   		  		int modify;
			    cout<<"enter the record No. to be modified:- "<<endl;
			    cin>>modify;
			    d[modify-1].getdata();
  		 		break;
  		 		
  		 	case 5:
				d[n+1].getdata();
				n++;
            	break;
            	
            case 6:
            	int pos;
            	cout<<"\nEnter Position of record which one to delete:- "<<endl;
            	cin>>pos;
            	
            	for(i=pos;i<n;i++)
            	{
            		d[pos-1]=d[pos];
				}
				n--;
            	cout<<"Record deleted";
            break;

		}
		cout<<"\nDo u want to continue??";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
}
