// 05.03.2024

// Run Time Polymorphism or method overriding or dynamic binding or late binding 

//  - It is achieved when the object's method is invoked at the run time instead of compile time.

//  - in c++, it is done with the help of virtual function or keyword 

#include<iostream>
using namespace std;

class Animal
{
    public:
          virtual void sound()
          {
            cout << "Animal's Sound..."<< endl;
          }
};

class Dog : public Animal
{
    public:
        void sound() override{
            cout << "Now Dog is Barking" << endl;
        }
};

class Cat : public Animal
{
    public: 
        void sound() override{
        cout << "Now Cat is Meow" << endl;
        }
};

int main()
{
    Animal *animal1 = new Dog();  //new is used for dynamic memory allocation of object at run time.
    Animal *animal2 = new Cat();

    animal1 ->sound();
    animal2 ->sound();

    delete animal1;
    delete animal2;

    return 0;
}