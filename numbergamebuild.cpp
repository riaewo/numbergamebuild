/**
 * @file numbergamebuild.cpp
 * @brief Guess the number game with a tilt of repeated objects.
 * @author Lera
 * @date 2024
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

/**
 * @brief Main function of the game
 * @return Program exit code
 *
 * Initializes the game, processes user input, 
 * manages the game loop.
 */
int main() {
    setlocale(0, ""); 
    srand(time(0)); 

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        /// @var Player name
        string name;
        /// @var The Hidden Number
        int secretNumber;
        /// @var Player attempt
        int guess;
        /// @var Attempt counter
        int attempts = 0;

        cout << "������� ���� ���: ";
        cin >> name;
        cout << "������, " << name << "!" << endl;

        secretNumber = rand() % 100 + 1; 

        cout << "� ������� ����� �� 1 �� 100. �������� �������!" << endl;

        do {
            cout << "���� �������: ";
            cin >> guess;
            attempts++;

            if (guess < secretNumber) {
                cout << "������� ����!" << endl;
            }
            else if (guess > secretNumber) {
                cout << "������� �����!" << endl;
            }
            else {
                cout << "����������, " << name << "! �� ������ �� "
                    << attempts << " �������." << endl;
            }
        } while (guess != secretNumber);

        cout << "������� ���? (y/n): ";
        cin >> playAgain;
    }

    cout << "������� �� ����! �� ��������!" << endl;
    return 0;
}