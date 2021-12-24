#include<iostream>
#include<string.h>
using namespace std;
class Branch
{
	public:
	int branchID;
	char branchName[];
	char branchCity[];
	
	void getData(int branchID,char branchName[], char branchCity[])
	{
		this->branchID=branchID;
		strcpy(this->branchName,branchName);
		strcpy(this->branchCity,branchCity);
	}
	void display()
	{
		cout<<"\n"<<branchID<<"\t"<<branchName<<"\t"<<branchCity;
	}
		
};
int main()
{   Branch b1,b2,b3;
    b1.getData(123,"Manufacturing" ,"Banglore");
    b2.getData(342,"Packaging","Chennai");
    b3.getData(142,"Transportation","Nagpur");
    
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
