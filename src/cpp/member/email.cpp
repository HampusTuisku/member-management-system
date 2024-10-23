#include "../../headers/member/email.h"

Email::Email(string email)
{
    if (emailObj->isValidEmail(email) == false) 
    {
        cout << "Invalid email address" << endl;
    }
    else
    {
        this->email = email;
    }
}

string Email::getEmail()
{
    return email;
}

void Email::setEmail(string email)
{
    this->email = email;
}

bool Email::isValidEmail(string email)
{
    if (email.find('@') != string::npos)
    {
        return true;
    }
    return false;
}

