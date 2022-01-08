#include<iostream>

using namespace std;
float Arithmetic(int n1,int n2)
{
	return 0.5f*(n1+n2);
};
int main()
{   
    int n1,n2;
	cout<<"\n Enetr 2 Nummbeers:";
	cin>>n1>>n2;
	cout<<"\n Arithmetic Operation= "<<Arithmetic(n1,n2);
	return 0;
}
