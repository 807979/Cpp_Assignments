#include<iostream>

using namespace std;
class Interchange
{
    public:
	  void swap(int &n1,int &n2)
	  {
	  	int t;
	  	n1=t;
	  	n2=n1;
	  	t=n2;
	  	cout<<n1;
		  }	
};
int main()
{   int n1,n2;
    cout<<"\n Enter 2 Numbers:";
    cin>>n1>>n2;
    cout<<"\n n1="<<n1;
    cout<<"\n n2="<<n2;
    Interchange i1;
	i1.swap(n1,n2);
	cout<<"\n After swapping:";
	cout<<"\n n1="<<n1;
	cout<<"\n n2="<<n2;
	
	return 0;
}
