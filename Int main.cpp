#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Variable for the chosen number (Instruction: "a number is already chosen")
    int myNumber = 7; 
    
    // Variable for user input
    int guess; 
    
    // Empty list to store all guesses
    vector<int> allGuesses; 

    cout << "Welcome to the guessing game!" << endl;

    // While loop: continues as long as the guess is not equal to the chosen number
    while (guess != myNumber) {
        
        cout << "Enter a number: ";
        cin >> guess;

        // Immediately save the value into the list
        allGuesses.push_back(guess);

        // If / else statements to compare the guess
        if (guess > myNumber) {
            cout << "Too high" << endl;
        } 
        else if (guess < myNumber) {
            cout << "Too low" << endl;
        } 
        else {
            cout << "Correct" << endl;
        }
    }

    // After loop finishes, use a for loop to display all guesses
    cout << "\nHere are all the numbers you entered:" << endl;
    for (int i = 0; i < allGuesses.size(); i++) {
        cout << allGuesses[i] << endl;
    }

    return 0;
}
