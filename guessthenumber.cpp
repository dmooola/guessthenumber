//guessing game program. Oladamola Ola-Buraimo. 03/19/24. This code will ask user to guess a number that the program has chose, and indicate how close the user is. When the user guesses correctly, the program will display the number of tries.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    int guess;
    int numGuesses = 0;

    cout << "Welcome to Damola's Number Guessing Game!" << endl;
    cout << "I have secretely selected a number between 1 and 100. Try and guess it..." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        numGuesses++;

        if (guess > randomNumber) {
            cout << "Too high, Try again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too low, Try again." << endl;
        }
        else {
            cout << "Congrats! You guessed the number in " << numGuesses << " guesses." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
