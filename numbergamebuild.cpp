#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    setlocale(0, "");

    // Инициализация генератора случайных чисел
    srand(time(0));

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        cout << "Новая функция: введите ваше имя: ";
        string name;
        cin >> name;
        cout << "Привет, " << name << "!" << endl;

        // Загадываем число от 1 до 100
        int secretNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

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
                cout << "Поздравляю, " << name << "! Ты угадал за " << attempts << " попыток." << endl;
            }
        } while (guess != secretNumber);

        cout << "Сыграем ещё? (y/n): ";
        cin >> playAgain;
    }

    cout << "Спасибо за игру! До свидания!" << endl;
    return 0;
}