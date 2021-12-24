#include<iostream>
#include<string.h>

using namespace std;
class Swap
{
	public:
	int a,b;
	
	void swapNumbers(int &a,int &b)
	{                 // a=3 b=4
		this->a=a*b;  // a=3*4=12
		this->b=a/b;  // b=3
		this->a=a/b;  // a=4
	}
};
int main()
{   
    Swap s1;
    s1.swapNumbers(12,23);
    cout<<"\n a="<<this->s1.a<<"\t b="<<this->s1.b;
	return 0;
}
