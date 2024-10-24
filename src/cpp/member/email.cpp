#include "../../headers/member/email.h"

/**
 * Constructor that initializes the email.
 */
Email::Email(string email)
{
    if (!isValidEmail(email))
    {
        cout << "Invalid email" << endl;
    }
    else 
    {
        this->email = email;
    }
}

/**
 * Returns the email.
 */
string Email::getEmail() const
{
    return email;
}

/**
 * Sets the email.
 */
void Email::setEmail(string newEmail)
{
    this->email = newEmail;
}

/**
 * Checks if the email is valid.
 */
bool Email::isValidEmail(string email) const
{
    if (email.find('@') != string::npos)
    {
        return true;
    }
    return false;
}

