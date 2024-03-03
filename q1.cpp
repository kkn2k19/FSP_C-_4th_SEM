#include <iostream>
using namespace std;

void print1()
{
    static int x = 10;
    x += 5;
    cout << "x : " << x << endl;
}

void print2()
{
    static int x;
    x = 10;
    x += 5;
    cout << "x : " << x << endl;
}

int main()
{
    print1();
    print1();
    print2();
    print2();
    return 0;
}