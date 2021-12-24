#include<iostream>
#include<string.h>
using namespace std;
class Array
{
	public:
	int size;
	int Element[size];
		
	getArray()
	{
	cout<<"\n Enter size of an array:";
    cin>>size;
    cout<<"\n Enter array element";
    
    for(int i=0;i<size;i++)
	 {
	  cin>>Element[i];
      }  
	}
	void show()
	{
		cout<<"\n Display Array Elements";
		for(int i=0;i<size;i++)
		{
			cout<<"\t"<<Element[i];
		}
	}
	void getEven(int Element[]);
	void getOdd(int Element[]);
	
};

void Array::getEven(int Element[])
{   cout<<"\n Even NUmbers";
    for(int i=0;i<size;i++)
    {
	if(Element[i]%2==0)
    cout<<"\t "<<Element[i];
    }
}
void Array::getOdd(int Element[])
{  cout<<"\n Odd Numbers";
   for(int i=0;i<size;i++)
    {
    	if(Element[i]%2!=0)
    	cout<<"\t"<<Element[i];
	}
}
int main()
{   
    Array a1;
    int size;
    int Element[size];
    
    a1.getArray();
    a1.show();
    a1.getEven(Element);
    a1.getOdd(Element);
	return 0;
}
