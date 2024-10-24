#ifndef UI_H
#define UI_H

#include "../../headers/member/member.h"
#include <iostream>

using namespace std;

class Ui
{
    private:
        Member member;

    public:
        Ui(Member member);
        void firstMenu();
        void registerMenu();
        void exitMenu();
};

#endif