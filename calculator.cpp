//This program performs basic arithmatic operations
//Defining simple calculator
#include <iostream>

using namespace std;
//Defining function for arithmatic operations
double operation(double num1, double num2, char oper)
{
//Condition to check whether the inserted operator is true or not
   while (true)
    {
      if (oper == '+')   return num1 + num2;		//addition of two variables
      if (oper == '-') 	 return num1 - num2;		//subtraction
      if (oper == '*')   return num1 * num2;		//multiplication
      if (oper == '/')   return num1 / num2;		//division
      	//Remainder
      if (oper == '%')   return static_cast<int>(num1) / static_cast<int>(num2);
      cout << "!!wrong operator!!\nSelect one from the following (+,-,*,/) : ";
      cin >> oper;
    }
}

//Qasim yr pull request merge kr ly

int main()
{
	float op1, op2, result;
	char oper;
	cout << "The program is calculator of basic calculations ";
	cout << "Enter '+' for Addition\n";
	cout << "Enter '-' for Subtraction\n";
	cout << "Enter '*' for Multiplication\n";
	cout << "Enter '/' for Division\n";
	cout << "Enter '%' for Remainder\n";
	
	cout << "\nEnter 1st Operand : ";
	cin >> op1;
	cout << "\nEnter 2nd Operand : ";
	cin >> op2;
	cout << "\nEnter operator : ";
	cin >> oper;
	result = operation(n1, n2, oper);
	//printing the result of the selected expression
	cout << "This result of integer expression is : " << result << endl;
	system("pause");
	return 0;
}
#pragma once
// yar meri b mege kr lain

// program to find the number of elements 
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

#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<&x<<endl;
	return 0;
}
