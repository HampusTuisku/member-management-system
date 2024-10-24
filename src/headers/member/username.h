#ifndef USERNAME_H
#define USERNAME_H

#include <string>
#include <iostream>

using namespace std;

class Username
{
    private:
        string username;
    public:
        Username(string username);
        void setUsername(string newUsername);
        string getUsername() const;
        bool isUsernameValid(string username) const;
};

#endif
