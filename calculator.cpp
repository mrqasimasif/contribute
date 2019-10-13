#include <iostream>

using namespace std;
float operation(float num1, float num2, char oper);
int main()
{
	float n1, n2, result;
	char oper;
	cout << "The program is calculator of basic calculations ";
	cout << "Enter '+' for Addition\n";
	cout << "Enter '-' for Subtractiontion\n";
	cout << "Enter '*' for Multiplication\n";
	cout << "Enter '/' for Division\n";
	
	cout << "\nEnter 1st Operand : ";
	cin >> n1;
	cout << "Enter 2nd Operand : ";
	cin >> n2;
	cout << "Enter operator : ";
	cin >> oper;
	result = operation(n1, n2, oper);

	cout << "This result of integer expression is : " << result << endl;
	system("pause");
	return 0;
}

float operation(float num1, float num2, char oper)
{
	while (true)
	{
		switch (oper)
		{
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			return num1 / num2;
			break;
		default:
			cout << "!!wrong operator!!\nSelect one from the following (+,-,*,/)";
			cin >> oper;
			break;
		}
	}
}
