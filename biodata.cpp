#include<iostream>
using namespace std;
class personal
{
 protected:
  char name[50];
  char address[50];
  char birthdate[50];
  char birthplace[50];
  char gender;
  int age;
  float height,weight;
  char blood_group[10];
 public:
  void get_personal();
};
class professional
{
 protected:
  int noofyearsexp;
  char orgname[50];
  char projname[50];
  char projdetails[50];
  char specialized[30];
  char job;
 public:
  void get_professional();
};

class academic
{
 protected:
  char ssc_board[30];
  char school_name[50];
  int eng_marks,maths_marks,sci_marks;
  float ssc_per;
  char h_college[40];
  char hsc_board[30];
  char h_university[40];
  char h_year[10];
  int h_marks;
  float h_percentage;
  char h_Class[50];
  char h_course[40];
  char deg_college[50];
  char deg_college_university[50];
  char course[40];
  char year[10];
  int marks;
  float percentage;
  char Class[50];
 public:
  void get_academic();
};
class biodata: public personal,public academic,public professional
{
 public:void display();
};
void personal::get_personal()
{
 cout<<"Enter name::";
 cin>>name;
 cout<<"Enter Address::";
 cin>>address;
 cout<<"Enter Birthdate(dd/mm/yyyy)::";
 cin>>birthdate;
 cout<<"Enter Birthplace::";
 cin>>birthplace;
 cout<<"Enter gender(M/F)::";
 cin>>gender;
 cout<<"Enter age:: ";
 cin>>age;
 cout<<"Enter Blood Group:: ";
 cin>>blood_group;
 cout<<"Enter height(in cms):: ";
 cin>>height;
 cout<<"Enter weight(in kg):: ";
 cin>>weight;
};
void professional::get_professional()
{
 cout<<"Enter number of years of exp::";
 cin>>noofyearsexp;
 cout<<"Enter organization name::";
 cin>>orgname;
 cout<<"Enter specialized skill::";
 cin>>specialized;
 cout<<"Enter Post::";
 cin>>job;
 cout<<"Enter project name::";
 cin>>projname;
 cout<<"Enter project Details::";
 cin>>projdetails;
}
void academic::get_academic()
{
 cout<<"Enter SSC Board Name::";
 cin>>ssc_board;
 cout<<"Enter School Name::";
 cin>>school_name;
 cout<<"Enter ENGLISH , MATHS & SCIENCE marks::";
 cin>>eng_marks>>maths_marks>>sci_marks;
 cout<<"Enter SSC Percentage::";
 cin>>ssc_per;
 cout<<"Enter Higher College name::";
 cin>>h_college;
 cout<<"Enter board::";
 cin>>hsc_board;
 cout<<"Enter university name affiliated to::";
 cin>>h_university;
 cout<<"Enter academic year::";
 cin>>h_year;
 cout<<"Enter Course Name::";
 cin>>h_course;
 cout<<"Enter total marks::";
 cin>>h_marks;
 cout<<"Enter percentage::";
 cin>>h_percentage;
 cout<<"Enter class::";
 cin>>h_Class;
 cout<<"Enter College name from where degree completed::";
 cin>>deg_college;
 cout<<"Enter university name::";
 cin>>deg_college_university;
 cout<<"Enter Course Name::";
 cin>>course;
 cout<<"Enter academic year::";
 cin>>year;
 cout<<"Enter total marks::";
 cin>>marks;
 cout<<"Enter percentage::";
 cin>>percentage;
 cout<<"Enter class::";
 cin>>Class;
}
void biodata::display()
{

 cout<<"---------------------Student Biodata--------------"<<endl;
 cout<<"-----------------------------------------------------"<<endl;
 cout<<"____________________Personal Details__________________________"<<endl;
 cout<<"NAME::"<<name<<endl;
 cout<<"ADDRESS::"<<address<<endl;
 cout<<"DATE OF BIRTH::"<<birthdate<<"\t";
 cout<<"PLACE OF BIRTH::"<<birthplace<<endl;
 cout<<"GENDER::"<<gender<<"\t";
 cout<<"AGE::"<<age<<endl;
 cout<<"BLOOD GROUP::"<<blood_group<<endl;
 cout<<"HEIGHT::"<<height<<" cm"<<"\t";
 cout<<"WEIGHT::"<<weight<<" kg"<<endl;
 cout<<"--------------------------------------------------"<<endl;
 cout<<"________________Academic Details________________________"<<endl;
 cout<<"******SSC EDUCATION DETAILS******"<<endl;
 cout<<"SSC BOARD::"<<ssc_board<<endl;
 cout<<"SCHOOL NAME::"<<school_name<<endl;
 cout<<"ENGLISH MARKS::"<<eng_marks<<endl;
 cout<<"MATHEMATICS MARKS::"<<maths_marks<<endl;
 cout<<"SCIENCE MARKS::"<<sci_marks<<endl;
 cout<<"PERCENTILE SCORED::"<<ssc_per<<endl;
 cout<<"******HIGHER EDUCATION DETAILS******"<<endl;
 cout<<"1)Higher Edu./Diploma College::";
 cout<<"COLLEGE NAME::"<<h_college<<endl;
 cout<<"AFFILIATED TO::"<<h_university<<"\t";
 cout<<"EDUCATION BOARD::"<<hsc_board<<endl;
 cout<<"COURSE NAME::"<<h_course<<endl;
 cout<<"ACADEMIC YEAR"<<"\t"<<"MARKS"<<"\t"<<"PERCENTAGE"<<"\t"<<"GRADE/REMARKS"<<endl;
 cout<<h_year<<"\t\t"<<h_marks<<"\t"<<h_percentage<<"\t\t"<<h_Class<<endl;
 cout<<"2)Degree College::";
 cout<<"COLLEGE NAME::"<<deg_college<<endl;
 cout<<"AFFILIATED TO::"<<deg_college_university<<endl;
 cout<<"COURSE NAME::"<<course<<endl;
 cout<<"ACADEMIC YEAR"<<"\t"<<"MARKS"<<"\t"<<"PERCENTAGE"<<"\t"<<"GRADE/REMARKS"<<endl;
 cout<<year<<"\t\t"<<marks<<"\t"<<percentage<<"\t\t"<<Class<<endl;
 cout<<"-------------------------------------------------------"<<endl;
 cout<<"_______________Professional Details____________________"<<endl;
 cout<<"\nORGANISATION NAME::"<<orgname;
 cout<<"\nYEARS OF EXPERIENCE::"<<noofyearsexp<<"years";
 cout<<"\nSPECIALIZED IN::"<<specialized;
 cout<<"\nPOST::"<<job;
 cout<<"\nPROJECT NAME::"<<projname;
 cout<<"\nPROJECT DETAILS::"<<projdetails;
}
int main()
{
 biodata b;
 b.get_personal();
 b.get_academic();
 b.get_professional();
 b.display();
}
