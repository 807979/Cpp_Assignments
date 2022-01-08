#include<iostream>
#include<string.h>


using namespace std;
class Number
{
	public:        //23497
		void interchange(long Num)
		{  
		   long No;
		   int rem1, rem2;
		   int t;
		   Num=No;
		
		   No=No/1000; //23
		   rem1=No%10;  //3
		   
		   Num=Num/100;  //234
		   rem2=Num%10;   //4
		   
		   rem1=t;
		   rem2=rem1;
		   t=rem2;
		   
		   
		   
		}
}; 
int main()
{   
    Number n1;
    
	long Num;
	cout<<"\n Enter 5 digit number:";
	cin>>Num;
	n1.interchange(Num);
	return 0;
}
