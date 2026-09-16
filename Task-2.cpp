#include <iostream>
#include <cmath>
using namespace std;

// Menu-driven calculator
int main()
{
    int choice;
    double num1, num2;

    do
    {
        // Displaying the calcultor menu
        cout << " ------------------ MENU ----------------------- \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power / Exponent\n";
        cout << "6. Square root\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7) : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "Enter two numbers : ";
                cin >> num1 >> num2;

                cout << "Addition of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
                break;
            }

            case 2:
            {
                cout << "Enter two numbers : ";
                cin >>  num1 >> num2;

                cout << "Subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
                break;
            }

            case 3:
            {
                cout << "Enter two numbers : ";
                cin >> num1 >> num2;

                cout << "Multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
                break;
            }

            case 4:
            {
                cout << "Enter two numbers : ";
                cin >> num1 >> num2;

                if (num2 != 0)
                {
                    cout << "Division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
                }
                else
                {
                    cout << "Error! Division by zero is not allowed.\n";
                }
                break;
            }

            case 5:
            {
                cout << "Enter a number : ";
                cin >> num1;
                cout << "Enter power : ";
                cin >> num2;

                cout << num1 << " raised to the power of " << num2 << " is " << pow(num1, num2) << endl;
                break;
            }

            case 6:
            {
                cout << "Enter a number : ";
                cin >> num1;

                if (num1 >= 0)
                {
                    cout << "Square root of " << num1 << " is " << sqrt(num1) << endl;
                }
                else
                {
                    cout << "Sqaure root of negative number is not possible.";
                }
                break;
            }

            // Exiting the program
            case 7:
            break;

            default:
            cout << "Invalid choice !! " << endl;
        }
    }
    while ( choice != 7 );
    
    return 0;

}