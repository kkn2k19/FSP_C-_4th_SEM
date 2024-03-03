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

#include<iostream>
using namespace std;
#define SIZE 5

class Movie 
{
    public:
        string name;
        string genre;
        int duration;
        float rating;
        string cast[SIZE];
        string director;
        string success;

        Movie(string name, string genre, int duration, float rating, string cast[], string director, string success) 
        {
            this->name = name;
            this->genre = genre;                this->duration = duration;
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
           cout << "Movie Constructor Destructed." << name << endl;
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
    Movie m1 = Movie("3 Idiots", "Comedy/ Drama", 170, 8.4, "Rajkumar Hirani", "Hit");
    m1.cast[SIZE]={"Aamir Khan as Rancho", "R. Madhavan as Farhan Qureshi", "Sharman Joshi as Raju Rastogi"};
    m1.display();

    return 0;
}