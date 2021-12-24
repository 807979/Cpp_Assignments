#include<iostream>
#include<string.h>
using namespace std;
class Population
{
	public:
	char city[];
	long Tpopulation;
	
	void getData(char city[], long population)
	{  
	    strcpy(this->city, city);
	    this->Tpopulation=Tpopulation;
	}
	void show()
	{
		cout<<"\n"<<city<<"\t"<<Tpopulation;
	}
	
};
Population findByMax(Population p1,Population p2,Population p3);
int main()
{
	Population p1,p2,p3;
	p1.getData("Mumbai",23453);
	p2.getData("Pune",34521);
	p3.getData("Thane",56433);
	
	Population ans=findByMax(p1,p2,p3);
	cout<<"\n Maximum Poplation:";
    ans.show();
	return 0;
	
}
Population findByMax(Population x,Population y,Population z)
{
	if(x.Tpopulation>y.Tpopulation && x.Tpopulation> z.Tpopulation)
	 return x;
	else if(y.Tpopulation>z.Tpopulation && y.Tpopulation>x.Tpopulation)
	return y;
	else if(z.Tpopulation>y.Tpopulation && z.Tpopulation>x.Tpopulation)
	return z;
	else cout<<"\n Smoething went wrong";
}
