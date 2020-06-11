// A program to list C++ data types & their sizes
#include <iostream>
using namespace std;

int main(){
    cout << "==============================Data Types in C++==============================\n";
    cout << "Primitive:: <int, char, bool, float, double, void, wchar_t>.\n";
    cout << "Derived:: <function, array, pointer, reference>.\n";
    cout << "User-defined:: <class, structure, union, enum, typedef>.\n";

    cout << "==============================Sizes of Primitive==============================\n";
    cout << "size of int = " << sizeof(int) << " bytes\n";
    cout << "size of char = " << sizeof(char) << " byte\n";
    cout << "size of bool = " << sizeof(bool) << " byte\n";
    cout << "size of float = " << sizeof(float) << " bytes\n";
    cout << "size of double = " << sizeof(double) << " bytes\n";
    cout << "size of wchar_t = " << sizeof(wchar_t) << " bytes\n";

    return 0; 
}