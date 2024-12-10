#include <iostream>

using namespace std;

#define MAX_AMMO 500
#define DEBUG

int main()
{
    // operators: + - * / %
    // bitwise operation: & | ~ (not) ^ (xor)
    // logical operator: && || !
    // pointer: * & ->

    int a = 0;
    int b = 8;
    int c = ~b;

    cout<< "Testing bitwise operations" << endl;
    cout << (int)(a & b) << endl;
    cout << (int)(a | b) << endl;
    cout << c << endl;
    cout << (int)(a ^ b) << endl;

    #ifdef DEBUG
        cout << "If statement" << endl;
    #endif


    // directives: starts with #
    // #include, #define
    return 0;
}