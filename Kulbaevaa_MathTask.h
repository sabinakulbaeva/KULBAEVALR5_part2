#ifndef _KULBAEVAA_MATHTASK_H_
#define _KULBAEVAA_MATHTASK_H_

#include <iostream>
#include <string>

using namespace std;

// Контроль корректности ввода данных
bool UserInput(const string& input) {
    if (input.empty()) return false;  // если строка пустая - ввод некорректен
    try {
        size_t pos;
        int number = stoi(input, &pos);  // Конвертировать строку в число
        if (pos != input.size()) return false;  // Остались ненужные символы
        if (number < 0) return false;          // Отрицательные числа запрещены
    } catch(...) {                             // Любая ошибка преобразования
        return false;
    }
    return true;
}

// Метод ввода данных
void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    do {
        cout << label << ": ";
        getline(cin, raw_input);  // Читаем всю строку целиком
    } while(!UserInput(raw_input));  // Пока ввод некорректен, запрашиваем заново
    varLink = stoi(raw_input);       // Преобразовываем в число и сохраняем
}



#endif /* _KULBAEVA_MATHTASK_H_ */