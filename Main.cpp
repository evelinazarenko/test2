#include "main.h"
#include <iostream>

double DodavannyaCalculator::obchyslennya(double a, double b) {
    return a + b;
}

double VidnimannyaCalculator::obchyslennya(double a, double b) {
    return a - b;
}

double MnozhennyaCalculator::obchyslennya(double a, double b) {
    return a * b;
}

double DilennyaCalculator::obchyslennya(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        std::cout << "Помилка: Ділення на нуль!" << std::endl;
        return 0;
    }
}

void CalculatorInterface::vykonatyObchyslennya(AbstractCalculator* calculator, double a, double b) {
    double result = calculator->obchyslennya(a, b);
    std::cout << "Результат: " << result << std::endl;
}

int main() {
    system("chcp 1251");
    system("cls");
    CalculatorInterface interface;
    AbstractCalculator* calculator;
    double num1, num2;
    char op;

    std::cout << "Введіть перше число: ";
    std::cin >> num1;

    std::cout << "Введіть оператор (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

    switch (op) {
    case '+':
        calculator = new DodavannyaCalculator();
        break;
    case '-':
        calculator = new VidnimannyaCalculator();
        break;
    case '*':
        calculator = new MnozhennyaCalculator();
        break;
    case '/':
        calculator = new DilennyaCalculator();
        break;
    default:
        std::cout << "Помилка: Некоректний оператор!" << std::endl;
        return 0;
    }

    interface.vykonatyObchyslennya(calculator, num1, num2);

    delete calculator;

    return 0;
}
