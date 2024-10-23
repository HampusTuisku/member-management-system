#ifndef PASSWORD_H
#define PASSWORD_H

#include <iostream>
#include <string> 

using namespace std;

class Password
{
    private:
        string* password;

    public:
        Password();
        ~Password();
        void setPassword(string newPassword);
        string* getPassword();
        bool isPasswordValid();
};

#endif