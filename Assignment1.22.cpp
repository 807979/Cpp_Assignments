#include<iostream>
#include<string.h>
using namespace std;
class Array
{
	public:
	int Array[5];
	
	void getArray()
	{
		cout<<"\n Enter Array Elements";
		for(int i=0;i<5;i++)
		{ cin>>Array[i];
		}
	}	
};
void addArray(Array a1,Array a2);
int main()
{ 
   Array a1,a2;
   a1.getArray();
   a2.getArray();
   addArray(a1,a2); 
   
   return 0;

}
 void addArray(Array a1,Array a2)
  {
  	for(int i=0;i<5;i++)
  	{
  	   int ans[5];
	    ans[i]=a1.Array[i]+a2.Array[i];
  	  cout<<"\t"<<ans[i];
     }
     
  }
