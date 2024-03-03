//29.02.2024

#include<iostream>
using namespace std;

int main() 
{
    /*int a;

    cout << "Enter value of integer: ";

    cin >> a;

    cout << a <<  endl;

    float b; // 4 bytes

    cout << "Enter value of Float: ";
    
    cin >> b;

    cout << b << endl;

    bool c; //true or false

    double d; //8 bytes

    char ch;*/

    //take input from user and print on console
    //1. name, age, marks, phone

    char string[10]; 
    int age;
    float marks;
    long long phone;

    cout<< "Enter name : ";
    cin>>string;

    //string name;
    //getline(cin, name);

    cout<< "Enter age : ";
    cin>>age;

    cout<< "Enter marks : ";
    cin>>marks;

    cout<< "Enter phone : ";
    cin>>phone;

    cout<<endl;
    cout<<"name : "<<string<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"marks : "<<marks<<endl;
    cout<<"phone : "<<phone<<endl;

    return 0;
}