#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string hello = "Nazmus Sakib";
    cout << "Size of string in bytes: " << hello.size()     << endl    // char uses 1 byte per value
         << "Length of string : "       << hello.length()   << endl
         << "Maximum size of string :"  << hello.max_size() << endl
         << "Capacity of string     :"  << hello.capacity() << endl;
         
         
    hello.resize(6);                                                   // reduced the size of string
    cout << "Resizing string        :"  << hello  << endl;       

}