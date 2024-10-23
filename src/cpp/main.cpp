#include <iostream>
#include "../headers/main.h"

int main() 
{
    MainClass mainClass;
    mainClass.setMessage("Hello, World!");
    cout << mainClass.getMessage() << endl;
    return 0;
}

string MainClass::getMessage() 
{
    return message;
};

void MainClass::setMessage(string message) 
{
    this->message = message;
};

