#include <iostream>
#include <cstdint>


using namespace std;

// create an alias
typedef unsigned long Score;
using score = unsigned long;

// enumeration
// c style
enum asset_type {texture, sound, animation, script}; // start with value 0
// as class
enum class asset_type2 {texture, sound, animation, script}; // start with value 0

enum class character_role{protagonist, antagonist, sidekick, npc};


// structure
struct GameCharacter
{
    string name;
    int level;
    character_role role;

};



int gloa, glob = 5; // global variables

int main() {
    // int, char, bool, float, double, pointers
    // string class
    int a = 5; // using 32 bits
    char b = '6'; // just one byte, must be single quoted or just an integer
    long long c = 1000;
    unsigned long long d = 2000;
    uint32_t e = 32;
    uint64_t f = 32;
    bool something = false; // anything other than zero is true
    float g = 1.111;
    double h = 2.333; // IEEE754 binary floating point, mainly a scientific notation
    long double i = 33.444;


    int j = 023; // a leading zero means octal format
    j = 0x3A; // hexa
    j = 0b1100; // binary
    j = 23U; // unsigned upper or lower U


    float k = 23.0f;
    double l = 25.4; // double is default floating point


    char m = 'a'; // must use single quotes

    int n, o = 5; // possible

    // qualifiers: const, volatile, mutable, inline, constexpr, static
    // const: variable value cannot be changed
    // volatile: can be changed anywhere anytime, used in embedded systems and multithreaded programs
    // mutabel: able to change even when part of const class
    // inline: generate a copy of functions code at each point it is called to reduce overhead
    // constexpr: when you do a variable, it must be declared as a const expr, can use with functions to let it know to evaluate at compile time
    // you can combine const, constexpr
    // static enables a local variavble to survice until the end

    GameCharacter buddy;
    buddy.name = "Mike";
    buddy.level = 10;
    buddy.role = character_role::sidekick;

    cout << buddy.name << endl;


    // type casting
    // c style
    float target_x = -123.45;
    int32_t sprite_x;
    uint32_t player_x;

    sprite_x = target_x;
    player_x = sprite_x;


    cout << "printing target_x: " << target_x << ", sprite_x: " << sprite_x << ", player_x: " << static_cast<int32_t>(player_x) << endl;


    // auto
    auto pScore = 9;
    auto details = "some details";
    cout << "Type type of autoVar is: " << typeid(pScore).name() << endl;
    cout << "Type type of autoVar is: " << typeid(details).name() << endl;

}