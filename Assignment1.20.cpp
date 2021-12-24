#include<iostream>
#include<string.h>

using namespace std;
class Temprature
{   public:
    float fahr,degree;
	
	float getTemp1(float fahr)
	{
		degree=((fahr-32)*5)/9;
		return degree;
	}
	float getTemp2(float degree)
	{
		fahr=(9*degree)/5+32;
		return fahr;
	}
};
int main()
{   Temprature t1;
    cout<<"\n Enter fahreinheite value:";
    float fahr;
    cin>>fahr;
    float ans1=t1.getTemp1(fahr);
    cout<<"\n Fahrenheite to Degree="<<ans1;
    
    cout<<"\n enter degree value:";
    float degree;
    cin>>degree;
    float ans2=t1.getTemp2(degree);
    cout<<"\n Degree to fahrenheite="<<ans2;
    
    
    
	return 0;
}
