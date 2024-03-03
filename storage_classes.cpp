//01.03.2024

// Storage Classes
// - they are keywords that specify the scope, lifetime and visibility of variables and function.

// there are four main storage classes : 

// 1. Automatic (keyword : auto) : 
//    - default storage class for local variable.
//    - it automatically allocates memory when a function is called and releases it when  the functions end.

//    lifetime : Function block runs
//    visibility : local

//    code : auto int a = 10;

// 2. Register (Keyword : register) :  
//    - it defines local variable that should be stored in CPU registers for faster access.
//    - we can never access the address of register variable.

//    lifetime : function block runs
//    visibility : local

//    syntax : register int a = 10;

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     register int b = 20;

//     cout << &a << endl;
//     cout << &b << endl;

//     return 0;
// }

// 3. Static 
//    - it is used to declare variable with a lifetime throughout the program execution.
//    - they only initialized once and their value persist across the function call.

//    lifetime : whole program
//    visibility : local

//    syntax : static int a = 10;

// #include<iostream>
// using namespace std;

// void run()
// {
//     static int i = 0;   // 
//     int j = 0;

//     i++;
//     j++;

//     cout << "i : " << i << " j : " << j << endl;
// }

// int main()
// {
//     run();
//     run();
//     run();

//     return 0;
// }

4. Extern : 
   - used to declare variables and functions that are defined in other files.
   - it is often used to provide access to global variables and  function across multiple files.

   lifetime : whole program
   visibility : global

#include <iostream>
using namespace std;

extern int globalVariable;

extern void display();

//Camel Case : globalVariable, studentMarks
//Pascal Case : GlobalVariable, StudentMarks
//Snake Case : global_variable, student_marks

int main()
{
    cout << "Value of global variable : " << globalVariable;

    display();

    return 0;
}