#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <locale>
#include <thread>
#include <mutex>

using namespace std;

/*
How to write multiline comments
*/
int main(int argc, char* argv[]) {
    cout << "Hello from the new course" << endl;

    printf("The C way to print things\n");

    // allowed a-z, A-Z, 0-9, _, cannot begin with a number
    // must not be a reserved c++ keywords
    // these are case sensitive
    // C++ is OOP, which supports modeling
    int a = 5;

    if (a == 5)
    {
        printf("Value of a is what is expected: %d\n", a);
    }

    double b = 9.9;
    cout << "square root of d is : " << sqrt(b) << endl;


    // cin only works with strings with no spaces
    string name;
    cout << "Enter your name..." << endl;
    cin >> name;
    cout << "Your name is: " << name << endl;
    /*
    common stls: vector, map, list
    */

    return 0;
}