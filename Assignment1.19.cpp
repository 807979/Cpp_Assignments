#include<iostream>
#include<string.h>

using namespace std;
class Vehicle
{
	public:
	int vehNumber;
	char vehName;
	float avg;
	int fuelCap;
	
	void getData(int vehNumber,char vehName[], float avg, int fuelCap)
	{
		this->vehNumber=vehNumber;
		strcpy(this->vehName,vehName);
		this->avg=avg;
		this->fuelCap=fuelCap;
		
		}
	void show()
	{
		cout<<vehNumber<<vehName<<avg<<fuelCap;
		}	
		
};
Vehicle display(Vehicle x, Vehicle y,Vehicle z);
int main()
{
	Vehicle v1,v2,v3;
	v1.getData(123345,"Maruti Suzuki",100,9);
	v2.getData(345245,"Scorpio",12,10);
	v3.getData(658753,"Fort",120, 14); 
	
	Vehicle ans=display(v1,v2,v3);
	cout<<ans.show();
	return 0;
}
Vehicle display(Vehicle x, Vehicle y,Vehicle z)
{
	if(x.avg>=15 && x.fuelCap>=10)
	return x;
}
