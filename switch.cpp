#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your Age: ";
    cin >>age ;
    switch (age)
    {
    case 12:
        cout << "You are 12 years old kid";
        break;

    case 18:
        cout << "You are 18 years old";
        break;
    default:
        cout << "Neither 12 nor 18";
        break;
    }
}