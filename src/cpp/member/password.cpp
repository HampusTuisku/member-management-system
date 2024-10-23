#include "../../headers/member/password.h"

Password::Password()
{
    password = new string;
}

Password::~Password()
{
    delete password;
}

void Password::setPassword(string newPassword)
{
    *password = newPassword;
}

string* Password::getPassword()
{
    return password;
}

bool Password::isPasswordValid()
{
    for (char c : *password)
    {
        if (!isalnum(c))
        {
            cout << "Password must contain only letters and numbers" << endl;
            return false;
        }
        if (password->length() < 8)
        {
            cout << "Password must be at least 8 characters long" << endl;
            return false;
        }
    }
    return true;
}


