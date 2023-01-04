#include "Match.h"
#include "Database.h"
#include <string>

void Database::initialize()
{
   //  Database.clear();

}

void Database::save()
{
    ofstream fout;
    fout.open(SCORECARD, ios::app);		//opening in append mode

    if (!fout)
    {
        throw runtime_error("Error opening the file: " + SCORECARD);
    }

    // write to file
    for (auto& p :SCORECARD)
    {
        fout << p;
    }

    fout.close();

    cout << "Saved successfully!" << endl << endl;

    initialize();

}

void Database::read()
{
    initialize();
    Match m;
    ifstream fin;

    fin.open(SCORECARD);

    if (!fin)
    {
        throw runtime_error("Error opening the file: " + SCORECARD);
    }

    while (fin >> m)
    {

        matches.push_back(m);
    }

    fin.close();

    cout << "Reading from file is successful!" << endl << endl;

}


void Database::add()
{
    Match m;

    m.add();


    matches.push_back(m);
}

// 5. remove person from the phonebook
void Database::correction(){
{
    ofstream fout;
    string game_correction;

    cin.ignore();

    cout << "Enter name of the person which shall be removed:";
    getline(cin, game_correction);

    cout << endl;

    //read contents of file
    read_from_file();

    //opening file in truncate mode to delete all the contents before writing
    fout.open(PHONEBOOK, ios::trunc);

    if (!fout)
    {
        throw runtime_error("Error opening the file: " + PHONEBOOK);
    }

    /*
        this loop will write everything to "phonebook.txt" file
        except the person that needs to be removed
    */
    for (auto& p : phonebook)
    {
        if (!(p == person_to_be_removed))
        {
            // write to file
            fout << p;
        }
    }


    fout.close();

    cout << "File correct successfully!" << endl << endl;

    initialize();		// initializing the phonebook for further use

}

// 6. print person living in the given city
void Database::print_team_report()
{
    string location;

    cin.ignore();

    cout << "location:";
    getline(cin, user_input_city);

    cout << endl;

    // read contents from file
    read_from_file();

    // print persons who live in the given city
    cout << "Now printing data..." << endl << endl;

    for (auto& p : phonebook)
    {
        p.print_person_in_given_city(p, user_input_city);
    }

    initialize();

}
void Database::print_location() {
    read_from_file();

    cout << "Now printing data..." << endl << endl;

    for (auto& p : phonebook)
    {
        p.print_all(p);
    }

    initialize();
}





