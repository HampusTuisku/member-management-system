#include "../../headers/member/member.h"

/**
 * Constructor that initializes the member with a username, password, and email.
 */
Member::Member(Username username, Password password, Email email)
: username(username), password(password), email(email)
{
}

/**
 * Returns the username of the member.
 */
Username Member::getUsername() const
{
    return username;
}

/**
 * Returns the password of the member.
 */
Password Member::getPassword() const
{
    return password;
}

/**
 * Returns the email of the member.
 */
Email Member::getEmail() const
{
    return email;
}

