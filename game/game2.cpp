#include<map>
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

map<string,vector<string>> wordCategories = {
    {"Special-animals", {"hyrax", "macaques", "vaquita", "orangutan","Oceanquahogclam", "tiger"}},
    {"Football-clubs", {"lazio", "manchester", "fiorentina", "juventus", "Orlando", "leistercity"}},
    {"Rwandan-Districts", {"muhanga", "gasabo", "nyamagabe", "Gakenke", "nyabihu", "gisagara"}}
    // Add more categories and words as needed
};

string chooseWord(const string& category){
    if(wordCategories.find(category)!= wordCategories.end()){
        vector<string>& words = wordCategories[category];
        int randomIndex = rand() % words.size();
        string word = words[randomIndex];

        return word;
    }
    return "";
    
}


string displayWord(const string& word, const string& guessedLetters){
    string display = "";
    for(char letter: word){
        if(guessedLetters.find(letter)!= string::npos){
            display += letter;
        }else{
            display += " _ ";
        }
    }

    return display;
}




int main(){
    
    srand(static_cast<unsigned>(time(0)));

    while(true){
        string category,guessedLetters, wordToGuess;
        guessedLetters= "";
        int chances = 6;

        cout<<"Select a category (Special animals, Football clubs and Rwandan districts): ";
        cin>>category;

        wordToGuess = chooseWord(category);

        if(wordToGuess.empty()){
            cout<<"Invalid category, Please select a valid category"<<endl;
            continue;
        }

        cout<<"Let's play! You have " << chances << " chances." << endl;

        while(chances>0){
            string display = displayWord(wordToGuess, guessedLetters);
            cout<<display<<endl;

            if(display == wordToGuess){
                cout<<"Congratulations, you guessed the word.It was "<<wordToGuess<<endl;
                break;
            }

            string guess;
            cout<<"Enter the guessingLetter: "<<guess<<endl;
            cin>>guess;

            if(guess=="exit"){
                cout<<"The word to guess was '"<<wordToGuess<<"'. You quited the game."<<endl;
                break;
            }

            if(guess.length()!=1 || !isalpha(guess[0])){
                cout<<"Please enter a single letter: "<<endl;
                continue;
            }

            if( guessedLetters.find(guess[0]) != string::npos){
                cout<<"You already guessed letter '"<<guess[0]<<"'"<<endl;
                continue;
            }

            guessedLetters += guess[0];

            if(wordToGuess.find(guess[0]) ==string::npos){
                chances--;
                cout<<guess[0]<<" is not in word "<<".Remaining: "<<chances<<" chances."<<endl;
            }
            
        }
        
        if(chances ==0){
            cout<<"Sorry, you run out of chances. The word was '"<< wordToGuess<< "'."<<endl;
        }

        string playAgain;
        cout<<"Do you wish to continue? yes/no -> ";
        cin>>playAgain;

        if(playAgain != "yes"){
            cout<<"Goodbye"<<endl;
            break;
        }
    }
    return 0;
}