#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0)));
    int number_to_guess = rand() % 100 + 1;
    int user_guess = 0;
    cout << "Enter a number between 1 and 100 :\n";
    while (true) 
    {
        cout << "Enter your guess : ";
        cin >> user_guess;

        if (user_guess < number_to_guess) 
        {
            cout << "Too low! Try again.\n";
        } 
        else if (user_guess > number_to_guess) 
        {
            cout << "Too high! Try again.\n";
        } 
        else 
        {
            cout << "Thank Uh! You guessed the correct number: " << number_to_guess << "\n";
            break;
        }
    }
    return 0;
}
