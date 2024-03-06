//05.03.2024            
//kkn2k19

// Hybrid Inheritance

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammal is breathing" << endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

class Parrot : public Bird {
public:
    void chirp() {
        cout << "Parrot is chirping" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void eat()
	{
		//Animal :: eat();   // here it can be solved by calling it from anyone derived class i.e. Mammal or Bird.
		//Mammal :: eat();
		Bird :: eat();   // eat() was ambiguous but solved it.
	}
    void glide() 
    {
        cout << "Bat is gliding" << endl;
    }
};

int main() {
    Dog dog;
    Parrot parrot;
    Bat bat;

    dog.eat();   
    dog.breathe();
    dog.bark();   

    parrot.eat();   
    parrot.fly();   
    parrot.chirp(); 

    bat.eat();     
    bat.breathe(); 
    bat.fly();      
    bat.glide();    

    return 0;
}

