#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;
    cout << "enter the operator(+ - * /):";
    cin >> op;

    cout << "enter the first  number" <<endl;
    cin>>num1;
   cout << "enter the second  number" <<endl;
    cin>>num2;

    switch (op)
    {
    case '+':
        cout << num1 << op << num2   <<" =  "<<num1 + num2;
        break;

    case '-':
        cout << num1 << op << num2  <<" =  "<< num1 - num2;
        break;

    case '*':
        cout << num1 << op << num2  <<" =  "<< num1 * num2;
        break;

    case '/':
        if (num2 == 0.0)
        {
            cout << "divide by zero situation" << endl;
        }
        else
        {
            cout << num1 << op << num2  <<" =  "<< num1 / num2  ;
        }
        break;
    default:
        cout << "invalid operator" << endl;
    }

    return 0;
}
