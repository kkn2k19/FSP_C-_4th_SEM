#include<iostream>
using namespace std;

int main()
{
	cout << "Hello World !!"; //console output
	cout << "Hello World !!";
	
	int n;
	
	cin >> n ; //console input
	
	cout << n;
	
	return 0;
}

//Tokens
//Small unit of a program that have special purpose
//1. Keyword : they are predefined keyword that have special purpose
//2. Indentifier : it refers to name of function, variable, constant, class and object etc
//3. Constants : they are also a type of variable that cannot be change
//4. Strings : everycharacter in double quotes "" or in single quotes ' ' and they are sequential collection of characters
//5. Operators : arthimetic, assignment, comparator or relational, bitwise etc
//6. Variables : variables are the container that store some values and they can be dynamic in nature

//Data types : types of data 

//System defined or predefined
//1. Integer : -1,-2,0,1,2....
//2. Float : 1.2, 0.5, -1.2..
//3. char : abc, a, hdfc
//4. boolean : true or false, 1 or 0

//User Defined
//1. Structure (struct)
//2. Class
//3. Union
//4. Enumeration




#include<iostream>
using namespace std;

int main()
{
	//Operators
	//Arithimetic operator
	//+,-,/,%,* // use for calulations
	
	//assignment operator
	// = // for assigning values to variables
	
	// a = a + b;
	// a += b;
	
	// a = a*b;
	// a *= b;
	
	
//	int a = 10;
//	
//	int b = 20;
//	
//	int c = a+b;
//	cout << c << endl;
//	
//	c = a-b;
//	cout << c << endl;
//	
//	c = a*b;
//	cout << c << endl;
//	
//	c = a/b;
//	cout << c << endl;
//	
//	c = a%b;
//	cout << c << endl;

//   declare vs define vs intialize
//   
//   declare  : int a; // compiler knows its existence but there is  not memory allocation
//   
//   define : declared variable get a value after some operation.
//
//   a = fibonaci(n);
//   
//   initialize : define a declared variable at the time of declaration.
//   
//   int a = 10;

//   Relational Operators or comparator o/p boolean
//   1. < or >
//   2. <= or >=
//   3. ==  // 5 == 5.0 true
//   4. !=

//   Logical operators o/p boolean
//   1. and or && 
     //0 && 0 == 0
     // 0 && 1 == 0
     // 1 && 1 == 1
    
// 2. or syntax : ||
   // 0 or 1 : 1
   // 1 or 1 : 1
   // 0 or 0 : 0

// 3. not syntax  : !
// true => false
// false => true

// 4. unary operator
// 1. ++ // int a = 1; a++; // 1 cout << a ; ++a; // 2
// 2. -- // int a = 2; a--; 1// cout << a; --a; // 1

}



#include<iostream>
using namespace std;

int main()
{
/*	int a;
	
	cout << "Enter value of integer : ";
	
	cin >> a;
	
	cout << a << endl;
	
	float b; // 4bytes
	
	cout << "Enter value of float : ";
	
	cin >> b;
	
	cout << b << endl;
	
	bool c; // true or false
	
	double d; // 8 bytes
	
	char ch;
	
	*/
	
	//takes input from user and print on console
	// name, age, marks, phone
	
	string name;
	
	getline(cin,name);
	
//	getline(cin,name);
	
	
	return 0;
}



#include<iostream>
using namespace std;

int main()
{
	//1. if
	
//	int n;
//	
//	cout << "Enter value of n : ";
//	cin >> n;
//	
//	if(n > 50)
//	{
//		cout << "Hello World";
//	}
	
	//2. if-else
	
//	int n;
//	
//	cout << "Enter value of n : ";
//	cin >> n;
//	
//	if(n > 50)
//	{
//		cout << "Hello World";
//	}
//	else
//	{
//		cout << "Bye Bye World";
//	}
	
	//3. ladder if-else
	
//	int n;
//	
//	cout << "Enter total marks : ";
//	cin >> n;
//	
//	if(n >= 90 && n <= 100)
//	{
//		cout << "Grade A";
//	}
//	else if(n >= 80 && n <= 90)
//	{
//		cout << "Grade B";
//	}
//	else if(n >= 70 && n <= 80)
//	{
//		cout << "Grade C";
//	}
//	else if(n >= 60 && n <= 70)
//	{
//		cout << "Grade D";
//	}
//	else if(n >= 50 && n <= 60)
//	{
//		cout << "Grade E";
//	}
//	else
//	{
//		cout << "Fail";
//	}

//ternary operator

//int a = 20;
//int b = 30;
//
//(a > b)? cout << a : cout << b;

//Loops

//for loop
	
//	for(int i = 1; i<=10; i++)
//	{
//		cout << i << endl;
//	}

//while 
//  int i = 1;
//  
//  while(i <= 10)
//  {
//  	cout << i << endl;
//  	i++;
//  }


//do-while

//   int i = 1;
//   
//   do{
//   	cout << i << endl;
//   	i++;
//   }while(i <= 10);

//break : break the flow of loop or exits the loop

//for(int i = 1; i <= 10; i++)
//{
//	if(i/5 == 1)
//	{
//		break;
//	}	
//	cout<<i<<endl;		
//}

//continue : skip the further code 

//for(int i = 1; i <= 10; i++)
//{	
//	if(i == 5)
//	{
//		continue;
//	}	
//	
//	cout<<i<<endl;			
//}
	return 0;
}


#include<iostream>
using namespace std;

//function : function are a block of code that perform a certain task
// function : user defined and pre defined
// user defined : add(), average(), or twoSum()
// predefined : printf(), scanf() etc...

//parameterized function : these function need to fulfill their requirment to run.
//non parameterized function : they don't have any requirement.

int add(int a, int b) // parameter
{	
	return a + b;
}

int main()
{
	
	int a = 10;
	int b = 20;
	
	cout << add(a,b); //arguement
	
	return 0;
}

menu driven calculator using function, do-while loop, if else or switch case



// DAY 2


#include<iostream>
using namespace std;

int globalVariable = 42;

void display()
{
	cout << "Hello World Extern !!" << endl;
}


//Type Casting
// - A process of converting one data type to another.
//   ex : int to float, double to float, char to int or vise versa
// 
// - it can be done in two ways : 
//   1. automatically by compiler
//   2. by programmer
//   
//  divided into two types : 
//  1. implicit type conversion
//  2. explicit type conversion
//  
//  1. implicit type conversion 
//    - automatic type casting : automatic converts one data type to another by 
//      compiler
//      
//    - can only apply if both variables are compatible to each other.
//      
//    - Promotion : smaller data types are automatically promoted to larger data types
//      float to double
//      
//	- Demotion : larger data types are automatically demoted to smaller
//	  double to float

//implicit
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 10; //smaller
//	double m = 22.7; //larger 
//	
//	double sum = n + m; // int + double // smaller to larger
//	
//	cout << sum << endl;
//	
//	int res = n + m; // int + double // larger to smaller
//	
//	cout << res << endl;
//	
//	return 0;
//}

//explicit type conversion
// - manual type conversion
// - user can cast one data type to another according to their requirement
// - cast operator is used  ()
 
#include<iostream>
using namespace std;

int main()
{
	float n = 7.890;
	cout << "Before type Conversion : "<< n <<endl;
	n = (int)n; // type casting
	cout << "After type Conversion : "<< n << endl;
	
	return 0;
}
 
      
    
    
    
    
    
    
    //Storage Classes
//- they are keywords that specify the scope, lifetime and
//  visiblity of variables and function.
//  
//  there four main storage classes : 
//  
//  1 : Automatic (keyword : auto) :
//  	  - default storage class for local variable.
//  	  - it automatically allocates memory when a function
//  	    is called and releases it when the functions end.
//  	  
//  	  lifetime : Function block runs
//  	  visiblity : local
//  	  
//  	  code : auto int a = 10;
//  	  
//  2 : Register (Keyword : register) :
//  	  - it defines local variable that should be stored
//  	    in CPU registers for faster access.
//  	    
//  	  - we can never access the address of register variable
//  	    
//  	  lifetime : function block runs
//  	  visiblity : local
//  	  syntax : register int a = 10;
  	  
//#include<iostream>
//using namespace std;

//int main()
//{
//	int a = 10;
//	register int b = 20;
//	
//	cout << &a << endl;
//	cout << &b << endl;
//	
//	return 0;
//}

//  3. Static 
//     - it is used to declare variable with a lifetime throughout the program 
//       execution.
//    
//     - they only initialized once and their value persist across the function call.
//     
//     lifetime : whole program
//     visiblity : local
//     
//     syntax : static int a = 10;


//void run()
//{
//	static int i = 0;// 1 // 2
//	int j = 0;
//	
//	i++; // 1 // 2 // 3
//	j++; // 1 // 1 // 1
//	
//	cout << "i : " << i << "  j : "<<j<< endl; // 
//	//i : 1 j: 1
//	//i : 2 j: 1
//	//i : 3 j: 1
//}
//
//int main()
//{
//	run();// done
//	run();// done
//	run();// done
//	
//	return 0;
//}

// Extern : 
//   - used to declare variables and functions that are defined in other files.
//   
//   - it is often used to provide access to global variables and function across
//     multiple files.
//     
//   lifetime : whole program
//   visiblity : global
 
 
   
#include<iostream>
using namespace std;

extern int globalVariable;

extern void display();

//Camel Case : globalVariable, studentMarks
//Pascal case : GlobalVariable, StudentMarks
//Snake case : global_variable, student_marks

int main()
{
	cout << "Value of global variable : "<< globalVariable;
	
	display();
	
	return 0;
}


   
   










//Call by value and call by reference 
//
//- it determine how the arguments(data) are passed to function.
//
//parameter : requirement of function : type of data needed by function to run
//
//ex : function abc(int a, int b,int c)
//
//argument : data or requiment provided to function by calling it.
//
//ex : 
//main()
//{
//	abc(9,4,6);
//}
//
//1. call by value
// 
// - original value is not modified.
// 
//
//function change(int a) // a = 10
//{
//	a = 20; // a = 20
//	cout<<a; // 20
//	
//	return a;
//}
// 
//main()
//{
//	int a = 10;
//	
//    change(a); // done
//	
//	cout<<a; // 10
//}
//
// - value beign passed to function is locally stored by the function parameter in stack
//   memory location.
//   
// - any changes made to the parameter inside the function do not affect the 
//   original argument.

//
//#include<iostream>
//using namespace std;
//
//void incrementBy2(int n) // increment value by 2 of n // 10
//{
//	n += 2; // 12
//}
//
//int main()
//{
//	int n = 10; // n = 10
//	
//	cout << "Before calling function : "<<n<<endl; // 10
//	
//	incrementBy2(n); // n = 10
//	
//	cout << "After calling function : "<<n<<endl; // 10
//	
//	return 0;
//}

//Call by reference
//
//- original value is modified because we pass the reference(address).
//
//int a = 10;
//
//cout << a;//10
//cout << &a; // & used for address
//
//int main()
//{
//	int a = 10;
//	
//	cout << a << endl;
//	cout << &a << endl; // address
//	
//	return 0;
//}
//
// - the memory address(reference) of the actual parameter is passed to the function
//   parameter. 
//   Any changes made to the parameter inside the function directly affect the original
//   argument.
//   
//   incrBy2(int &n)//int &n
//   {
//   	n += 2;
//   }
//   
//   main()
//   {
//   	 n = 10;
//   	 
//   	 print before call by reference
//   	 incrBy2(&n);// 0x78231e
//   	 print after call by reference
//   }

//Recursive Function or Recursion
//
//- its a technique where function calls itself to solve a problem.
//
//- it provides a optimal solution for problem that can be broken down into smaller 
//  subproblems.
//  
//  **basic structure of recursion**
//  
//  1. Base case : - a condition that terminates the recursion.
//                 - it defines the smallest subproblem that can be solved directly.
//
//  2. Recursive Case (condition) : A condition where the function calls itself
//                                  with a smaller input to solve the problem.
//                                  
//                                  
//   5! = 120
//   5! = 5 x 4 x 3 x 2 x 1
//   
//
//        5 , 4 ,3 ,2 ,1
//        
//    factorial(int n) // 5 // 4 // 3 // 2 // 1
//    {
//    	//base case is 0 and 1
//    	if(n == 0 || n==1)//false // false // false // false // true
//    	{
//    		return 1;
//		}
//		else // true // true // true // true
//		{
//			return n * factorial(n-1);
//			//5 * 4 * 3 * 2 * factorial(1)
//		}
//			
//	}
//    
//    main()
//    {
//    	int n = 5;// n = 5
//    	
//    	int fact = factorial(n);// factorial(5)
//    	
//    	cout << fact;
//    	
//    	return 0;
//	}

Q : take a input from user and print fibonaci series till user input using recursion

input : 5

0 1 1 2 3

// Assignment Homework

// 03.03.2024

// Q1. Implementation of single inheritance and multilevel inheritance using c++

// SINGLE INHERITANCE

// #include <iostream>
// using namespace std;

// class Bird
// {
//     public:
//         string name;
//         string color;
//         void fly()
//         {
//             cout << "Bird is flying." << endl; 
//         }
// };

// class Sparrow : public Bird
// {
//     public :
//         void chirp()
//         {
//             cout << "The Sparrow is chirping." << endl;
//         }
// };

// int main()
// {
//     Sparrow sp;
//     sp.name = "Piko";
//     sp.color = "Brown";

//     cout << sp.name << " is a Sparrow of " << sp.color << " color." << endl;
    
//     sp.fly();
//     sp.chirp();
    
//     return 0;
// }



//MULTIPLE INHERITANCE

// #include <iostream>
// using namespace std;

// class GrandFather
// {
//     public:
//           void voice()
//           {
//             cout << "Speaks HINDI." << endl;
//           }
//           void love()
//           {
//             cout << "Cricket LOVER" << endl;
//           }
// };

// class Father : public GrandFather
// {
//     public:
//           void eat()
//           {
//             cout << "eats dal chawal" << endl;
//           }          
//           void loves()
//           {
//             cout << "Loves Travelling" << endl;
//           }
// };

// class Me : public Father
// {
//     public:
//           string name;
//           void sleep()
//           {
//             cout << "I Sleep a lot in the day." << endl;
//           }
//           void play()
//           {
//             cout << "Loves Playing Video Games" << endl;
//           }
// };

// int main()
// {
//     Me kk;
//     kk.name = "Karan";
//     cout << "Hey!, I am " << kk.name <<  endl;
//     kk.sleep();
//     kk.play();
//     kk.eat();
//     kk.love();
//     kk.loves();
//     kk.voice();

//     return 0;
// }


//Q2. Create a class named as movie also their attributes and behaviour
// Attributes: name, genre, duration,rating,cast, director, success(hit/flop)
// Behaviour:
// addMovie
// displayMovie
// Print details of movie incl members and behaviour also Use static, parameterized constructor, this keyword, destructor etc.

#include <iostream>
using namespace std;
#define SIZE 3 // Corrected the size of the cast array

class Movie {
public:
    string name;
    string genre;
    int duration;
    float rating;
    string cast[SIZE];
    string director;
    string success;

    Movie(string name, string genre, int duration, float rating, const string cast[], string director, string success) 
    {
        this->name = name;
        this->genre = genre;
        this->duration = duration;
        this->rating = rating;
        for(int i=0; i<SIZE; i++)
        {
            this->cast[i] = cast[i];
        }
        this->director = director;
        this->success = success;
    }

    ~Movie() 
    {
        cout << "Movie Constructor Destructed : " << name << endl;
    }

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Duration: " << duration << " minutes" << endl;
        cout << "Rating: " << rating << endl;
        cout << "Cast : " << endl;
        for(int i=0; i<SIZE; i++)
        {
            cout << "(" << i+1 << ")" << cast[i] << endl;
        }
        cout << "Director: " << director << endl;
        cout << "Success: " << success << endl;
    }
};

int main() {    
    string cast[SIZE] = {"Aamir Khan as Rancho", "R. Madhavan as Farhan Qureshi", "Sharman Joshi as Raju Rastogi"};
    
    Movie m1 = Movie("3 Idiots", "Comedy/ Drama", 170, 8.4, cast, "Rajkumar Hirani", "Hit");
    m1.display();

    return 0;
}





// DAY 3

//Inheritance : 
//in c++, it supports five types inheritance
//
//- Single level inheritance
//- Multiple level inheritance
//- multilevel inheritance
//- Hierarchical inheritance
//- Hybrid inheritance
//
//- Single level inheritance : only one parent and one child.

#include<iostream>
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
	public :
		void bark()
		{
			cout << "Woof Woof !!!";
		}
};

int main()
{
	Dog dog;
	dog.name = "Rocky";
	dog.color = "Brown";
	dog.leg = 4;
	
	cout << "Name : " << dog.name << " Color : "<<dog.color<<" Leg : "<<dog.leg<<endl;
	dog.bark();
	
	return 0;
	
}








//OOPs : Object oriented programming system
//Basic concepts
//
//Class and Object
//
//Class : Blueprint of objects (Entities)
//
//example : 
//Zoo management system : Animals, Staff, Visitors etc
//                        they are real world entities
//      
//Library Management System : Books, Staff, Student etc. 
//
//Object : Instance of class : it defines how we can access
//         class methods(function), variable etc.
//         
//         there are multiple objects of a class
//         
//         each object has its own characterstics
//         
//         Attributes(properties)
//         Animal : lion, elephant, zebra
//                : food, sound, color, habitant
//                
//        DBMS : Tables : Animal(Entities)
//                        Columns(Attributes)
//                        
//        Methods : eating(), sleeping()
//        
//        
//Four Major Pillars of OOPS : 
//
//1. Inheritance : when a class or object requires all properties
//                 and behaviour of parent class then its mechanism
//                 known inheritance.
//                 
//              1. Sub class : a derived class that carry properties
//                            from another class or parent class.
//                            
//              2. Super class : - Parent class or base class 
//                               - where subclass inherits its properties.
//                               
//        Benefits or application : 
//		- Reusability
//		- it is used to achieve polymorphism
//
//2. Polymorphism : When one task is performed by different ways
//                  known as polymorphism
//
//3. Abstraction : Hiding internal details and showing only
//                 required functionality is known as abstraction.
//                 
//                 ex : phone call, Transaction etc
//                 
//                 Data abstraction is the process of exposing to the
//                 the outside world only the information that is 
//                 absolutely necessary  while implementaion.
//
//4. Encapsulation : Binding or wrapping or grouping code and data
//                   together into  a single unit is known as
//                   encapsulation.


//Class and Object
//#include<iostream>
//using namespace std;
//
//
//class Student
//{
//	public :
//		int rollNo_g;
//		string name_g;
//		string dept_g;
//		bool result_g;
//		long long phone_g;
//		
//		void insert(int rollNo, string name, string dept, bool result, long long phone)
//		{
//			//left side : Global variable || right : local variable
//			rollNo_g = rollNo;
//			name_g = name;
//			dept_g = dept;
//			result_g = result;
//			phone_g = phone;
//		}
//		
//		void display()
//		{
//			cout << rollNo_g << " " << name_g << " " << dept_g <<" "<< result_g<<" "<<phone_g<<endl;
//		}	
//};
//
//int main()
//{
//	Student samiran;
//	
//	samiran.insert(37,"Samiran","IT",true,9878675467);
//	samiran.display();
//	
//	return 0;
//}

//Constructor
// - a special type of method which is invoked or run automatically
//   at the time of object creation.
//
// - they has same name as class. _/
// 
// - it is used to create the data members of new things.
// 
// - they dont have any return type _/
// 
// - two types of constructor 
//    1. parameterized constructor
//	2. default constructor


//Default Constructor : they dont have any parameter
//#include<iostream>
//using namespace std;
//
//class Employee
//{
//  public:
//  		Employee()
//  		{
//  			cout << "Hello Employee !! from constructor" <<endl;
//		}
//		
//		void helloEmployee()
//		{
//			cout<<"Hello Employee !! from method";
//		}
//};
//
//int main()
//{
//	Employee emp;
//	emp.helloEmployee();
//	return 0;
//}

//Parameterized Constructor
// - A constructor which has parameters is call parameterized constructor.

//#include<iostream>
//using namespace std;
//
//class Employee // class creation
//{
//	public : //access modifier
//			int id;//global variable of class // 33200
//			string name;//global variable of class // "Roshan"
//			string role;//global variable of class // "SDE"
//			
//			Employee(int id, string name, string role)//i = 33200, n = "Roshan", r = "SDE" //parameterized constructor
//			{
//				id = i;//passing local variable value to global variable // 33200
//				name = n; // "Roshan"
//				role = r; // "SDE"
//			}	
//			
//			void display()
//			{
//				cout << id << " "<<name<<" "<<role<<endl; //printing on console
//			}
//};
//
//
//int main()
//{
//	Employee emp = Employee(33200,"Roshan","SDE");
//	emp.display();
//	
//	return 0;
//} 

//Destructor : 
// 	- Its works just opposite to constructor.
// 	- it destruct the objects of classes.
// 	- syntax (~).
// 	- it is typically used to release the resource(memory) aquired by the object 
//	  during its lifetime.

//#include<iostream>
//using namespace std;
//
//class Employee
//{
//	public : 
//			Employee() //constructor
//			{
//			 cout << "Constructor invoked !! Memory Allocated"<<endl;	
//			}
//			
//			~Employee() //destructor
//			{
//			 cout << "Constructor revoked !! Memory Released"<<endl;	
//			}	
//};
//
//int main()
//{
//	Employee emp;
//}

//This keyword
//
//- it refers to the current instance of the class
//- it allows you to differentiate b/w local variable and global variable
//  / member variable if they have same name and also enables you to pass
//  the current object as a parameter to other function.

//#include<iostream>
//using namespace std;
//
//class Employee{
//	public:
//		int id;
//		string name;
//		string role;
//		
//	Employee(int id, string name, string role)
//	{
//		this->id = id;
//		this->name = name;
//		this->role = role;
//	}
//	
//	void display()
//	{
//		cout << id << " "<<name<<" "<<role<<endl;
//	}
//}; 
//
//int main()
//{
//	Employee emp = Employee(33200,"Roshan","SDE");
//	emp.display();
//}

//Static Keyword
//
//- a modifier that belongs to the type not instance.
//                     or
//  we dont need to create an object to access class member by using static

// it saves memory or resource

//#include<iostream>
//using namespace std;
//
//class Employee
//{
//	public :
//		int id;
//		static string name;
//		
//	Employee(int id)
//	{
//		this->id = id;
//	}
//	
//		void display()
//	{
//		cout << id << " "<<name<<endl;
//	}
//};
//
//
//string Employee :: name = "Roshan";//memory utilization/save
//
//int main()
//{
//	Employee emp = Employee(234);	
//	emp.display();	
//}

//struct                      vs      class
//access modifier : public         public, private, protected
//doesn't supports inheritance     supports inheritance
  



// DAY 4 

//Access Specifier or Access Modifier
//
//- it defines how the members(class variable and function) of class can be accessed.
//
//- They allow us to determine which class members are accessible to other classes 
//  and which are not.
//  
//- 3 types : public, private and protected.
//
//Public : public members are accessible from any part of the program
//         i.e. from inside or outside the class through object instances.
//         
//
//Private : private members can be only accessible from within the class.
//
//		  they cannot be accessed directly from outside of class or through
//		  object instances.
//		  
//		  they are hidden from outside of class and can be accessed through
//		  public members functions(getter and setter).
		 
		 
//#include<iostream>
//using namespace std;
//
//class Rectangle
//{
//	private:
//			float width;
//			float height;
//			
//	public:
//	
//	  Rectangle(float width, float height)
//	  {
//		this->width = width;
//		this->height = height;
//	  }
//	  
//	  float calculateArea()
//	  {	
//	  	return height * width;
//	  }	
//};
//
//int main()
//{
//	Rectangle rect = Rectangle(10.5,9.5) ;
//	
//	cout << rect.calculateArea() << endl;
//	
//	return 0;
//}
//
//without using public members we can't access private members of a class.
//
//by default, all members of a class in c++ are private if you don't specify any specifier.


//Protected :
//	- protected members can be accessed within class and from 
//	  derived class or subclass class or child class.
//	  
//	- used primarily in inheritance
//	
//	- can be accessed through inside a class and from derived class.

//#include<iostream>
//using namespace std;
//
//class Parent
//{
//	protected:
//		float land;//500.5 // 700.5
//		int money;//5000 // 7000
//		
//	public:
//	   	Parent(float land, int money)// 500.5,5000 // 700.5, 7000
//	   	{
//		   this->land = land; // 500.5 // 700.5
//		   this->money = money;	//5000 // 7000
//		}
//		
//		void display()
//		{
//			cout << "From inside of a class"<<endl;
//			cout << "Land : "<<land<<endl; // 500.5 // 700.5
//			cout << "Money : "<<money<<endl; // 5000 // 7000
//		}
//};
//
//class OnlyChild : public Parent
//{
//		
//	public : 
//	      
//	 OnlyChild(float childLand,int childMoney) : Parent(childLand,childMoney) {};
//	            //700.5,7000                   :       700.5,7000   
//	    
//};
//
//
//int main()
//{
//	Parent parent = Parent(500.5,5000); // land : 500.5, money : 5000
//	parent.display();
//	
//	OnlyChild child(700.5,7000);//land : 700.5, money : 7000
//	child.display();
//	
//	return 0;
//}

//                Public |  Private |  Protected
//same class   |  Yes    | Yes      |  Yes 
//Derived class|  Yes    | No       |  Yes
//Outside class|	Yes    | No       |  No

//Multilevel Inheritance :
//	one base class is inherits a derived class and that derived class 
//	inherits another derived class.

//#include<iostream>
//using namespace std;
//
//class GrandParent{
//	public : 
//		void displayG()
//		{
//			cout << "From Grand Parent"<<endl;
//		}
//};
//
//class Parent : public GrandParent
//{
//	public:
//		
//		void displayP()
//		{
//			cout << "From Parent"<<endl;
//		}
//};
//
//class Child : public Parent
//{
//	public:
//		
//		void displayC()
//		{
//			cout << "From Child"<<endl;
//		}
//};
//
//int main()
//{
//	Child child;
//	child.displayG();
//	child.displayP();
//	child.displayC();
//	
//	return 0;
//}

//Multiple Inheritance : 
// - When a child class inherits its property from more than one parent its known as
//   multiple inheritance.

//#include<iostream>
//using namespace std;
//
//class Birds
//{
//	public : 
//		Birds()
//		{
//			cout << "Bird are two types : "<<endl;
//		}	
//};
//
//class Oviparous
//{
//	public:
//		Oviparous()
//		{
//			cout << "Oviparous birds lay eggs"<<endl;
//		}
//};
//
//class Sparrow: public Birds, public Oviparous //multiple inheritance
//{
//	public :
//		void display()
//		{
//			cout << "Sparrow is bird and also lay eggs"<<endl;
//		}
//};
//
//int main()
//{
//	Sparrow sparrow; // 
//	
//	sparrow.display();
//	
//	return 0;
//}

//Ambiguity in multiple inheritance
//
// - suppose, two base class have same function. when you call that function using object
//   derived from child class, the compiler show error.
//   
//   Because compiler doesn't knows which function to call.

//#include<iostream>
//using namespace std;
//
//class Birds
//{
//	public : 
//		void run()
//		{
//			cout << "Bird are running "<<endl;
//		}	
//};
//
//class Oviparous
//{
//	public:
//		void run()
//		{
//			cout << "Oviparous birds are running"<<endl;
//		}
//};
//
//class Sparrow: public Birds, public Oviparous //multiple inheritance
//{
//	public :
//		void run()
//		{
//			Birds :: run();//ambiguity resolved by scope resolution operator
//			Oviparous :: run();
//		}
//};
//
//int main()
//{
//	Sparrow sparrow;
//	sparrow.run();  //confused or ambiguity // now resolved
//	
//	return 0;
//}
//Hybrid Inheritance //Homework
// : its consist of many type of inheritance
//   i.e. Hybrid inheritance
//        1. single inheritance 
//        2. multilevel inheritance
//        3. Multiple inheritance


//Friend Function
//
//- A function that is defined or initialized outside a class but has 
//  the ability to access the class member's which are private and protected.
//  
//- for accessing member or data of class, declaration of friend function
//  is neended inside a class.
//  
//- without use of any object, the friend function can be invoked like a normal
//  function.
//  
//- it can be declared either in private or public or protected.

//#include<iostream>
//using namespace std;
//
//class Travel
//{
//	private:
//		int speed;
//		int distance;
//		
//	public:
//	
//	Travel(int speed, int distance)
//	{
//		this->speed = speed;
//		this->distance = distance;
//	}
//	
//	friend double findTimeOfTraveling(Travel);//declare
//};
//
//double findTimeOfTraveling(Travel travel)
//{
//	double time = (double)travel.distance / (double)travel.speed;
//	return time;
//}
//
//int main()
//{
//	Travel travel = Travel(5,10);
//	
//	cout << "Time of Traveling : "<<findTimeOfTraveling(travel)<<" Hrs "<<endl;
//	return 0;
//}
//Polymorphism 
// - when the behaviour of the same object or function is different 
//   in different context.
//   
// - an object can take many form according to condition or case.
// 
// In C++, there are two types of polymorphism :
// 	1. Compile time polymorphism
// 	   - Function overloading or method overloading
// 	   - operator overloading
// 	   
// 	2. Run Time Polymorphism
// 	
//Compile Time Overloading
//	- it is achieved through Function and operator  overloading.
//	- also known as static polymorphism or early binding or static binding.
//	
//	- a mechanism where compiler select appropriate method to call at
//	  compile time based on their argument.
//	  
//Method Overloading
//	- refers to the ability to define multiple functions within
//      same class that have the same name but different in 
//	  parameter list.
	 
//#include<iostream>
//using namespace std;
//
//class MethodOverloading
//{
//	public:
//		int add(int a, int b)
//		{
//			return a+b;
//		}
//		
//		
//		int add(int a, int b, int c)
//		{
//			return a+b+c;
//		}
// };
// 
// int main()
// {
// 	MethodOverloading meth;
// 	cout <<"add with two Parameter : " << meth.add(3,4)<<endl;
// 	cout <<"add with three parameter : " <<meth.add(3,4,3)<<endl;
//  } 

Run time polymorphism or method overriding

	- achieved when the object's method is invoked at the run time instead of compile
	  time.
	  
	- also known as dynamic binding or late binding.
	
	- In c++, it is achieved by virtual keyword.
	
Virtual Function
	- it is a member function in the base class that you redefine in derived class.
	- it is declared using virtual keyword.
	- it is used to achieve dynamic binding or late binding or method overriding.
	- it must be member of some class also cannot be static.
	- accessed through object.
	- they can be friend of other class.
	- essential to achieve polymorphism in c++


// DAY 5

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

// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//         int empId;
//         string empName;
//         long long phone;

//     public:
//         //setter
//         void  setEmpId(int empId)
//         {
//             this->empId = empId;
//         }
//         //getter
//         int getEmpId()
//         {
//             return this->empId;
//         }

//         //setter
//         void  setEmpName(const string &empName)
//         {
//             this->empName = empName;
//         }
//         //getter
//         string getEmpName()
//         {
//             return this->empName;
//         }

//         //setter
//         void setPhone(long long phone)
//         {
//             this->phone = phone;
//         }
//         //getter
//         long long getPhone()
//         {
//             return this->phone;
//         }
// };

// int main()
// {
//     Employee employee;

//     employee.setEmpId(101);
//     employee.setEmpName("KARAN");
//     employee.setPhone(9304397220);

//     cout << employee.getEmpId() << endl;
//     cout << employee.getEmpName() << endl;
//     cout << employee.getPhone() << endl;

//     return 0;
// }

// there are two types of variable
// 1. dynamic variable : which change or which we change
// 2. constant variable : which we can't change in future.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int var_D = 45; //we can change it in future
//     const int size = 10; //we cant change in future

//     cout << "Original Value : " << var_D << endl;
//     cout << "Original Value : " << size << endl;

//     var_D = 50;
//     cout << "Modified Value : " << var_D << endl;

//     size = 20;
//     cout << "Modified Value : " << size << endl;
// }

// Exception Handling

//  - Exception is a type of interruption that stop or interupt the normal flow of a program at the runtime.

//  - it can be solved with the help of exception handling mechanism.

//  - Exception handling is used to deal with runtime error during program execution.

//  - it allow us to run program without terminating the program.

//  - we use exception handling to maintain normal flow of a program.

//  - Exception Handling achieved by 3 keyword

//     - try
//     - catch
//     - throw

// try : try is used to place the code where error may be occur the exception.

// catch : catch is used to catch the exception and handle it.

// throw : throw is used to throw exception or a message.

// #include<iostream>
// using namespace std;

// float divison(int a, int b)
// {
//     if(b==0)
//     {
//         throw "Divison by zero is not allowed !!!";
//     }
//     float c = a/b;

//     return c;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter the value of a : ";
//     cin >> a;
//     cout << endl;

//     cout << "Enter the value of b : ";
//     cin >> b;
//     cout << endl;

//     float k = k;

//     try{
//         k = divison(a, b);
//         cout << k << endl;
//     }
//     catch(const char* e){
//         cerr << e << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     try
//     {
//         int arr[5] = {1, 2, 3, 4, 5};
//         int index;
//         cout << "Enter an index to access the array: ";
//         cin >> index;

//         if (index < 0 || index >= 5)
//         {
//             throw out_of_range("Index out of range");
//         }

//         cout << "Value at index " << index << " is: " << arr[index] << endl;
//     }
//     catch (const out_of_range &e)
//     {
//         cerr << "Caught exception: " << e.what() << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// float division(int a, int b)
// {
// 	if(b == 0)
// 	{
// 		throw "Divide by zero is not allowed !!!";
// 	}
// 	float c = a/b;
	
// 	return c;
// }

// float add(int a, int b)
// {
// 	float c = a+b;
	
// 	return c;
// }

// int main()
// {
// 	int a,b;
// 	cout << "Enter the value of a :";
// 	cin >> a;
// 	cout<<endl;
	
// 	cout << "Enter the value of b :";
// 	cin >> b;
// 	cout<<endl;
	
// 	float k = 0;
	
// 	try{
// 		k = division(a,b);
// 		cout << k<<endl;
// 	}
// 	catch(const char* e)
// 	{
// 		cerr << e << endl;
// 	}
	
// 	cout <<"Maintained flow of program after exception handling : "<< add(a,b) << endl;
		
// 	return 0;
// }

// File Handling

//  - it allow us to work with files in a system
//  - it reads, writes and manipulate the content of file.

//writing into a file

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     ofstream filestream("HelloFile.txt");

//     if(filestream.is_open())
//     {
//         filestream << "Hello C++ from C\n";
//         filestream.close();
//     }
//     else 
//     {
//         cout << "Failed to open file";
//     }
//     return 0;
// }

//Reading from file

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     string str;

//     ifstream filestream("HelloFile.txt");

//     if(filestream.is_open())
//     {
//         while(getline(filestream, str))
//         {
//             cout << str << endl;
//         }
//         filestream.close();
//     }
//     else{
//         cout << "Failed to open file !!!";
//     }
//     return 0;
// }

// String

//  - string is class in c++ that represents the sequence of character.

//  - with the help of c++ string class, we can perform many task
//    like : concatenation, comparison, conversion, replace


// #include<iostream>
// #include<string>

// using namespace std;

// int main()
// {
//     //creation of string
//     string name = "chandanOP";
//     cout << name << endl;

//     //Length of string
//     cout << "Length of string : " << name.length() << endl;

//     //access and modify character of string
//     name[0] = 'C';
//     name[1] = 'H';

//     cout << name << endl; 

//     //for append
//     name.append(" Gamer");
//     cout << name << endl;

//     //find character in string
//     cout << name.find("OP") << endl;

//     //replace character in string
//     name.replace(7, 8, "op");
//     cout << name << endl;
    
//     name.replace(1, 1, "h");
//     cout << name << endl;

//     return 0; 
// }