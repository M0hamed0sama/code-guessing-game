#include <iostream>
#include <string>

using namespace std;

int main() {
    string word = "cupcake"; // Hard-coded word
    int numGuesses = 10; // Number of guesses allowed
    int numLetters = word.length(); // Number of letters in the word
    string guessedWord(numLetters, '_'); 
    char letter; 

    cout << "Welcome to guess the word game!" << endl;
    cout << "The word has " << numLetters << " letters." << endl;
    cout << "You have " << numGuesses << " guesses to try to guess them." << endl;
    cout << "And the word for now is : " << guessedWord << endl;

    while (numGuesses > 0 && guessedWord != word) {
        cout << "Enter a letter: ";
        cin >> letter;

        bool correctGuess = false;

        for (int i = 0; i < numLetters; i++) {
            if (word[i] == letter) {
                guessedWord[i] = letter;
                correctGuess = true;
            }
        }

        if (correctGuess) {
            cout << "good guess! The word so far is: " << guessedWord << endl;
        } else {
            numGuesses--;
            cout << "Sorry, that letter is not in the word. You have " << numGuesses << " guesses left." << endl;
        }
    }

    if (numGuesses == 0) {
        cout << "That's unlucky :( , you ran out of guesses. The word was " << word << "." << endl;
    } else {
        cout << "Well done! You guessed it right :D " << endl;
    }

    return 0;
}