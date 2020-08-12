#include<iostream>
using namespace std;

template<class T>
class matrix 
{
    T r, c, mat[30][30]; 
	public:
		 matrix()
		{
			r=c=0;
		}
        matrix(int a, int b)
       { 
            r=a;
            c=b;
       }
        void getdata();
        void display();
        matrix operator +(matrix);
        matrix operator -(matrix);
        matrix operator *(matrix);
        matrix operator !(void);
}; 
template<class T>
void matrix<T>:: getdata()
{  
    cout<<"\nEnter values into the matrix:"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c;j++)
        {
          	cin>>mat[i][j];
		 }
	}
}
template<class T>
void matrix<T>:: display()
{  
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c;j++)
        {
            cout<<mat[i][j]<<"\t";
		 }    
		 	cout<<"\n";
    }
} 
template<class T>
matrix<T> matrix<T>::operator +(matrix x)
{   
        matrix temp;
        temp.r=r;
        temp.c=c;
		        for(int i=0; i<r; i++)
        {
        	for(int j=0; j<c; j++)
        	{
        	 temp.mat[i][j]= mat[i][j] + x.mat[i][j];
			}
			cout<<"\n";
		}
        return temp;
}
template<class T>
matrix<T> matrix<T>::operator -(matrix x)
{   
        matrix temp;
        temp.r=r;
        temp.c=c;
		        for(int i=0; i<r; i++)
        {
        	for(int j=0; j<c; j++)
        	{
        	 temp.mat[i][j]= mat[i][j] - x.mat[i][j];
			}
			cout<<"\n";
		}
        return temp;
}
template<class T>
matrix<T> matrix<T>::operator *(matrix x)
{   
        matrix temp;
        temp.r=r;
        temp.c=c;
        for(int i=0;i<r;i++)
        {
        	for(int j=0;j<c;j++)
        	{	
        		temp.mat[i][j]=0;
		        for(int k=0;k<c;k++)    
				{    
					temp.mat[i][j]+=mat[i][k]*x.mat[k][j];    
				}    
			}	
		}
			cout<<"\n";
        return temp;
}
template<class T>
matrix<T> matrix<T>::operator !()
{   
        matrix temp;
        temp.r=r;
        temp.c=c;
		for(int i=0; i<r; i++)
        {
        	for(int j=0; j<c; j++)
        	{
        	 temp.mat[i][j]= mat[j][i];
			}
			cout<<"\n";
		}
        return temp;
}
int main()
{    
        int r,c,ch;
        cout<<"\nEnter the no of rows:- "<<endl;
        cin>>r;
        cout<<"\nEnter the no of columns:- "<<endl;
        cin>>c;
        
        do
        {
        	cout<<"\n1)Operations on Integer Matrices\n2)Operations on Floating Matrices\n3.Exit\n";
        	cout<<"\nEnter your choice:";
        	cin>>ch;
        	
        	switch(ch)
        	{
        		case 1:
        		{
        			matrix <int> m1(r,c) , m2(r,c) , m3;
			        m1.getdata();
			        m1.display();
			        
			        m2.getdata();
			        m2.display();
			        
			        m3= m1+m2;
			        cout<<"\nAddition of two Integer matrix is:- "<<endl;
			        m3.display();
			        
			        m3=m1-m2;
			        cout<<"\nSubstraction of two Integer matrices is:- "<<endl;
			        m3.display();
			        
			        m3=m1*m2;
			        cout<<"\nMultiplication of two Integer matrices is:- "<<endl;
			        m3.display();
			        
			        m3=!m1;
			        cout<<"\nTranspose of First Integer Matrix is:- ";
			        cout<<"\n";
			        m3.display();
			        
			        m3=!m2;
			        cout<<"\nTranspose of Second Integer Matrix is:- ";
			        cout<<"\n";
			        m3.display();
			    }
        		break;
        			
        		case 2:
    			{
						
        			matrix <float> m1(r,c) , m2(r,c) , m3;
			        m1.getdata();
			        m1.display();
			        
			        m2.getdata();
			        m2.display();
			        
			        m3= m1+m2;
			        cout<<"\nAddition of two Floating matrix is:"<<endl;
			        m3.display();
			        
			        m3=m1-m2;
			        cout<<"\nSubtraction of two Floating matrices is:- "<<endl;
			        m3.display();
			        
			        m3=m1*m2;
			        cout<<"\nMultiplication of two Floating matrices is:- "<<endl;
			        m3.display();
        			
        			m3=!m1;
			        cout<<"\nTranspose of First Floating Matrix is:- ";
			        cout<<"\n";
			        m3.display();
			        
			        m3=!m2;
			        cout<<"\nTranspose of Second Floating Matrix is:- ";
			        cout<<"\n";
			        m3.display();
			        
			        break;
        		}
    		}
		}while(ch!=3);
} 
