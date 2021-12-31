#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

string fortuneCookie() {
    string fortune;
    int choice;
    cout << "Enter a number between 1 and 10\n";
    cin >> choice;
    switch (choice) {
        case 1:
            fortune = "You will stop breathing when you die :O\n";
            break;
        case 2:
            fortune = "You will have a lot of money if ur parents are rich :O\n";
            break;
        case 3:
            fortune = "Your parents will give you money if you do chores :O\n";
            break;
        case 4:
            fortune = "A dubious friend may be an enemy in camouflage :O\n";
            break;
        case 5:
            fortune = "If you are not dead, then you are alive\n";
            break;
        case 6:
            fortune = "To truly find yourself, you must play hide and seek alone :O\n";
            break;
        case 7:
            fortune = "Your parents are paying your friends:(\n";
            break;
        case 8:
            fortune = "The early bird gets the worm, but the second mouse gets the cheese\n";
            break;
        case 9:
            fortune = "Help im being held priso...You will recieve money\n";
            break;
        case 10:
            fortune = "Step on a crack, break ur moms back :(\n";
            break;
    }
    cout << fortune;
    return fortune;
}

int main() {
    int choice;
    bool quit = false;
    while (!quit) {
        cout << "Fortune?\nyes(1)    no(2)\n";
    cin >> choice;
        switch (choice) {
            case 1:
                fortuneCookie();
                sleep(3);
                break;
            case 2:
                quit = true;
                break;
            default:
                cout << "read bozo";
                break;
        }
    }
}
