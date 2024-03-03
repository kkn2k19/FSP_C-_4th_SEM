//01.03.2024

//Call by value VS call by reference

// 1. It determine how the arguments (data) are passed to function.

// Parameter VS arguments

// parameter : requirement of function : type of data needed by function to return

// ex : function abc(int a, int b, int c)

// argument : data or requirement provided to function by calling it.

// ex : 
// main()
// {
//     abc(9, 4, 6);
// }

// 1. call by value
// - original value is not modified.


// function change(int a)    // a = 10
// {
//     a = 20;
//     cout << a;      // a = 20
// }

// main()
// {
//     int a = 10;

//     change(a);   //done

//     cout << a;   //10
// }

// - value being passed to function is locally stored by the function parameter in stack  memory location.

// - any changes made to the parameter inside the function do not affect the original argument.

// #include<iostream>
// using namespace std;

// void incrementBy2(int n)     // increment value by 2 of n // 10 
// {
//     n += 2;   // 12

//     cout << "Value within function : " << n << endl;    // Value within function : 12
// }

// int main()
// {
//     int n = 10;  // n = 10   initialized

//     cout << "Before calling function : " << n << endl;    // 10     before calling

//     incrementBy2(n);     // n = 10   function called with argument n = 10 

//     cout << "After calling function : " << n << endl;   // 10  after calling 

//     return 0;
// }

// Call by reference

// - original value is modified because we pass the reference(address).

// int a = 10;

// cout << a; // 10
// cout << &a; // 0x61ff0c    //address of variable a   (& used for address).

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;

//     cout << a << endl;
//     cout << &a << endl;

//     return 0;
// }

// - the memory address (or reference) of the actual parameter is passed to the function parameter.
// - Any changes made to the parameter inside the function directly affect the original argument.

// pseudocode --- 

// incrBy2(int &n)
// {
//     n += 2;
// }

// main()
// {
//     n = 10;

//     print before call by reference
//     incrBy2(n);
//     print after  call by reference
// }


// #include<iostream>
// using namespace std;

// void incrBy2(int &a)
// {
//     a += 2;
//     //print within function
//     cout << "within function : " << a << endl;
// }

// int main()
// {
//     int n = 10;

//     //print before call by reference
//     cout << "Before call by Reference : " << n << endl;
//     incrBy2(n);
//     //print after call by reference
//     cout << "After call by Reference : " << n << endl;

//     return 0;
// }

// Recursive Function or Recursion

// - its a technique where function calls itself to solve a problem.

// - it provides a optimal solution for problem that can be broken down into smaller sub-problems.

// **basic structure of recursion**

// 1. Base Case : - a condition that terminates the recursion.
//                - it defines the smallest sub-problem that can be solved direcly.

// 2. Recursive Case (condition) : A condition where the function calls itself with
// a smaller input to solve the problem.

// 5! = 120
// 5! = 5 x 4 x 3 x 2 x 1
//      5, 4, 3, 2, 1

// factorial(int n)   // 5   // 4   // 3  // 2  //  1
// {
//     //base case is 0 and 1
//     if (n == 0 || n == 1)    // false  //false   //false  //false  //true 
//     {
//         return 1;
//     }
//     else      // true   // true   // true  // true
//     {
//         return (n*factorial(n-1));
//         // 5 * 4 * 3 * 2 * factorial(1)
//     }
// }

// main()
// {
//     int n = 5;      // n = 5
    
//     int fact = factorial(n);     // factorial(5)

//     cout << fact;

//     return 0;
// }


// Factorial of n = 5 // 120

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else {
//         return (n*factorial(n-1));
//     }
// }

// int main()
// {
//     //int n = 5;
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
    
//     long long fact = factorial(n);

//     cout << "Factorial : " << fact << endl;

//     return 0;
// }

// Q. : Take a input from user and print fibonacci series till user input using recursion.

// input : 5

// 0 1 1 2 3 

#include<iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    //fib(n);
    for (int i =0; i<n; i++)
    {
        cout << fib(i) << "\t";
    }
    return 0;
}
