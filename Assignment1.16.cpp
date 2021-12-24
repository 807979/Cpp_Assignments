#include<iostream>
#include<string.h>

using namespace std;
class Bill
{ public:
  float price;
  int qtys;
  
  float calculate(float price,int qtys)
    {   
    float billAmt=price*qtys;
	return billAmt;
   }
   
};
int main()
{   Bill b1,b2,b3;
    float total=b1.calculate(234.45f,4)+b2.calculate(256.38f,19)+b3.calculate(783.4f,20);
	cout<<"\n Total Bill:"<<total;
	
	return 0;
}
