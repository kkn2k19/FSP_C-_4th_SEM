// 05.03.2024

// Run Time Polymorphism or method overriding or dynamic binding or late binding

//  - It is achieved when the object's method is invoked at the run time instead of compile time.

//  - in c++, it is done with the help of virtual function or keyword

// #include<iostream>
// using namespace std;

// class Animal
// {
//     public:
//           virtual void sound()
//           {
//             cout << "Animal's Sound..."<< endl;
//           }
// };

// class Dog : public Animal
// {
//     public:
//         void sound() override
//         {
//             cout << "Now Dog is Barking" << endl;
//         }
// };

// class Cat : public Animal
// {
//     public:
//         void sound() override
//         {
//             cout << "Now Cat is Meow" << endl;
//         }
// };

// int main()
// {
//     Animal *animal1 = new Dog();  //new is used for dynamic memory allocation of object at run time.
//     Animal *animal2 = new Cat();

//     animal1 ->sound();
//     animal2 ->sound();

//     delete animal1;
//     delete animal2;

//     return 0;
// }

// BANKING SYSTEM

// #include<iostream>
// using namespace std;

// class Banking
// {
//     public:
//           virtual void BankingSystem()
//           {
//             cout << "Please Invest Money"<< endl;
//           }
// };

// class Customer1 : public Banking
// {
//     public:
//         void BankingSystem() override
//         {
//             cout << "Withdraw" << endl;
//         }
// };

// class Customer2 : public Banking
// {
//     public:
//         void BankingSystem() override
//         {
//             cout << "Deposit" << endl;
//         }
// };

// int main()
// {
//     Banking *c1 = new  Customer1();
//     Banking *c2 = new  Customer2();

//     c1->BankingSystem();
//     c2->BankingSystem();

//     delete c1;
//     delete c2;

//     return 0;
// }

// Abstraction
//  - it involves hiding internal details of class while exposing a simplified functionality to used who are interact with.

// Abstract Class :
//    - it is a class that cannot be instantiated or initialized on its own or own its in class.

//    - it declare virtual function that meant to be initailized in child class but have no implementation in base class.

//    syntax : virtual void/int/float(return type) functionName = 0;

// #include <iostream>
// using namespace std;

// class Shape
// {
// public:
//     virtual void draw() = 0; // pure virtual function

//     void display()
//     {
//         cout << "Area of shape" << endl;
//     }
// };

// class Rectangle : public Shape
// {
//     public:
//         void draw() override
//         {
//             cout << "Draw a rectangle !!!" << endl;
//         } 
// };

// int main()
// {
//     Shape *shape1 = new Rectangle();
//     shape1->draw();
//     shape1->display();

//     delete shape1;
//     return 0;
// }

// Getter and Setter

//  - Getter and Setter are methods used to access and modify the private or protected data members of a class.

//  - they provide controlled access to the class's private members or protected.

//  - it allows us to achieve encapsulation and data abstraction.

// Getter : 
//  - it is a method that allows us to retrieve the value of data member(private).
//  - they are typically declared as public.
//  - they do not modify value but get the value.

// Setter : 
//  - it is a method used to modify the value of data member.
//  - they are also declared as public.

#include<iostream>
using namespace std;

class Employee
{
    private: 
        int empId;
        string empName;
        long long phone;

    public: 
        //setter
        void  setEmpId(int empId)
        {
            this->empId = empId;
        } 
        //getter
        int getEmpId()
        {
            return this->empId;
        }

        //setter
        void  setEmpName(const string &empName)
        {
            this->empName = empName;  
        } 
        //getter
        string getEmpName()
        {
            return this->empName;
        }

        //setter
        void setPhone(long long phone)
        {
            this->phone = phone;
        } 
        //getter
        long long getPhone()
        {
            return this->phone;
        }
};

int main()
{
    Employee employee;

    employee.setEmpId(101);
    employee.setEmpName("KARAN");
    employee.setPhone(9304397220);

    cout << employee.getEmpId() << endl;
    cout << employee.getEmpName() << endl;
    cout << employee.getPhone() << endl;

    return 0;
}
