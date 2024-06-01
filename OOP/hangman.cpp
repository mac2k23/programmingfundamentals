#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Hangman {
private:
    int tries;
    string message;
    string month;
    string hide_month;

public:
    Hangman() : tries(3), message("You have 3 chances!") {
        srand(time(NULL));
        string months[] = {
            "january", "february", "march", "april", "may", "june",
            "july", "august", "september", "october", "november", "december"
        };
        int month_number = rand() % 12;
        month = months[month_number];
        hide_month = string(month.length(), 'X');
    }

    void hang_man(char state) {
        static bool alreadyRun = false; // static variable to ensure this is only run once
        if (!alreadyRun) {
            alreadyRun = true;
            string head_string = "|";
            string stage = "=";
            string handle = "|";

            if (state == 'f') {
                head_string = " ";
                handle = "\\";
            } else if (state == 'h') {
                stage = " ";
                handle = "/";
            }

            cout << "\t\t\t\t_________________" << endl;
            cout << "\t\t\t\t       " << head_string << "       |" << endl;
            cout << "\t\t\t\t       O       |" << endl;
            cout << "\t\t\t\t      / \\      |" << "\t     " << message << endl;
            cout << "\t\t\t\t       |       |" << "\t   /" << endl;
            cout << "\t\t\t\t      / \\      |         O  " << endl;
            cout << "\t\t\t\t   ==" << stage << stage << stage << stage << stage << "==   |        / \\" << endl;
            cout << "\t\t\t\t   |       |   |   _" << handle << "_   |" << endl;
            cout << "\t\t\t\t   |       |   |   | |  / \\" << endl;
            cout << "\t\t\t\t================================" << endl;
        }
    }

    int checkGuess(char guess) {
        int matches = 0;
        int len = month.length();

        for (int i = 0; i < len; i++) {
            if (guess == hide_month[i]) {
                return 0;
            }
            if (guess == month[i]) {
                hide_month[i] = guess;
                matches++;
            }
        }
        return matches;
    }

    void playGame() {
        char letter;
        while (tries != 0) {
            hang_man('n');
            cout << "\t\t\t\tLife: " << tries << endl;
            cout << hide_month << endl;
            cout << "\t\t\t\tGuess a letter: ";
            cin >> letter;

            if (checkGuess(letter) == 0) {
                message = "Incorrect Letter!";
                tries--;
            } else {
                message = "Nice! Correct Guess";
            }

            if (hide_month == month) {
                message = "You are free!";
                hang_man('f');
                cout << "\t\t\t\tLife: " << tries << endl;
                cout << "\t\t\t\tThe month is: " << month << endl;
                return;
            }
        }

        message = "You are Hanged!";
        hang_man('h');
        cout << "\t\t\t\tLife: " << tries << endl;
        cout << "\t\t\t\tThe month is: " << month << endl;
    }
};

int main() {
    Hangman game;
    game.playGame();
    return 0;
}

