//STL (standard tag linrary)

//  - In C++, STL provide powerful collection of classes and functions of general purpose data structures and algorithms.

// it include 4 types of method : 

//  - Container : 
// *        Vector : dynamic array that grow and shrink at runtime.
// *        List : A doubly linked list
// *        Map : An associated container that store data in key-value pair.
// *        Set : It contains distinct elements or unique element 
//                 {1,2,3,1,2,3}={1,2,3}
// *        Stack : LIFO
// *        Queue : FIFO

//  - Algorithms : 
//           sorting : sort in ascending and descending order
//           T : O(logn)   S : O(1)

//           Searching : Linear and == Binary
//                       - upper and lower bound

//           max(), min(), accumulate(), find() etc

//  - Iterators : 
//           - Forward iterator : forward traversal
//           - Bidirection : backward and forward traversal
//           - Random access : direct access on element

//  - Functors : Functors are object like function.
//               for creating custom algorithms.

// Pair
//  - can store two heterogeneous object in a single unit.
//  - store only exactly two element

// #include<iostream>
// #include<bits/stdc++.h>     // for stl library
// using namespace std;

// int main()
// {
//     pair<int, string> student1(101, "Karan");
//     pair<int, float> student2(1, 3.14);
//     pair<string, float> student3("Pie Value",3.14);

//     cout << student1.first << " " << student1.second << endl;
//     cout << student2.first << " " << student2.second << endl;
//     cout << student3.first << " " << student3.second << endl;

//     return 0;
// }

// Vector : 
//     - a sequenced container that dynamically manages elements of an array.
//     - used for efficient traversal.

#include<iostream>
#include<bits/stdc++.h>     // for stl library
using namespace std;

int main()
{
    //vector<int> vec;

    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);
    // vec.push_back(40);
    // vec.push_back(50);
    // vec.push_back(60);

    // vec.pop_back();    // for deleting

    // //display
    // for(int x : vec)
    // {
    //     cout << x << " "; 
    // }

    // cout << endl;

    // cout << "Size of Vector : " << vec.size() << endl;    // for size

    // vec.clear();   // for erasing all elements of vector 

    // cout << "Size of Vector : " << vec.size() << endl;

//Vector of pair

    vector< pair<int, string> > vec;

    vec.push_back(make_pair(101, "Karan"));
    vec.push_back(make_pair(98, "Om"));
    vec.push_back(make_pair(100, "Rahul"));
    vec.push_back(make_pair(80, "Shadaf"));

    for(const auto &pair : vec)
    {
        cout << "Roll no : " << pair.first << " Name : " << pair.second << endl;
    }

    return 0;
}



