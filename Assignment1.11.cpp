#include<iostream>
#include<string.h>
using namespace std;

int main()
{   
    int num1,num2,*ptr1,*ptr2;
    int add=0,mult=0,sub=0,div=0;
    cout<<"\n Enter two numbers:";
    cin>>num1>>num2;
    ptr1=&num1;
    ptr2=&num2;
    add=*ptr1+*ptr2;
    sub=*ptr1-*ptr2;
    mult=(*ptr1)*(*ptr2);
    div=(*ptr1 )/ (*ptr2);
    cout<<"\n Sum="<<add<<"\n Sub="<<sub<<"\n Mult="<<mult<<"\n Div="<<div;;
    return 0;
}
