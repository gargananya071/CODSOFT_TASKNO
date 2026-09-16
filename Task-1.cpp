#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Program to create number guessing game
int main()
{
    srand(time(NULL));

    int randomNumber = rand() % 100 + 1;

    int userNumber;

    cout << "                          NUMBER  GUESSING  GAME                                " << endl;
    cout << endl << "LET'S START THE GAME" << endl << endl;
    
    cout << "Enter your number (From 1 to 100): ";
    cin >> userNumber;

    int i=1;
    while (true)
    {
        if (userNumber == randomNumber)
        {
            cout << endl;
            cout << "Hurray! You won the game." << endl << endl;
            cout << "You completed the game in " << i << " chances" << endl << endl;
            return 0;
        }

        else if (userNumber > randomNumber)
        {
            cout << endl;
            cout << "The guess is too High!! Try again." << endl;
            cout << endl;
            cout << "Enter another number : ";
            cin >> userNumber;
        }

        else
        {
            cout << endl;
            cout << "The guess is too Low!! Try again." << endl;
            cout << endl;
            cout << "Enter another number : ";
            cin >> userNumber;
        }

        i++;
    }

    return 0;
}