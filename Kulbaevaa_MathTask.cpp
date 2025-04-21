#include <iostream>
#include "Kulbaevaa_MathTask.h"
using namespace std;
int main()
// Отделяет дробную часть числа
double getFractionalPart(double num) {
    return num - floor(num);
}

// Возвращает целую часть числа
int getIntegerPart(double num) {
    return static_cast<int>(num);
}

int main() {
    double x, y, z;

    // Ввод вещественных чисел
    cout << "Введите вещественное число x: ";
    cin >> x;
    cout << "Введите вещественное число y: ";
    cin >> y;
    cout << "Введите вещественное число z: ";
    cin >> z;
      // Сумма дробных частей
      double sumFractionalParts = getFractionalPart(x) +
      getFractionalPart(y) +
      getFractionalPart(z);

// Сумма целых частей
int sumIntegerParts = getIntegerPart(x) +
getIntegerPart(y) +
getIntegerPart(z);

// Вывод результатов
cout << fixed << setprecision(3); // Форматирование вывода с точностью до 3-х знаков после запятой
cout << "Сумма дробных частей: " << sumFractionalParts << endl;
cout << "Сумма целых частей: " << sumIntegerParts << endl;

return 0;
}