//File name: GuessMe
//Author: Trevor Green
//6+2: 8
//Email: green3my@mail.uc.edu
//Class: BME 6002
//Date: 9/15/2
//Link to GitHub Repository: https://github.com/GreenT93/Trevor-GuessMe.git
//Honor statement: I certify that I have neither given nor received
// unauthorized aid on this assignment and will not
// share my code with anyone after this semester. I
// certify that I did not use ChatGPT, BearcatGPT
// Gemini, JetBrains AI, or any other AI, LLM, etc.
// to complete any part of this assignment.

//Description: This part of the project(Part I) consisted of writing code to make a number guessing game.
// For the game, I used several data types to update and store variables. For the actual game,
// I used an outer while loop for user guesses , and an inner while loop

#include <cstdlib>
#include <ctime>
#include <iostream>
//inserts library for srand/rand() function
//inserts library that contains cout/in types

//inserts std from standard namespace; allows for no extra std every time
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() { // main program
    // this sets the correct guessing number to a different value each round
     srand(time(0));
    // stores a single character for the variable called play_again as yes
     char play_again = 'Y';

    //outer while loop that keeps game going when user says yes to play again
    while (play_again == 'Y' || play_again == 'y') {
        //variable that will be used to store the number of times the user guesses
        int user_attempts = 0;
        // variable that ensures a random # between 0-100
        int random_int = rand() % 100 + 1;
        // variable that stores the guessed number from the user
        int user_guess;
        cout << "Guess a number between 1 and 100: ";
        // tells the computer to store the user guess
        cin >> user_guess;
        // post increment that adds the number of user guesses each round
        user_attempts++;
        //inner while loop with if statement that will start/end game based on user input. I used not to ensure game stops when user provides right number
        while (random_int != user_guess) {
            if (user_guess > random_int) {
                cout << "Too high! Try again!" << endl; // prints when if statement is true
            }
            else  {
                cout << "Too low! Try again!" << endl;
            }
            // prompts user to keep guessing; part of the while loop
            cout << "Guess again: ";
            cin >> user_guess;
            user_attempts++;
        }
            // prints how many guesses it took to win and asks user if they want to play again
            cout << "You win! You guessed corectly in " << user_attempts << " attempts." << endl;
            cout << "Play again? (Y/N) ";
            cin >> play_again;
    }
        return 0;
}
