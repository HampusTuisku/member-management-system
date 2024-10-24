#ifndef EMAIL_H
#define EMAIL_H

#include <iostream>

using namespace std;

class Email
{
    private:
        string email;
        
    public:
        Email(string email);
        string getEmail() const;
        void setEmail(string newEmail);
        bool isValidEmail(string email) const;
};

#endif