#ifndef MAIN_H
#define MAIN_H

#include "../headers/view/ui.h"
#include <iostream>
using namespace std;

class Main
{
    public:
        Main();
        void run();

    private:
        Ui ui;
};

#endif