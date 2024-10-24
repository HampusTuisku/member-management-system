#include "../../headers/member/password.h"

/**
 * Constructor that initializes the password.
 */
Password::Password(string password)
{
    if (!isPasswordValid(password))
    {
        cout << "Invalid password" << endl;
    }
    else
    {
        this->password = password;
    }
}

/**
 * Sets the password.
 */
void Password::setPassword(string newPassword)
{
    password = newPassword;
}

/**
 * Returns the password.
 */
string Password::getPassword() const
{
    return password;
}

/**
 * Checks if the password is valid.
 */
bool Password::isPasswordValid(string password) const
{
    for (char c : password)
    {
        if (c == ' ')
        {
            cout << "Password cannot contain spaces" << endl;
            return false;
        }
    }
    {
        if (password.length() < 8)
        {
            cout << "Password must be at least 8 characters long" << endl;
            return false;
        }
    }
    return true;
}


