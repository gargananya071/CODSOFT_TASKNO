#include <iostream>

using namespace std;
char arr[3][3];

bool check()
{
    for (int i=0; i<3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
        {
            return true;
        }

        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
        {
            return true;
        }
    }

    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
    {
        return true;
    }

    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
    {
        return true;
    }

    return false;
}

void display()
{
    cout << "Current Board" << endl << endl;
    cout << "    |     |    " << endl;
    cout << " " << arr[0][0] << "  |  " << arr[0][1] << "  |  " << arr[0][2] << endl;
    cout << "----|-----|----" << endl;
    cout << "    |     |   " << endl;
    cout << " " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << endl;
    cout << "----|-----|----" << endl;
    cout << "    |     |   " << endl;
    cout << " " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << endl;
    cout << "    |     |   " << endl;
}

int main()
{
    char count = '1';
    int slot;
    bool result;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            arr[i][j] = count++;
        }
    }

    display();

    int turns = 0;
    while (turns < 9)
    {
        // Player X Turn
        cout << "\nPlayer X [X's Turn] : Enter a slot number (1-9) : ";
        cin >> slot;

        if (slot < 1 || slot > 9) {
            cout << "Invalid slot! Choose between 1-9.\n";
            continue;
        }

        int index = slot - 1;
        int r = index / 3;
        int c = index % 3;

        // Overwrite / Occupied Check
        if (arr[r][c] == 'X' || arr[r][c] == 'O') {
            cout << "Slot already occupied! Choose another slot.\n";
            continue;
        }

        arr[r][c] = 'X';
        display();
        turns++;

        result = check();
        if (result)
        {
            cout << "\nCongratulations! Player X won." << endl;
            break;
        }

        if (turns == 9) break;

        // Player O Turn
        cout << "\nPlayer O [O's Turn] : Enter a slot number (1-9) : ";
        cin >> slot;

        if (slot < 1 || slot > 9) {
            cout << "Invalid slot! Choose between 1-9.\n";
            continue;
        }

        index = slot - 1;
        r = index / 3;
        c = index % 3;

        // Overwrite / Occupied Check
        if (arr[r][c] == 'X' || arr[r][c] == 'O') {
            cout << "Slot already occupied! Choose another slot.\n";
            continue;
        }

        arr[r][c] = 'O';
        display();
        turns++;

        result = check();
        if (result)
        {
            cout << "\nCongratulations! Player O won." << endl;
            break;
        }
    }

    if (turns == 9 && !check()) {
        cout << "\nIt's a Draw!" << endl;
    }

    return 0;
}
