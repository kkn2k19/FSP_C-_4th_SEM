//01.03.2024

// Type Casting
//  - A process of converting one data type to another.
//    ex : int to float, double to float, char to int or vice versa

//  - it can be done in two ways : 
//    1. automatically by compiler
//    2. by programmer 

//  divided into two types : 
//   1. implicit type conversion
//   2. explicit type conversion

//   1. implicit type conversion
//      - automatic type casting : automatic converts one data type to another by compiler.

//      - can only apply if both variables are compatible to each other.

//      - Promotion : smaller data types are automatically promoted to larger data types.
//        float to double

//      - Demotion : larger data types are automatically demoted to smaller data types.
//        double to float
// implicit
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;    // smaller
//     double m = 22.7;   // larger

//     double sum = n + m;  // int + double   // smaller to larger

//     cout << sum << endl;

//     int res = n + m; // int + double   // larger to smaller

//     cout << res << endl;

//     return 0;
// }

// explicit type conversion
//  - manual type conversion
//  - user can cast one data type to another according totheir requirement.
//  - cast operator is used ()

#include <iostream>
using namespace std;

int main()
{
    float n = 7.890;
    cout << "Before type conversion : " << n << endl;
    n = (int)n;
    cout << "After type conversion : " << n << endl;

    return 0;
}