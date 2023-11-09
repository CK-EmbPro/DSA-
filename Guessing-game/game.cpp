#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
#include <cstdlib>

using namespace std;

// Define a list of categories and corresponding words
map<string,vector<string>> wordCategories = {
    {"Special-animals", {"hyrax", "macaques", "vaquita", "orangutan","Oceanquahogclam" "tiger"}},
    {"Football-clubs", {"lazio", "manchester", "fiorentina", "juventus", "Orlando", "leistercity"}},
    {"Rwandan-Districts", {"muhanga", "gasabo", "nyamagabe", "Gakenke", "nyabihu", "gisagara"}}
    // Add more categories and words as needed
};

// Function to choose a random word from the selected category
string chooseWord(const string& category) {
    if (wordCategories.find(category) != wordCategories.end()) {
        const vector<string>& words = wordCategories[category];
        int randomIndex = rand() % words.size();
        return words[randomIndex];
    }
    return "";
}

// Function to display the word with guessed letters
string displayWord(const string& word, const string& guessedLetters) {
    string display = "";
    for (char letter : word) {
        if (guessedLetters.find(letter) != string::npos) {
            display += letter;
        } else {
            display += " _ ";
        }
    }
    return display;
}       

int main() {
    srand(static_cast<unsigned>(time(0))); // Initialize random seed

    while (true) {
        string category, wordToGuess;
        string guessedLetters = "";
        int chances = 6; // You can customize the number of chances

        cout << "Select a category (Special-animals, Football-clubs and Rwandan-districts): ";
        cin >> category;

        wordToGuess = chooseWord(category);

        if (wordToGuess.empty()) {
            cout << "Invalid category. Please choose a valid category." << endl;
            continue;
        }

        cout << "Let's play! You have " << chances << " chances." << endl;
        
        while (chances > 0) {
            string display = displayWord(wordToGuess, guessedLetters);
            cout << display << endl;

            if (display == wordToGuess) {
                cout << "Congratulations! You guessed the word: " << wordToGuess << endl;
                break;
            }

            string guess;
            cout << "Guess a letter or type 'exit' to quit: ";
            cin >> guess;

            if (guess == "exit") {
                cout << "The word was '" << wordToGuess << "'. You exited the game." << endl;
                break;
            }

            if (guess.length() != 1) {
                cout << "Please enter a single letter." << endl;
                continue;
            }

            if (guessedLetters.find(guess[0]) != string::npos) {
                cout << "You already guessed '" << guess[0] << "'." << endl;
                continue;
            }

            guessedLetters += guess[0];

            if (wordToGuess.find(guess[0]) == string::npos) {
                chances--;
                cout << "'" << guess[0] << "' is not in the word. Chances remaining: " << chances << endl;
            }
        }

        if (chances == 0) {
            cout << "Sorry, you ran out of chances. The word was '" << wordToGuess << "'." << endl;
        }

        string playAgain;
        cout << "Do you want to play again? (yes/no): ";
        cin >> playAgain;
        if (playAgain != "yes") {
            cout << "Goodbye!" << endl;
            break;
        }
       
    }

    return 0;
}
