#include<iostream>

using namespace std;
int  add(int n1,int n2)
{
	return n1+n2;
};
int main()
{   
    int n1,n2;
	cout<<"\n Enter 2 Numbers:";
    cin>>n1>>n2;
    cout<<"Sum= "<<add(n1,n2);
   
	return 0;
}
