#include <iostream>
#include <vector>
#include "Match.h"
#include "Database.h"
using namespace std;
int main()
{
    Database database1;
    while (true) {

        cout << "1. Initialize" << endl;
        cout << "2. Save matches to file" << endl;
        cout << "3. Read matches from file" << endl;
        cout << "4. Add match" << endl;
        cout << "5. Make correction" << endl;
        cout << "6. Print team report" << endl;
        cout << "7. Print location report" << endl;
        cout << "Enter your choice (0 to quit): ";
        int choice;
        cin>>choice;
        cin.ignore();
        if(choice ==0){
            break;
        }
        switch (choice)
        {
            case 1:
                database1.save();

                break;

            case 2:
                database1.read();
                break;

            case 4:
                database1.add();
                break;

            case 5:
                database1.correction();

                break;

            case 6:
                database1.print_team_report();
                break;

            case 7:
                database1.print_location();
                break;

                default:
                cout << "Error: Please enter a number between 1-8. Press Enter to go back to MENU..." << endl;
                cin.ignore(2);
                break;
        }

    }

}


