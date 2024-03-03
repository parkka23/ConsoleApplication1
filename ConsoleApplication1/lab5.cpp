//// Task 1
//
//#include <iostream>
//#include <limits>
//
//class Int {
//private:
//    int value;
//
//public:
//    Int(int val) : value(val) {}
//
//    Int operator+(const Int& other) const {
//        CheckAddOverflow(value, other.value);
//        return Int(value + other.value);
//    }
//
//    Int operator-(const Int& other) const {
//        CheckSubtractOverflow(value, other.value);
//        return Int(value - other.value);
//    }
//
//    Int operator*(const Int& other) const {
//        CheckMultiplyOverflow(value, other.value);
//        return Int(value * other.value);
//    }
//
//    Int operator/(const Int& other) const {
//        if (other.value == 0) {
//            throw std::runtime_error("Division by zero");
//        }
//        return Int(value / other.value);
//    }
//
//    Int& operator++() {  // ���������� �����
//        CheckIncrementOverflow(value);
//        ++value;
//        return *this;
//    }
//
//    Int operator++(int) {  // ����������� �����
//        CheckIncrementOverflow(value);
//        Int temp(value);
//        ++value;
//        return temp;
//    }
//
//    // ��������������� ������� ��� �������� ������������
//    static void CheckAddOverflow(int a, int b) {
//        if ((b > 0 && a > std::numeric_limits<int>::max() - b) ||
//            (b < 0 && a < std::numeric_limits<int>::min() - b)) {
//            throw std::overflow_error("Arithmetic overflow");
//        }
//    }
//
//    static void CheckSubtractOverflow(int a, int b) {
//        if ((b < 0 && a > std::numeric_limits<int>::max() + b) ||
//            (b > 0 && a < std::numeric_limits<int>::min() + b)) {
//            throw std::overflow_error("Arithmetic overflow");
//        }
//    }
//
//    static void CheckMultiplyOverflow(int a, int b) {
//        if (a > 0 && (b > std::numeric_limits<int>::max() / a || b < std::numeric_limits<int>::min() / a) ||
//            a < -1 && (b > std::numeric_limits<int>::min() / a || b < std::numeric_limits<int>::max() / a + 1)) {
//            throw std::overflow_error("Arithmetic overflow");
//        }
//    }
//
//    static void CheckIncrementOverflow(int a) {
//        if ((a == std::numeric_limits<int>::max()) || (a == std::numeric_limits<int>::min())) {
//            throw std::overflow_error("Arithmetic overflow");
//        }
//    }
//
//    // ����� ��������
//    friend std::ostream& operator<<(std::ostream& os, const Int& num) {
//        os << num.value;
//        return os;
//    }
//};
//
//int main() {
//    try {
//        Int a(100);
//        Int b(200);
//
//        // ������� ������������� ������������� ����������
//        Int result1 = a + b;
//        Int result2 = a - b;
//        Int result3 = a * b;
//        Int result4 = a / b;
//
//        std::cout << "a + b = " << result1 << std::endl;
//        std::cout << "a - b = " << result2 << std::endl;
//        std::cout << "a * b = " << result3 << std::endl;
//        std::cout << "a / b = " << result4 << std::endl;
//
//        Int c(std::numeric_limits<int>::max());
//        c++;  // ������� ��������� ������������ �������� �� 1
//
//    }
//    catch (const std::exception& e) {
//        std::cerr << "Exception: " << e.what() << std::endl;
//    }
//
//    return 0;
//}
//
/////////////////////////
//
//
//// Task 2
//
//#include <iostream>
//
//class Fraction {
//private:
//    double chislo;
//
//public:
//    Fraction() : chislo(0.0) {} 
//    Fraction(double value) : chislo(value) {} 
//
//    Fraction operator+(const Fraction& other) const {
//        return Fraction(chislo + other.chislo);
//    }
//
//    Fraction operator-(const Fraction& other) const {
//        return Fraction(chislo - other.chislo);
//    }
//
//    Fraction operator*(const Fraction& other) const {
//        return Fraction(chislo * other.chislo);
//    }
//
//    Fraction operator/(const Fraction& other) const {
//        if (other.chislo == 0.0) {
//            throw std::runtime_error("Division by zero");
//        }
//        return Fraction(chislo / other.chislo);
//    }
//
//    // ���������� ������� �������� ���������� (����������� �����)
//    Fraction operator++(int) {
//        Fraction temp(chislo);
//        chislo += 1.0;
//        return temp;
//    }
//
//    // ���������� ������� �������� ���������� (���������� �����)
//    Fraction& operator++() {
//        chislo += 1.0;
//        return *this;
//    }
//
//    // ����� ��������
//    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
//        os << fraction.chislo;
//        return os;
//    }
//};
//
//int main() {
//    // ������ ������������� ������ Fraction
//    Fraction a(3.0);
//    Fraction b(2.5);
//    Fraction c = a + b;
//    Fraction d = a - b;
//    Fraction e = a * b;
//    Fraction f = a / b;
//
//    std::cout << "a + b = " << c << std::endl;
//    std::cout << "a - b = " << d << std::endl;
//    std::cout << "a * b = " << e << std::endl;
//    std::cout << "a / b = " << f << std::endl;
//
//    Fraction g = ++a; // ���������� ����� ����������
//    Fraction h = b++; // ����������� ����� ����������
//
//    std::cout << "++a = " << g << std::endl;
//    std::cout << "b++ = " << h << std::endl;
//
//    return 0;
//}
//
//
//// Task 3
////
#include <iostream>
#include <Windows.h>

class Rectangle1 { 

public:
   
    double rect_area(double a, double b) const {
        return a * b;
    }

    double rect_area(double a) const {
        return a * a;
    }

};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double length, width, side;

    std::cout << "������� ����� ��������������: ";
    std::cin >> length;

    std::cout << "������� ������ ��������������: ";
    std::cin >> width;

    Rectangle1 rectangle;
    std::cout << "������� ��������������: " << rectangle.rect_area(length, width) << std::endl;


    Rectangle1 square;
    std::cout << "������� ����� ������� ��������: ";
    std::cin >> side;

    std::cout << "������� ��������: " << square.rect_area(side) << std::endl;
    return 0;
}
