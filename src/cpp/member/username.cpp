#include "../../headers/member/username.h"

Username::Username()
{
    username = new string;
}

Username::~Username()
{
    delete username;
}

void Username::setUsername(string newUsername)
{
    *username = newUsername;
}

string* Username::getUsername()
{
    return username;
}

bool Username::isUsernameValid()
{
    for (char c : *username)
    {
        if (!isalnum(c))
        {
            cout << "Username must contain only letters and numbers" << endl;
            return false;
        }
        if (username->length() > 12)
        {
            cout << "Username must not be longer than 12 characters long" << endl;
            return false;
        }
    }
    return true;
}