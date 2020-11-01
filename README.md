# contribute
<br>Your any type of code here.
This is the basic arithmetic calculator used to add, subtract, multiply and divide numbers.<br/>
//<!--basic calculator-->



//to find of length of characters

#include <iostream.>
using namespace std;
#define max 10
int main()
{
	int number [max]={1,2,3,4,5,6,7,8,9,10};
	int index;
//	cout.set(ios::right);
	for(index=0;index<max;index++)
	{
		cout<<endl<<"the elements of array element are.."<<endl;
		cout.width(10);
		cout <<(index +1)<<"is";
		cout<<number[index];	
	}
		cout <<endl<<endl;
	return 0;
}
