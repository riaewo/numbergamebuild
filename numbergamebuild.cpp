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

        cout << "Введите ваше имя: ";
        cin >> name;
        cout << "Привет, " << name << "!" << endl;

        secretNumber = rand() % 100 + 1; 

        cout << "Я загадал число от 1 до 100. Попробуй угадать!" << endl;

        do {
            cout << "Твоя догадка: ";
            cin >> guess;
            attempts++;

            if (guess < secretNumber) {
                cout << "Слишком мало!" << endl;
            }
            else if (guess > secretNumber) {
                cout << "Слишком много!" << endl;
            }
            else {
                cout << "Поздравляю, " << name << "! Ты угадал за "
                    << attempts << " попыток." << endl;
            }
        } while (guess != secretNumber);

        cout << "Сыграем ещё? (y/n): ";
        cin >> playAgain;
    }

    cout << "Спасибо за игру! До свидания!" << endl;
    return 0;
}