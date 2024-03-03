// 02.03.2024

// OOPs : Object oriented programming system

// Basic concepts

// Class and Object

// Class : Blueprint of objects (Entities)

// example :
// Zoo Management System : Animals, Staff, Visitors etc.
//                         they are real world entities

// Library Management System : Books, Staff, Student etc.

// Object : Instance of class : it defines how we can access     class methods (function), variable, constructor etc.

//          there are multiple objects of a class

//          each object has its own characteristics

//          Attributes (properties)
//          Animal : lion, elephant, zebra
//                 : food, sound, color, habitant

//         DBMS : Tables : Animal(Entities)
//                         Columns(Attributes)

//         Methods : eating(), sleeping(), etc.

// // Banking Management System ---
// // Entities ---   Customers, Accounts, Transactions, Staffs, Security Guards

// Four Major Pillars of OOPs :

// 1. Inheritance : when a class or object requires all properties and behaviour of parent class then its mechanicm known as inheritance.

//             1. Subclass : a derived class that carry properties from another class or parent class.

//             2. Super class/Parent Class : - Parent class or base class
//             - where subclass inherits its properties.

//     Benefits or applications :
//     - Reusability
//     - it is used to archieve polymorphism.

// 2. Polymorphism : When one task is performed by different ways known as polymorphism.

// 3. Abstraction : Hiding internal details and showing only required functionality is known as abstraction.

//         ex : phone call, Transaction etc.

//         Data abstraction is the process of exposing to the outside world only the information that is absolutely necessary while implementation.

// 4. Encapsulation : Binding or wrapping or grouping code and data together into a single unit is known as  encapsulation.

// access modifier : public(global)   // public, private, protected

// // Class and Object

// #include<iostream>
// using namespace std;

// class Student
// {
//     public :
//          int rollNo_g;
//          string name_g;
//          string dept_g;
//          bool result_g;
//          long long phone_g;

//          void insert(int rollNo, string name, string dept, bool result, long long phone)
//          {
//             // left side : Global Variable  // right : Local Variable
//             rollNo_g = rollNo;
//             name_g = name;
//             dept_g = dept;
//             result_g = result;
//             phone_g = phone;
//          }

//          void display()
//          {
//             cout << rollNo_g << " " << name_g << " " << dept_g << " " << result_g << " " <<  phone_g << endl;
//          }
// };

// int main()
// {
//     Student chandanOP;   // object of class student

//     chandanOP.insert(101, "KKN", "JOBLESS", false, 7370931236);
//     chandanOP.display();
//     cout << endl;

//     Student Karan;

//     Karan.insert(21, "KARAN", "IT", true, 9304397220);
//     Karan.display();
//     cout << endl;

//     return 0;
// }

// Constructor
//  - nothing but a special type of method which is invoked or run automatically at the time of object creation.

//  - they has same name as class.

//  - it is used to create the data members of new things.

//  - they don't have any return type

//  - two types of  constructors are there:
//     1. parameterized constructor
//     2. default constructor

// Default Constructor

// #include<iostream>
// using namespace std;

// class Employee
// {
//     public:
//         Employee()
//         {
//             cout << "Hello Employee !! from constructor" << endl;
//         }
//         void helloEmployee()
//         {
//             cout << "Hello Employee !! from method";
//         }
// };

// int main()
// {
//     Employee e1;
//     e1.helloEmployee();
//     return 0;
// }

// Parameterized Constructor
// - A constructor which has parameters is called as parameterized constructor.

// #include<iostream>
// using namespace std;

// class Employee          // class creation
// {
//     public:             //access modifier
//           int id;       // global variable of class
//           string name;          // global variable of class
//           string role;          // global variable of class

//           Employee(int i, string n, string r)   //
//           {
//             id = i;
//             name = n;
//             role = r;
//           }
//           void display()
//           {
//             cout << id << " " << name << " " << role << endl;
//           }
// };

// int main()
// {
//     Employee emp = Employee(33200, "Karan", "SDE");
//     emp.display();
//     return 0;
// }

// Destructor :
//     - It works just opposite to constructor.
//     - it destruct the objects of classes.
//     - syntax (~)
//     - it is typically used to release the resource (memory) aquired by the object during its  lifetime.

// #include<iostream>
// using namespace std;

// class  Employee         // class creation
// {
//     public:
//            Employee()   // Constructor
//            {
//             cout << "Constructor invoked !! Memory Allocated" << endl;
//            }

//            ~Employee()    // Destructor
//            {
//             cout << "Constructor revoked !! Memory Released" << endl;
//            }
// };

// int main()
// {
//     Employee emp;    // Object Creation
//     return 0;
// }

// This Keyword

// - it refers to the current instance of the class
// - it allows you to differentiate b/w local variable and global variable / member variable if they have same name and also enables you to pass the current object as a parameter to other function.

// #include<iostream>
// using namespace std;

// class Employee
// {
//     public:
//           int id;
//           string name;
//           string role;

//     Employee(int id, string name, string role)
//     {
//         this->id = id;
//         this->name = name;
//         this->role = role;
//     }

//     void display()
//     {
//         cout << id << " " << name << " " << role << endl;
//     }
// };

// int main()
// {
//     Employee emp = Employee(1448, "Karan", "SDE");
//     emp.display();
// }

// Static Keyword

// - a modifier that belongs to the type not instance.
//                 or
//  we dont need to create an object to access class member by using static

// #include <iostream>
// using namespace std;

// class Employee
// {
// public:
//     int id;
//     static string name;

//     Employee(int id)
//     {
//         this->id = id;
//     }

//     void display()
//     {
//         cout << id << " " << name << endl;
//     }
// };

// string Employee :: name = "Karan";

// int main()
// {
//     Employee emp = Employee(1448);
//     emp.display();

//     return 0;
// }

// struct                          VS                class
// access modifier : public                 public, private, protected
// doesn't supports inheritance            supports inheritance