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



//BANKING SYSTEM

#include<iostream>
using namespace std;

class Banking
{
    public:
          virtual void BankingSystem()
          {
            cout << "Please Invest Money"<< endl;
          }
};

class Customer1 : public Banking
{
    public:
        void BankingSystem() override
        {
            cout << "Withdraw" << endl;
        }
};

class Customer2 : public Banking
{
    public: 
        void BankingSystem() override
        {
            cout << "Deposit" << endl;
        }
};

int main()
{
    Banking *c1 = new  Customer1();
    Banking *c2 = new  Customer2();

    c1->BankingSystem();
    c2->BankingSystem();

    delete c1;
    delete c2;

    return 0;
}
