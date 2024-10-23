#include "../../headers/member/member.h"

Member::Member(Username* username, Password* password, Email* email)
{
    this->username = username;
    this->password = password;
    this->email = email;
}

Member::~Member()
{
    delete username;
    delete password;
    delete email;
}

Username Member::getUsername()
{
    return *username;
}

Password Member::getPassword()
{
    return *password;
}

Email Member::getEmail()
{
    return *email;
}

