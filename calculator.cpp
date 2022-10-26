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
      if (oper == '+')   return num1 + num2;  break;	//addition of two variables
      else if (oper == '-') 	 return num1 - num2; break;		//subtraction
      else if (oper == '*')   return num1 * num2; break;	//multiplication
      else if (oper == '/')   return num1 / num2;  break;	//division
      	//Remainder
      else if (oper == '%')   return static_cast<int>(num1) / static_cast<int>(num2);  break;
      else {
	     	cout << "!!wrong operator!!\nSelect one from the following (+,-,*,/) : ";
      		cin >> oper;
      }
    }
}

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

