#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int array[10];
	int i,n;
	cout<<"Enter no. of digits to be recorded/written in a file:- ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the number:- ";
		cin>>array[i];
	}
	ofstream ofile;
	ofile.open("Sample 1.doc");
	ofile.write((char *)&array,sizeof(array));
	ofile.close();
	
	ifstream ifile;
	ifile.open("Sample 1.doc");
	ifile.read((char *)&array,sizeof(array));
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<"\t";
	}
	ifile.close();
}
