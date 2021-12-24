#include<iostream>
#include<string.h>

using namespace std;
class EvenOdd
{
	public:
		
	
	void findByEven(int n1,int n2)
	{   cout<<"\n Even Numbers:";
		for(int i=n1;i<=n2;i++)
		  { if(i%2==0)
		    cout<<"\t"<<i;
		  }
	}
	void findByOdd(int n1, int n2)
	{
		cout<<"\n Odd Numbers:";
		for(int i=n1;i<=n2;i++)
		 {
		 	if(i%2!=0)
		 	cout<<"\t"<<i;
		 }
	}
};
int main()
{  int n1,n2;
   EvenOdd e1;
   cout<<"\n Enter n1 and n2:";
   cin>>n1>>n2;
   e1.findByEven(n1,n2);
   e1.findByOdd(n1,n2);
   return 0;
}
