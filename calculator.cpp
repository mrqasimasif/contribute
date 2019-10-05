#include <iostream>

using namespace std;
int main()
{
    int n1 , n2 , result; 
    char oper;
    cout<<"The program is calculator of basic interger expression ";
    cout<<"\nEnter 1st number : ";
    cin>>n1;
    cout<<"Enter 2nd number : ";
    cin>>n2;
    cout<<"Enter operator : ";
    cin>>oper;
    result = operation (n1,n2,oper);

    cout<<"This result of integer expression is : "<<result;
    system("pause");
    return 0;
}


int operation(int num1, int num2, char oper)
{
    if (oper == '+')
        return num1 + num2;
    else if (oper == '*')
        return num1 * num2;
    else if (oper == '-')
        if (num1 > num2)
            return num1 - num2;
        else
            return num2 - num1;
    else if (oper == '/')
        return num1 / num2;
    else
        return num1 % num2;
          
}
