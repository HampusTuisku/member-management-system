#ifndef MAIN_H
#define MAIN_H

#include <iostream>
using namespace std;

class MainClass
{
    private:
        string message;
    
    public:
        void setMessage(string message);
        string getMessage();
};

#endif