https://canvas.instructure.com/courses/8848501
// STL (standard tag linrary)

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

// #include<iostream>
// #include<bits/stdc++.h>     // for stl library
// using namespace std;

// int main()
// {
//     //vector<int> vec;

//     // vec.push_back(10);
//     // vec.push_back(20);
//     // vec.push_back(30);
//     // vec.push_back(40);
//     // vec.push_back(50);
//     // vec.push_back(60);

//     // vec.pop_back();    // for deleting

//     // //display
//     // for(int x : vec)
//     // {
//     //     cout << x << " ";
//     // }

//     // cout << endl;

//     // cout << "Size of Vector : " << vec.size() << endl;    // for size

//     // vec.clear();   // for erasing all elements of vector

//     // cout << "Size of Vector : " << vec.size() << endl;

//     return 0;
// }

// Vector of pair

// #include<iostream>
// #include<bits/stdc++.h>     // for stl library
// using namespace std;

// int main()
// {
//     vector< pair<int, string> > vec;

//     vec.push_back(make_pair(80, "Shadaf"));
//     vec.push_back(make_pair(98, "Om"));
//     vec.push_back(make_pair(100, "Rahul"));
//     vec.push_back(make_pair(101, "Karan"));

//     for(const auto &pair : vec)
//     {
//         cout << "Roll no : " << pair.first << "\tName : " << pair.second << endl;
//     }

//     return 0;
// }

// Vector of Vector

// #include <iostream>
// #include <bits/stdc++.h> // for stl library
// using namespace std;

// int main()
// {
//     vector<vector<int>> vec;

//     vec.push_back({1, 2, 3});
//     vec.push_back({4, 5, 6});
//     vec.push_back({7, 8, 9});

//     for(const auto &row : vec)
//     {
//         for(int x : row)
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Iterators

//  - used to iterate different types of container in STL.

//  - they are objects that point to memory address within STL.

//  - forward iteration, backward, random(direct access), bidirectional.

//  - begin() : pointing to first element.
//  - end() : pointing to last element.
//  - advance() : iterate by specified number.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vec = {10, 20, 30, 40, 50, 60};

//     for(auto it = vec.begin(); it != vec.end(); it++)
//     {
//         cout << *it << " ";
//     }

//     cout << endl;

//     for(auto it = vec.end(); it != vec.begin(); it--)
//     {
//         cout << *it << " ";
//     }
// }


// Map
//  - it store data or elements into key-value pair 
//  - each value is stored in the form of key with their corresponding value

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;

    mp["Iphone"] = 1;
    mp["Blackberry"] = 2;
    mp["Motorola"] = 3;

    map<string, int> :: iterator it = mp.begin();

    while (it != mp.end())
    {
        cout << "Key : " << it->first << " value : " << it->second << endl;
        it++;
    }

    return 0;
}
