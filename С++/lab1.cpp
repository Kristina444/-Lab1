#include <iostream>
#include <vector>
#include "RTriangle.h"

using namespace std;

void ShowMenu() {
    cout << "Выберите операцию:\n";
    cout << "1. Увеличить сторону на процент\n";
    cout << "2. Уменьшить сторону на процент\n";
    cout << "3. Вывести радиус вписанной окружности\n";
    cout << "4. Вывести расстояние между центрами вписанной и описанной окружностей\n";
    cout << "5. Вывести квадратный корень из площади\n";
    cout << "6. Вывести значения сторон\n";
    cout << "7. Изменить свойства (сторона и угол)\n";
    cout << "0. Выход\n";
}



int main() {
    int n;
    cout << "Введите количество треугольников в массиве: ";
    cin >> n;
    RTriangle* arr = new RTriangle[n];

    for (int i = 0; i < n; i++) {
        double side, angle;
        cout << "Треугольник " << i + 1 << "введите сторону и угол в градусах.\n";
        cin >> side >> angle;
        arr[i].SetSide(side);
        arr[i].SetAngle(angle);
    };
    int choise;
    ShowMenu();
    cout << "Введите количество треугольников в массиве: ";
    cin >> choise;
    switch(choise) {
        case 1{
            cout << "Введите количество треугольников в массиве: ";
        }
        case 2{

        }
    }

    delete[] arr;
};