#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to choose a random word from a predefined list
string chooseRandomWord() {
    vector<string> wordList = {"programming", "hangman", "computer", "algorithm", "cplusplus", "developer"};
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomIndex = rand() % wordList.size();
    return wordList[randomIndex];
}

// Function to initialize the display string with underscores
string initializeDisplayString(const string& word) {
    string displayString(word.length(), '_');
    return displayString;
}

// Function to display the current state of the word
void displayWord(const string& displayString) {
    cout << "Current Word: " << displayString << endl;
}

// Function to update the display string based on the guessed letter
void updateDisplayString(string& displayString, const string& word, char guessedLetter) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (word[i] == guessedLetter) {
            displayString[i] = guessedLetter;
        }
    }
}

int main() {
    cout << "Welcome to Hangman!" << endl;

    string word = chooseRandomWord();
    string displayString = initializeDisplayString(word);
    int attempts = 6; // Number of allowed incorrect attempts

    while (attempts > 0) {
        displayWord(displayString);

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        if (word.find(guess) != string::npos) {
            cout << "Correct guess!" << endl;
            updateDisplayString(displayString, word, guess);

            // Check if the word has been completely guessed
            if (displayString == word) {
                cout << "Congratulations! You guessed the word: " << word << endl;
                break;
            }
        } else {
            cout << "Incorrect guess. Attempts left: " << --attempts << endl;
            if (attempts == 0) {
                cout << "Sorry, you ran out of attempts. The correct word was: " << word << endl;
            }
        }
    }

    return 0;
}

