#ifndef CALCULATOR_H
#define CALCULATOR_H

// Абстрактний клас калькулятора
class AbstractCalculator {
public:
    virtual double obchyslennya(double a, double b) = 0; // Віртуальний метод для обчислення
};

// Клас-інтерфейс для взаємодії з калькулятором
class CalculatorInterface {
public:
    void vykonatyObchyslennya(AbstractCalculator* calculator, double a, double b); // Метод для виконання обчислень
};

// калькулятор додавання
class DodavannyaCalculator : public AbstractCalculator {
public:
    double obchyslennya(double a, double b); // Реалізація методу обчислення
};

// калькулятор віднімання
class VidnimannyaCalculator : public AbstractCalculator {
public:
    double obchyslennya(double a, double b); // Реалізація методу обчислення
};

// калькулятор множення
class MnozhennyaCalculator : public AbstractCalculator {
public:
    double obchyslennya(double a, double b); // Реалізація методу обчислення
};

// калькулятор ділення
class DilennyaCalculator : public AbstractCalculator {
public:
    double obchyslennya(double a, double b); // Реалізація методу обчислення
};

#endif
