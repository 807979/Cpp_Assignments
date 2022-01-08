#include<iostream>

using namespace std;
class Array
{
	public:
		int Num[10];
		void addNum(int Num[])
		{
			int ans=0;
			for(int i=0;i<10;i++)
			{
				ans=ans+i;
			}
			cout<<"\n Addition of all elements:"<<ans;
		}
		void findByEven(int Num[])
		{
			cout<<"\n Even Numbers from the array:";
			for(int i=0;i<10;i++)
			{
				if(i%2==0)
				cout<<"\t"<<i;
			}
		}
		void findByOdd(int Num[])
		{
			cout<<"\n Odd Numbers from the array:";
			for(int i=0;i<10;i++)
			{
				if(i%2!=0)
				cout<<"\t"<<i;
			}
		}
};
int main()
{
	Array a1;
	cout<<"\n Enter 10 array elements:";
	for(int i=0;i<10;i++)
	{
		cin>>a1.Num[i];
	}
	a1.addNum(a1.Num);
	a1.findByEven(a1.Num);
	a1.findByOdd(a1.Num);
	
	return 0;
}
