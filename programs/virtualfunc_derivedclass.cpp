/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Pokemon {
    private:
    string name;
    string type;

    public:
    virtual void speak() = 0;
};

class Pikachu : public Pokemon {
    private:
    string name = "Pikachu";
    string type = "Electric";
    
    public:
    void speak() override {
        cout << name << endl;
    }
};

int main()
{
    Pikachu p;
    p.speak();
    return 0;
}