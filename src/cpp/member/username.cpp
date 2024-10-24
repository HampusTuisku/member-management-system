#include "../../headers/member/username.h"

/**
 * Constructor that initializes the username.
 */
Username::Username(string username)
{
    if (!isUsernameValid(username))
    {
        cout << "Invalid username" << endl;
    }
    else
    {
        this->username = username;
    }
}

/**
 * Sets the username.
 */
void Username::setUsername(string newUsername)
{
    this->username = newUsername;
}

/**
 * Returns the username.
 */
string Username::getUsername() const
{
    return username;
}

/**
 * Checks if the username is valid.
 */
bool Username::isUsernameValid(string username) const
{
    for (char c : username)
    {
        if (!isalnum(c))
        {
            cout << "Username must contain only letters and numbers" << endl;
            return false;
        }
        if (username.length() > 12)
        {
            cout << "Username must not be longer than 12 characters long" << endl;
            return false;
        }
    }
    return true;
}