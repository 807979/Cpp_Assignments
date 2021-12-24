#include<iostream>
#include<string.h>

using namespace std;
class Book
{
	public:
		
	int bookNo;
	char bookName[];
	float bookPrice;
	
	void addBook(int bookNo, char bookName[], float bookPrice)
	{
		this->bookNo=bookNo;
		strcpy(this->bookName,bookName);
		this->bookPrice=bookPrice;
		}
};
	void display(char user_in2, Book b[])
	{  for(int i=0;i<3;i++)
	    { if(strcmp(user_in2, b[i].bookName)==0)
	        cout<<"\n Book Details:"<<b[i].bookName<<b[i].bookNo<<b[i].bookPrice;
	    }
	}
	
int main()
{   Book b[3];

    int choice;
    cout<<"\n Enter your choice:";
    cin>>choice;
    
    cout<<"\n 1. Add Book";
    cout<<"\n 2. Display Book";
    cout<<"\n 3. Search Book";
    cout<<"\n 4. Display all book";
    cout<<"\n 5. Exit";

	switch (choice)
	{case 1:
	  b[0].addBook(203,"Wise and otherwise",500.45f);
	  b[1].addBook(102,"Krounchvadh",234.56f);
	  b[2].addBook(234,"Piturun",456.45f);
	  break;
	  
	 case 2:
	  cout<<"\n Enter bookName to see details:";
	  char user_in2[20];
	  cin>>user_in2;
      display(user_in2, b);
      
      break;
      case 3:
      	cout<<"\n /nothing";
      case 4:
      	cout<<"\n Nothing";
	 case 5:
	  exit(0);	
	}
	return 0;
	
}
