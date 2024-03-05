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

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filestream("HelloFile.txt");

    if(filestream.is_open())
    {
        filestream << "Hello C++ from C\n";
        filestream.close();
    }
    else 
    {
        cout << "Failed to open file";
    }
    return 0;
}

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
