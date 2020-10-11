#include<iostream>
using namespace std; 

int main()
{
    char op;
    float num1, num2;
    cout << "\n \t Welcome to my Simple Calculator \t";
    cout << "\n \t Enter operator either + or - or * or /: \t";
    cin >> op;
    cout << "\n \t Enter two numbers: ";
    cin >> num1 >> num2;
    switch(op)
    {
        case '+':
            cout <<"\n \t Result is: \t"<< num1+num2;
            break;

        case '-':
            cout <<"\n \t Result is: \t"<< num1-num2;
            break;

        case '*':
            cout <<"\n \t Result is: \t"<<num1*num2;
            break;

        case '/':
            cout <<"\n \t Result is: \t"<<num1/num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout<<"\t Error! operator is not correct";
            break;
    }
return 0 ;
}
