#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    cout << "NUMBER GUESSING GAME\n";

    // Seed for the random number generator
	srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Guess the random number.\n";

    do {
        // Get user's guess
        cout << "Enter your guess: ";
        cin >> guess;

        // Provide feedback
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }

        attempts++;

    } while (guess != secretNumber);

    // Display success message
    cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";

    
    cout << "\nTask 1 by Abdullah Amin\n";

    return 0;
}
