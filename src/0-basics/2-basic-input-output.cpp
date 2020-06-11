// A program to explain basic input output streams
#include <iostream>
using namespace std;

int main(){
    /* 
     * {cin} standard input stream
     * usage: read input from standard input device
     * 
     * {cout} standard output stream
     * usage: display data to output device
     */

    int age;
    cout << "Enter your age:: ";            // use cout to display a message to screen
    cin >> age;                             // use cin to read input(age) from user
    cout << "Your age is:: " << age << " years.\n";
    return 0;
}