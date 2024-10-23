#include <iostream>
#include "../headers/main.h"
#include <memory>

int main() 
{

    std::unique_ptr<int> ptr = std::make_unique<int>(42);
    cout << *ptr << endl;
    cout << "Memory address: " << ptr.get() << endl;
    cout << "Memory address: " << &ptr << endl;


    int* ptr2 = new int(42);
    cout << *ptr2 << endl;
    cout << "Memory address: " << ptr2 << endl;
    cout << "Memory address: " << &ptr2 << endl;
    delete ptr2;

    return 0;
}



