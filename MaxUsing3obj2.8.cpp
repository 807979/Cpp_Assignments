#include<iostream>
using namespace std;
class Integer
{
	public:
		int no;
		
		int findByMax(int no1, int no2, int no3)
		{
			i1.no=n1;
			i2.no=no2;
			i3.no=no3;
			if(i1.no>i2.no && i1.no>i3.no)
			{
				 return i1.no;
			}
			else if(i2.no>i3.no && i2.no>i1.no)
			return i2.no;
			else
			return i3.no;
		}
};
int main()
{
	Integer i1,i2,i3;
	i1.no=67;
	i2.no=90;
	i3.no=83;
	cout<<"\n Max="<<findByMax(i1.no,i2.no,i3.no);
	
	
	return 0;
}
