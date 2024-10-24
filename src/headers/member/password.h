#ifndef PASSWORD_H
#define PASSWORD_H

#include <iostream>

using namespace std;

class Password
{
    private:
        string password;

    public:
        Password(string password);
        void setPassword(string newPassword);
        string getPassword() const;
        bool isPasswordValid(string password) const;
};

#endif