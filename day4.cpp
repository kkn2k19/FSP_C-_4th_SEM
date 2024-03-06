// // 04.03.2024

// Access Specifier or Access Modifier

// - it defines how the members(class variable or function) of class can be accessed.

// - They allow us to determine which class members are accessible to other classes and which are not.

// - 3 types : public, private and protected.

// public : public members are accessible from any part of the program
//         i.e. from inside or outside the class through object instances.

// private : private members can be only accessible from within the class.

//         they cannot be accessed directly from outside of class or through object instances.

//         they are hidden from outside of class and can be accessed through public members 




// #include<iostream>
// using namespace std;

// class Rectangle
// {
//     private:
//         float width;
//         float height;

//     public: 
//         Rectangle(float width, float height)
//         {
//             this->width = width;
//             this->height = height;
//         }
//         float calculateArea()
//         {
//             return height*width;
//         }
// };

// int main()
// {
//     Rectangle rect = Rectangle(7.3, 3.7);

//     cout << "Area : " << rect.calculateArea() << endl;

//     // rect.width = 7.3;
//     // rect.height = 3.7;
//     // we cant assign directly to private variables 

//     return 0;
// }

// Without using public members we can't access private members of a class.abort

// By default, all members of a class in c++ are private if you don't specify any specifier.abort

// Protected : 
//     - protected members can be accessed within class and from  derived class or subclass or child class.

//     - used primarily in inheritance

//     - can be accessed through inside a class and from derived class.


// #include<iostream>
// using namespace std;

// class Parent
// {
//     protected: 
//           float land;    // 500.5    // 700.5
//           int money;     // 5000     // 7000

//     public: 
//           Parent(float land, int money)    // 500.5, 5000    // // 700.5, 7000
//           {
//             this->land = land;   // 500.5    // 700.5
//             this->money = money;   // 5000    // 7000
//           }

//           void display()
//           {
//             cout << "From inside of a class" << endl;
//             cout << "Land : "<< land << endl;    // Land : 500.5   // Land : 700.5   
//             cout << "Money : "<< money << endl;   // Money : 5000   // Money : 7000
//           }
// };

// class OnlyChild : public Parent
// {
//     public:
//         int childMoney;    // assigning value of parent variable to child
//         float childLand;

//     OnlyChild(float childLand, int childMoney) : Parent(childLand, childMoney) {};   
//     // 700.5, 7000
// };

// int main()
// {
//     Parent parent = Parent(500.5,5000);   // Land : 500.5, Money : 5000
// 	parent.display();
	
// 	OnlyChild child(700.5, 7000);    // Land : 700.5, Money : 7000
// 	child.display();
	
// 	return 0;
// }

//                         Public   ||   Private   ||   Protected
// same class        ||     Yes     ||    Yes      ||    Yes      
// Derived class     ||     Yes     ||    No       ||    Yes      
// Outside class     ||     Yes     ||    No       ||    No     

// Multilevel Inheritance
//     one base class is inherits a derived class and that derived class
//     inherits another derived class.

// #include<iostream>
// using namespace std;

// class GrandParent
// {
//     public:
//         void displayG()
//         {
//             cout << "From Grand Parent" << endl;
//         }
// };

// class Parent : public GrandParent
// {
//     public:
//         void displayP()
//         {
//             cout << "From Parent" << endl;
//         }
// };

// class Child : public Parent
// {
//     public:
//         void displayC()
//         {
//             cout << "From Child" << endl;
//         }
// };

// int main()
// {
//     Child child;
//     child.displayG();
//     child.displayP();
//     child.displayC();
//     return 0;
// }

// Multiple Inheritance
//  - When a child class inherits its property from more than one parent its known as multiple inheritance.

//  #include<iostream>
//  using namespace std;

//  class Birds
//  {
//     public:
//          Birds()
//          {
//             cout << "Birds are two types : " <<  endl;
//          }
//  };

//  class Oviparous 
//  {
//     public:
//         Oviparous()
//         {
//             cout << "Oviparous birds lay eggs" << endl;
//         }
//  };

//  class Sparrow : public Birds,  public Oviparous //multiple inheritance
//  {
//     public:
//         void display()
//         {
//             cout << "Sparrow is a bird and also lay eggs" << endl;
//         }
//  };

//  int  main()
//  {
//     Sparrow sparrow;
//     sparrow.display();
//  }

// Ambiguity in multiple inheritance

//  - suppose two base class have same function. when you call that function using object derived from child class, the compiler show error
//  - because compiler doesn't knows which function to call.

//  #include<iostream>
//  using namespace std;

//  class Birds
//  {
//     public:
//          void run()
//          {
//             cout << "Birds are running" <<  endl;
//          }
//  };

//  class Oviparous 
//  {
//     public:
//         void run()
//         {
//             cout << "Oviparous birds are running" << endl;
//         }
//  };

//  class Sparrow : public Birds,  public Oviparous //multiple inheritance
//  {
//     public:
//         void run()
//         {
//             Birds :: run();
//             Oviparous :: run();
//         }
//  };

//  int  main()
//  {
//     Sparrow sparrow;
//     sparrow.run();   // confusion or ambiguity   // now resolved
   
//    return 0;
//  }

// Hybrid Inheritance   // HomeWork

//  : its consist of many type of inheritance 
//    i.e. Hybrid Inheritance
//         1. single inheritance
//         2. multilevel inheritance
//         3. multiple inheritance

// Implement in HomeWork.

// Friend Function

//  - A function that is defined or initialized outside a class but has the ability to access the class members which are private and protected.

//  - for accessing member or data of class, declaration of friend function is needed inside a class.

//  - without use of any object, the friend function can be invoked like a normal function.

//  - it can be declared either in private or public or protected. 


// #include<iostream>
// using namespace std;

// class Travel
// {
//    private: 
//        int speed;
//        int distance;
   
//    public:

//        Travel(int speed, int distance)
//        {
//          this->speed = speed;
//          this->distance = distance;
//        }

//        friend double findTimeOfTraveling(Travel); //declare
// };

// double findTimeOfTraveling(Travel travel)
// {
//    double time = (double)travel.distance/ (double)travel.speed;
//    return time;
// }

// int main()
// {
//    // Travel travel = Travel(5, 10);
//    Travel travel(5, 10);

//    cout << "Time of Traveling : " << findTimeOfTraveling(travel) << " Hrs " << endl;

//    return 0;
// }

// Polymorphism
//  - when the behaviour of the same object or function is different in different context.

//  - an object can take many form according to condition or case.

// In C++, there are two types of polymorphism :

//    1. Compile time polymorphism
//       - Function overloading or method overloading
//       - Operator overloading

//    2. Run Time Polymorphism

// Compile Time Overloading
//    - it is achieved through Function and operator overloading.

//    - also known as static polymorphism or early binding or static binding.

//    - a mechanism where compiler select appropriate method to call at compile time based on their argument.


// Method Overloading 
//    - refers to the ability to define multiple functions within same class that have the same name but different in parameter list.

// int add(int a, int b);
// int add(int a, int b, int c);
// int add(int a, int b, int c, int d);

// #include<iostream>
// using namespace std;

// class MethodOverloading
// {
//    public: 
//        int add(int a, int b)
//        {
//          return a+b;
//        }
//        int add(int a, int b, int c)
//        {
//          return a+b+c;
//        }
//        int add(int a, int b, int c, int d)
//        {
//          return a+b+c+d;
//        }
// };

// int main()
// {
//    MethodOverloading meth;
//    cout << "add with two Parameter : " << meth.add(7, 3) << endl;   //ByDefault it will point towards add method with maximum parameters.
//    cout << "add with three Parameter : " << meth.add(1, 0, 1) << endl;  
//    cout << "add with four Parameter : " << meth.add(1, 4, 4, 8) << endl;  
// }

// "SKIPPED OPERATOR OVERLOADING"

// Run time polymorphism or method overriding

//     - achieved when the object's method is invoked at the run time instead of compile time.

//     - also known as dynamic binding or late binding.

//     - In C++, it is achieved by virtual keyword.


// virtual Function
//     - a member function in the base class that you redefine in derived class.
//     - it is declared using virtual keyword. 
//     - it is used to achieve dynamic binding or late binding or method overriding.
//     - it must be member of some class also cannot be static.
//     - accessed through object.
//     - they can be friend of other class.
//     - essential to achieve polymorphism in c++ 
  