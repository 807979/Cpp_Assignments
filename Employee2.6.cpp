#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
		char gender[20];
		int age;
		
		int eligible(char gender[],int age)
		{
			if(strcmp(gender,"male")==0)
			{  
			   if(age>=35)
			   return 1;
			   else if(age<35)
			   return 0;
		    }
			else if(strcmp(gender,"female")==0)
			{
			   if(age>=25)
			   return 1;
			   else if(age<25)
			   return 0;	
			}
			else 
			return 2;
		}
		
};
int main()
{
	Employee e1;
	cout<<"\n Enter your gender:";
	cin>>e1.gender;
	cout<<"\n Enter your age:";
	cin>>e1.age;
	
	if(e1.eligible(e1.gender ,e1.age)==1)
		cout<<"\n Eligible for the insurance!";
	else if(e1.eligible(e1.gender ,e1.age)==0)
	    cout<<"\n Not eligible.";
	else 
	    cout<<"\n Invalid input....!";
	    
	
	return 0;
}
