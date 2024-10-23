#ifndef USERNAME_H
#define USERNAME_H

#include <string>
#include <iostream>

using namespace std;

class Username
{
    private:
        string* username;
    public:
        Username();
        ~Username();
        void setUsername(string newUsername);
        string* getUsername();
        bool isUsernameValid();
};

#endif
