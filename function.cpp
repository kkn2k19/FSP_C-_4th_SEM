//29.02.2024

#include <iostream>
using namespace std;

// function : functions are a block of code that perform a certain task.
//function : user defined and pre-defined
//user-defined : add(), average(), or twoSum()
//predefined : printf(), scanf() etc...

//parameterized function : these function need to fulfill their
//non parameterized function:

// int add(int a, int b)
// {
//     return (a+b);
// }
// int sub(int a, int b)
// {
//     return (a-b);
// }
// int mul(int a, int b)
// {
//     return (a*b);
// }
// int divi(int a, int b)
// {
//     return (a/b);
// }
// int rem(int a, int b)
// {
//     return (a%b);
// }

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers : ";
//     cin >> a;
//     cin >> b;

//     cout << "Addition : " << add(a, b) << endl;
//     cout << "Subtraction : " << sub(a, b) << endl;
//     cout << "Divison : " << divi(a, b) << endl;
//     cout << "Multiplication : " << mul(a, b) << endl;
//     cout << "Modulus : " << rem(a, b) << endl;
//     return 0;
// }

///Menu Driven Calculator using function, do-while loop, if else or switch case.

int add(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{
    return (a - b);
}
int mul(int a, int b)
{
    return (a * b);
}
int divi(int a, int b)
{
    return (a / b);
}
int rem(int a, int b)
{
    return (a % b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a;
    cin >> b;

    // cout << "Addition : " << add(a, b) << endl;
    // cout << "Subtraction : " << sub(a, b) << endl;
    // cout << "Divison : " << divi(a, b) << endl;
    // cout << "Multiplication : " << mul(a, b) << endl;
    // cout << "Modulus : " << rem(a, b) << endl;

    char op;
    cout << "Enter Operator (+, -, *, /, %) : ";
    cin >> op;

    while (op != 0)
    {
        switch (op)
        {
        case '+':
            cout << "Addition : " << add(a, b) << endl;
            break;
        case '-':
             cout << "Subtraction : " << sub(a, b) << endl;
            break;
        case '*':
             cout << "Multiplication : " << mul(a, b) << endl;
            break;
        case '/':
             cout << "Divison : " << divi(a, b) << endl;
            break;
        case '%':
             cout << "Remainder : " << rem(a, b) << endl;
            break;
        default:
            cout << "Enter correct Operator" << endl;
        }
        return 0;
    }
}
