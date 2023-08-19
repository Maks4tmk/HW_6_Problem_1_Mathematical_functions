// HW 6 Задача 1. Математические функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "mat.h"

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b, action;

    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) \n: ";
    std::cin >> action;

    switch (action)
    {
    case 1:
        std::cout << a << " + " << b << " = " << mat(a, b, action);
        break;
    case 2:
        std::cout << a << " - " << b << " = " << mat(a, b, action);
        break;
    case 3:
        std::cout << a << " * " << b << " = " << mat(a, b, action);
        break;
    case 4:
        std::cout << a << " / " << b << " = " << mat(a, b, action);
        break;
    case 5:
        std::cout << a << " в степени " << b << " = " << mat(a, b, action);
        break;
    }
}
