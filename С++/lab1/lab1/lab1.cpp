#include <iostream>
#include "RTriangle.h"

using namespace std;

void ShowMenu() {
    cout << "Выберите операцию:\n";
    cout << "1. Вывести значения сторон\n";
    cout << "2. Уменьшить сторону на процент\n";
    cout << "3. Увеличить сторону на процент\n";
    cout << "4. Вывести радиус вписанной окружности\n";
    cout << "5. Вывести расстояние между центрами вписанной и описанной окружностей\n";
    cout << "6. Вывести квадратный корень из площади\n";
    cout << "7. Другой треугольник\n";
    cout << "0. Выход\n";
}

int main()
{
    setlocale(0, "RU");
    int n;
    cout << "Введите количество треугольников в массиве: ";
    cin >> n;

    RTriangle* arr = new RTriangle[n];
    for (int i = 0; i < n; i++) {
        double side, angle;
        cout << "Треугольник " << i + 1 << " введите сторону и угол в градусах.\n";
        cin >> side >> angle;
        arr[i].SetSide(side);
        arr[i].SetAngle(angle);
    };

    int num;
    while (true) {
        cout << "Введите номер треугольника для работы (0 - выход): ";
        cin >> num;
        if (num == 0) break;
        if (num < 1 || num > n) {
            cout << "Неверный номер\n";
            continue;
        }

        RTriangle& tri = arr[num - 1];
        int ch;
        do {
            ShowMenu();
            cout << "Введите номер операции: ";
            cin >> ch;
            double a, b, c, proc, rez;
            switch (ch)
            {
                case 1: {
                    tri.CalculateABC(a, b, c);
                    cout << "Стороны: а = " << a << " b = " << b << " c = " << c << " (гипотенуза)\n";
                    break;
                }

                case 2: {
                    cout << "На сколько процентов увеличить сторону?\n";
                    cin >> proc;
                    tri.IncreaseSide(proc);
                    cout << "Увличена\n";
                    break;
                }

                case 3: {
                    cout << "На сколько процентов уменьшить сторону?\n";
                    cin >> proc;
                    tri.ReductionSide(proc);
                    cout << "Уменьшина\n";
                    break;
                }

                case 4: {
                    rez = tri.CalculateRadius();
                    cout << "Радиус = " << rez << "\n";
                    break;
                }

                case 5: {
                    rez = tri.CalculateDistance();
                    cout << "Расстояние между центрами вписанной и описанной окружностей\n" << rez << "\n";
                    break;
                }
                case 6: {
                    rez = tri.CalculateSqrtS();
                    cout << "Квадрат из площади = " << rez << "\n";
                    break;
                }
                     
                case 7:{ break; }

                case 0: {
                    delete[] arr;
                    cout << "Программа завершена\n";
                    return 0;
                }
                default:
                    cout << "Неверный выбор операции\n";
                }
            } while (ch != 7);
        } 

        delete[] arr;
        cout << "Программа завершена\n";
        return 0;
    
};