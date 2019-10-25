//This program performs basic arithmatic operations
//Defining simple calculator
#include <iostream>
#include <cmath>

using namespace std;
//Defining function for arithmatic operations
float operation(float num1, float num2, char oper)
{
//Condition to check whether the inserted operator is true or not
   while (true)
    {
	  if (oper == '+')   return num1 + num2;	//addition of two variables
      if (oper == '-') 	 return num1 - num2;		//subtraction
      if (oper == '*')   return num1 * num2;		//multiplication
      if (oper == '/')   return num1 / num2;		//division
      if (oper == '^')   return pow(num1, num2);        //power
	   
			cout << "!!wrong operator!!\nSelect one from the following (+,-,*,/) : ";
			cin >> oper;
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
	cout << "Enter '^' for Power\n";
	
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

