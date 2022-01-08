#include<iostream>

using namespace std;
class Convert
{
	public:
		float inMeter(float d)
		{
			return 1000*d;
		}
		float inCenti(float d)
		{
			return 100000*d;
		}
		float inFeet(float d)
		{
			return 3281*d;
		}
		float inInch(float d)
		{
			return 39370*d;
		}
};
int main()
{   char s1[20],s2[20];
    float d;
    
	cout<<"\n City 1:";
	cin>>s1;
	cout<<"\n City 2:";
	cin>>s2;
	cout<<"\n Enter distance between "<<s1<<" and "<<s2<<" in Km :";
	cin>>d;
	Convert c1;
	
	cout<<"\n In meter="<<c1.inMeter(d);
	cout<<"\n In Centimeter="<<c1.inCenti(d);
	cout<<"\n In Foot="<<c1.inFeet(d);
	cout<<"\n In Inch="<<c1.inInch(d);
	return 0;
}
