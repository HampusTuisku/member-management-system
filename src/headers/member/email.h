#ifndef EMAIL_H
#define EMAIL_H

#include <iostream>

using namespace std;

class Email
{
    private:
        string email;
        Email *emailObj;
        
    public:
        Email(string email);
        string getEmail();
        void setEmail(string email);
        bool isValidEmail(string email);
};

#endif