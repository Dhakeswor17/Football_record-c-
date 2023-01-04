#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include "Match.h"
#include "Database.h"
#include <conio.h>




ostream& operator<<(ostream& output, const Match& match)
{
    output << match.homeTeam << endl << match.opposingTeam << endl << match.homeTeamScore
           << endl << match.opponentTeamScore << endl << match.location << endl;

    return output;
}

//overloaded input operator
istream& operator>>(istream& input, Match& m)
{
    getline(input, m.homeTeam);
    getline(input, m.opposingTeam);
    getline(input, m.homeTeamScore);
    getline(input, m.opponentTeamScore);
    getline(input, m.location);

    return input;
}



void Database::add()
{
    cin.ignore();

    cout << "Enter home team:";
    getline(cin, homeTeam);

    cout << "Enter opponent team:";
    getline(cin, opposingTeam );

    cout << "Enter number:";
    getline(cin, number);

    cout << "Enter city:";
    getline(cin, city);

    cout << "Enter relative(s):";
    getline(cin, relative);

    cout << endl << "Match added to file! Press ENTER to continue..." << endl << endl;
}

// 6.
void Match::print_team_report()(Match m, string user_input_city)
{
    int max_width = 0;

    if (m.city == user_input_city)
    {
        // get max width for printing in formatted columns
        max_width = get_max_width(p);

        cout << "Name: " << setw(NAME_LABEL + static_cast<std::streamsize>(max_width)) << p.name << endl;
        cout << "Email: " << setw(EMAIL_LABEL + static_cast<std::streamsize>(max_width)) << p.email << endl;
        cout << "Phone number: " << setw(max_width) << p.number << endl;
        cout << "City: " << setw(CITY_LABEL + static_cast<std::streamsize>(max_width)) << p.city << endl;
        cout << "Relative(s): " << setw(RELATIVE_LABEL + static_cast<std::streamsize>(max_width)) << p.relative << endl << endl;

    }

}

// 7. print all contact info
void Person::print_all(Person p)
{
    int max_width = 0;

    // get max width for printing in formatted columns
    max_width = get_max_width(p);

    cout << "Relative(s): " << setw(RELATIVE_LABEL + static_cast<std::streamsize>(max_width)) << p.relative << endl;
    cout << "Name: " << setw(NAME_LABEL + static_cast<std::streamsize>(max_width)) << p.name << endl;
    cout << "Email: " << setw(EMAIL_LABEL + static_cast<std::streamsize>(max_width)) << p.email << endl;
    cout << "Phone number: " << setw(max_width) << p.number << endl;
    cout << "City: " << setw(CITY_LABEL + static_cast<std::streamsize>(max_width)) << p.city << endl << endl;

}