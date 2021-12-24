#include<iostream>
#include<string.h>
using namespace std;
class Product
{
	public:
	int	prodId;
	char prodName[20];
	int price;
	
	void addproduct(int prodId, char prodName[],int price)
	{
		this->prodId=prodId;
		strcpy(this->prodName,prodName);
		this->price=price;
	}

};
Product calcBill(Product p[]);
int main()
{   Product p[3];
    p[0].addproduct(102,"Mouse",45);
    p[1].addproduct(203,"Keyboard",23);
    p[2].addproduct(103,"Monitor",89);
    
    Product ans=calcBill(p);
    cout<<endl<<"Max Price is "<<ans.price<<"\nproduct name = "<<ans.prodName;
	return 0;
	
}
Product calcBill(Product p[])
{    
	for(int i=0;i<3;i++)
	{
	if(p[i].price>=50)
	return p[i];}
	 
}
