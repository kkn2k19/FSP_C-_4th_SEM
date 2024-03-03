// 02.03.2024

// Inheritance :
// in c++, it supports five types inheritance

// - Single level inheritance
// - Multiple level inheritance
// - Multilevel inheritance
// - Hierarchical inheritance
// - Hybrid inheritance

// - single level inheritance : only one parent and one child.

#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    string color;
    int leg;
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Woof Woof !!!" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "meow meow !!!" << endl;
    }
};

class Puppy : public Dog
{
public:
    void size()
    {
        cout << "Puppy is smaller in size" << endl;
    }
};

int main()
{
    Dog dog ; 
    dog.name = "Rocky";
    dog.color = "Brown";
    dog.leg = 4;

    cout << "Name : " << dog.name << "Color : " << dog.color << "Leg : " << dog.leg << endl;
    dog.bark();

    Cat cat ; 
    cat.name = "Kitty";
    cat.color = "White";
    cat.leg = 4;

    cout << "Name : " << cat.name << "Color : " << cat.color << "Leg : " << cat.leg << endl;
    cat.meow();

    Puppy puppy ; 
    puppy.name = "Sheero";
    puppy.color = "Black";
    puppy.leg = 4;

    cout << "Name : " << puppy.name << "Color : " << puppy.color << "Leg : " << puppy.leg << endl;
    puppy.size();

    return 0;
}