#include <iostream>
#include <conio.h> // for _getch()

using namespace std;

const int roadWidth = 20;
const int roadLength = 10;

int carPosition = roadWidth / 2;
bool isGameOver = false;

void DrawRoad()
{
    system("cls");
    for (int i = 0; i < roadLength; i++)
    {
        for (int j = 0; j < roadWidth; j++)
        {
            if (j == carPosition)
                cout << "X";
            else
                cout << "-";
        }
        cout << endl;
    }
}

void Input()
{
    if (_kbhit())
    {
        char key = _getch();
        if (key == 'a' && carPosition > 0)
            carPosition--;
        else if (key == 'd' && carPosition < roadWidth - 1)
            carPosition++;
        else if (key == 'q')
            isGameOver = true;
    }
}

void Logic()
{
    // No additional logic required in this basic example
}

void GameLoop()
{
    while (!isGameOver)
    {
        DrawRoad();
        Input();
        Logic();
        // Adjust the sleep duration to change the speed of the game
        // Sleep(100) will make it slower, while Sleep(10) will make it faster
        Sleep(50); // Requires including <windows.h>
    }
}

int main()
{
    cout << "Car Game" << endl;
    cout << "Controls: 'a' to move left, 'd' to move right, 'q' to quit." << endl;
    cout << "Press any key to start...";
    _getch();

    GameLoop();

    cout << "Game Over!" << endl;

    return 0;
}
