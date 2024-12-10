#include <iostream>
#include <chrono>
#include <algorithm>
#include <vector>
#include <complex>
#include <cstring>
#include <string>

using namespace std;

using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

#define MAX_SIZE 5

int main()
{
    int arr[MAX_SIZE];

    arr[0] = 4;

    cout << arr[1] << endl;  // by default value is zero

    // pointers
    // pointers can point to any data type, even another pointer
    // NULL vs nullptr
    // nullptr is more modern and typesafe
    // NULL is just int 0

    int* ptr1 = nullptr;
    int* ptr2 = NULL;
    int a = 5;

    ptr1 = &a;  // address of a
    cout << ptr1 << endl;

    ptr2 = &a;  // value at a
    cout << *ptr2 << endl;


    int someArr[] = {1,2,3,4,5};
    int* somePtr = someArr; // holds the address of the first element
    cout << "someptr: " << somePtr << endl;
    cout << "someptr: " << *somePtr << endl;

    somePtr = somePtr + 1;
    cout << "someptr: " << somePtr << endl;
    cout << "someptr: " << *somePtr << endl;

    cout << someArr[2];

    // pointer with objects
    TimePoint *start, *end;
    Duration *elapsed_seconds = new Duration();
    string input;

    start = new TimePoint(Clock::now());

    end = new TimePoint(Clock::now());

    *elapsed_seconds = *end - *start;

    cout << elapsed_seconds->count() << endl;

    delete start;
    delete end;
    delete elapsed_seconds;



    // Stack vs Heap
    // Stack is LIFO and stores staric varibles. lost when function execution is done
    // Heap loads dynamic variables, larger but requires manual memory management
    // dangling pointer: pointing to something that is already delocalized

    // void pointer can hold reference to anything
    float playerHealth = 100.0f;  // Player's health in a game
    void *genericPointer = &playerHealth;  // Generic pointer pointing to player's health

    // To dereference, cast the pointer back to float*
    float actualHealth = *(static_cast<float*>(genericPointer));


    // smart pointer. no need to destroy it. handles itself
    // std::unique_ptr<int> somePtr = std::make_unique<int>();
    // cout << somePtr << endl;

    // you have to manually manage garbage collection in C++. there is not auto GC in C++ like java or C#


    // Vector is a good substitute to arrays
    // dynamic size containers
    // memory is managed by itself
    vector<string> someStrVector = {"one", "two", "three"};
    someStrVector.push_back("four");
    cout << someStrVector[0] << endl;
    cout << someStrVector[3] << endl;

    // vectors with objects
    vector<complex<double>> complexNumbers;
    complexNumbers.push_back(complex<double>(1.1, 1.5));
    complexNumbers.push_back(complex<double>(1.2, 1.6));
    complexNumbers.push_back(complex<double>(1.3, 1.7));
    complexNumbers.push_back(complex<double>(1.4, 1.8));

    cout <<"First element real: " << complexNumbers[0].real() << ", imaginary: " << complexNumbers[0].imag() << endl;

    for (vector<complex<double>>::iterator element = complexNumbers.begin(); element != complexNumbers.end(); element++)
    {
        cout <<"First element real: " << element->real() << ", imaginary: " << element->imag() << endl;
    }


    // reference
    int my_int = 5;
    int& my_ref = my_int;
    
    cout<< my_ref << endl;
    my_ref++;
    cout << my_int << endl;
    cout << my_ref << endl;

    // references are not pointers
    // refereneces must be initialized
    // references only have one level of indirection
    // less powerful than pointers but safer
    // useful when you wanna pass value by reference
    


    // std::string
    // in C, string is just array of char
    // std:: string is actual string
    const int len = 50;
    char racer1[] = "Speedy"; // last char is zero, that is why size is 7
    char racer2[len];
    char raceResult[len*2];

    cout << "racer 1: " << racer1 << endl;
    cout << "racer 2: " << racer2 << endl;

    strncpy(racer2, "Lightning", sizeof(racer2) - 1);
    racer2[sizeof(racer2) - 1] = '\0';

    // Safer way to handle strings
    string racer1s = "Speedy";
    string racer2s = "Lightning";
    string raceResults;

    raceResults = "And the winner is " + racer1s;
    
    return 0;
}