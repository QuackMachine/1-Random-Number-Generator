/*
* This is a random number generator test
* User will get a random number between 1-5
*/
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int main()
{
    //declare variables
    int rng;        
    string answer1, answer2;

    //initialize random seed
    srand (time(NULL));

    //random seed between 1-5
    rng = rand() % 5 + 1;

    //asking if user want to receive a random rng
    cout << "This program will give you a\n"
         << "random number between 1-5\n"
         << "Do you want to proceed?\n"
         << "Type 'yes' or 'no':\n";
    cin >> answer1;

    //setting options for answer to be "yes" or "no"
    //if yes, choose a random 1-5
    if (answer1 == "yes") {
        if (rng == 1) {
            cout << "rng = 1.\n\n";
        }
        else if (rng == 2) {
            cout << "rng = 2.\n\n";
        }
        else if (rng == 3) {
            cout << "rng = 3.\n\n";
        }
        else if (rng == 4) {
            cout << "rng = 4.\n\n";
        }
        else if (rng == 5) {
            cout << "rng = 5.\n\n";
        }
        else if (rng == 6) {
            cout << "rng = " << rng << ".\n\n";
        }

        //ask user if they want to continue
        cout << "Do you want to continue?\n"
             << "'yes' or 'no'\n";
        cin >> answer2;

        if (answer2 == "yes") {
            return main();
        }
        else if (answer2 == "no") {
            cout << "This program has ended.\n";
        }
    }

    //if no, end the program.
    else if (answer1 == "no") {
        cout << "This program has ended.\n";
    }
}