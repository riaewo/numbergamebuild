#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    setlocale(0, "");

    // ������������� ���������� ��������� �����
    srand(time(0));

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        cout << "����� �������: ������� ���� ���: ";
        string name;
        cin >> name;
        cout << "������, " << name << "!" << endl;

        // ���������� ����� �� 1 �� 100
        int secretNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

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
                cout << "����������, " << name << "! �� ������ �� " << attempts << " �������." << endl;
            }
        } while (guess != secretNumber);

        cout << "������� ���? (y/n): ";
        cin >> playAgain;
    }

    cout << "������� �� ����! �� ��������!" << endl;
    return 0;
}