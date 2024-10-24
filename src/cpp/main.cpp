#include "../headers/main.h"

Main::Main() : ui(Member(Username("username"), Password("password"), Email("email")))
{
}

int main() 
{
    Main mainApplication;
    mainApplication.run();
    return 0;
}

void Main::run()
{
    ui.firstMenu();
}



