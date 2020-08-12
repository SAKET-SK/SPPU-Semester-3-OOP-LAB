#include <iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
class meter_cm;
class feet_inch
{
    float feet,inch;
    public:
    feet_inch()
    {
        feet=inch=0;
    }
    feet_inch(float a,float b)
    {
        feet=a;
        inch=b;
    }
    void display();
    friend feet_inch operator+(feet_inch,meter_cm);
    friend meter_cm operator+(meter_cm,feet_inch);
    friend feet_inch operator-(feet_inch,meter_cm);
    friend meter_cm operator-(meter_cm,feet_inch);
};

class meter_cm
{
    float meter,cm;
    public:
    meter_cm()
    {
        meter=cm=0;
    }
    meter_cm(int a,int b)
    {
        meter=a;
        cm=b;
    }
    void display();
    friend feet_inch operator+(feet_inch,meter_cm);
    friend meter_cm operator+(meter_cm,feet_inch);
    friend feet_inch operator-(feet_inch,meter_cm);
    friend meter_cm operator-(meter_cm,feet_inch);
};
feet_inch operator+(feet_inch x,meter_cm y)
{
    feet_inch temp;
    float a=(x.feet*12)+x.inch+(y.meter*39.3701)+(y.cm*0.394);
    int b=round(a);
    temp.feet=b/12;
    temp.inch=b%12;
    return temp;
}
meter_cm operator+(meter_cm x,feet_inch y)
{
    meter_cm temp;
    float a=(x.meter*100)+x.cm+(y.feet*30.48)+(y.inch*2.54);
    int b=round(a);
    temp.meter=b/100;
    temp.cm=b%100;
    return temp;
}
feet_inch operator-(feet_inch x,meter_cm y)
{
    feet_inch temp;
    float a=(x.feet*12)-x.inch-(y.meter*39.3701)-(y.cm*0.394);
    int b=round(a);
    temp.feet=b/12;
    temp.inch=b%12;
    return temp;
}
meter_cm operator-(meter_cm x,feet_inch y)
{
    meter_cm temp;
    float a=(x.meter*100)-x.cm-(y.feet*30.48)-(y.inch*2.54);
    int b=round(a);
    temp.meter=b/100;
    temp.cm=b%100;
    return temp;
}
void feet_inch::display()
{
    cout<<"\nFeet:"<<feet<<"\nInches:"<<inch;
}
void meter_cm::display()
{
    cout<<"\nMeter:"<<meter<<"\nCentimeter:"<<cm;
}
int main()
{
    float f,i,m,c;
    cout<<"Enter feet:";
    cin>>f;
    cout<<"Enter inches:";
    cin>>i;
    cout<<"Enter meter:";
    cin>>m;
    cout<<"Enter centimeters:";
    cin>>c;
    feet_inch f2,f1(f,i);
    meter_cm m2,m1(m,c);
    int ch;
    do
    {
        cout<<"\n\n1.ADDITION RESULT IN FEET INCHES\n2.ADDITION RESULT IN METER CENTIMETERS\n3.SUBTRACTION RESULT IN FEET INCHES\n4.SUBTRACTION RESULT IN METER CENTIMETER\n5.EXIT\nENTER YOUR CHOICE:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                 f2=f1+m1;
                 f2.display();
                 break;
            }
            case 2:
            {
                m2=m1+f1;
                m2.display();
                break;
            }
            case 3:
            {
                f2=f1-m1;
                f2.display();
                break;
            }
            case 4:
            {
                m2=m1-f1;
                m2.display();
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                cout<<"Invalid choice";
            }
        }
    }while(ch!=4);

    return 0;
}
