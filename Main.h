#ifndef CALCULATOR_H
#define CALCULATOR_H

// ����������� ���� ������������
class AbstractCalculator {
public:
    virtual double obchyslennya(double a, double b) = 0; // ³��������� ����� ��� ����������
};

// ����-��������� ��� �����䳿 � �������������
class CalculatorInterface {
public:
    void vykonatyObchyslennya(AbstractCalculator* calculator, double a, double b); // ����� ��� ��������� ���������
};

// ����������� ���������
class DodavannyaCalculator : public AbstractCalculator {
public:
    double obchyslennya(double a, double b); // ��������� ������ ����������
};

// ����������� ��������
class VidnimannyaCalculator : public AbstractCalculator {
public:
    double obchyslennya(double a, double b); // ��������� ������ ����������
};

// ����������� ��������
class MnozhennyaCalculator : public AbstractCalculator {
public:
    double obchyslennya(double a, double b); // ��������� ������ ����������
};

// ����������� ������
class DilennyaCalculator : public AbstractCalculator {
public:
    double obchyslennya(double a, double b); // ��������� ������ ����������
};

#endif
