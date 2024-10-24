#include "../../headers/view/ui.h"

/**
 * Constructor that initializes the UI with a member.
 */

Ui::Ui(Member member) : member(member)
{    
}

/**
 * Displays the first menu.
 */

void Ui::firstMenu()
{
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
        case 1:
            registerMenu();
            break;
        case 2:
            exitMenu();
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}

void Ui::registerMenu()
{
    cout << "Enter username: ";
    string username;
    cin >> username;
    cout << "Enter password: ";
    string password;
    cin >> password;
    cout << "Enter email: ";
    string email;
    cin >> email;
    member.getUsername().setUsername(username);
    member.getUsername().setUsername(password);
    member.getEmail().setEmail(email);
    cout << "Registered successfully" << endl;
}

void Ui::exitMenu()
{
    cout << "Exiting..." << endl;
}


