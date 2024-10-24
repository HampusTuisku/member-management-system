#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include "../member/username.h"
#include "../member/password.h"
#include "../member/email.h"

using namespace std;

class Member
{
    public:
        Member(Username username, Password password, Email email);
        Username getUsername() const;
        Password getPassword() const;
        Email getEmail() const;
    private:
        Username username;
        Password password;
        Email email;
};

#endif