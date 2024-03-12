// Task 1
#include <iostream>

class Array {
protected:
    static const int maxSize = 100;  
    unsigned arr[maxSize];
    int size;

public:
    Array(int newSize, unsigned initialValue = 0) : size(newSize) {
        for (int i = 0; i < size; ++i) {
            arr[i] = initialValue;
        }
    }

    unsigned getElement(int index) const {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        return 0; 
    }

    virtual void addArray(const Array& other) const {
       std::cout << "Base Array Addition:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << getElement(i) + other.getElement(i) << " ";
        }
        std::cout << std::endl;
    }
};

class ArrayAddition1 : public Array {
public:
    ArrayAddition1(int newSize, unsigned initialValue = 0) : Array(newSize, initialValue) {}

    void addArray(const Array& other) const override {
        std::cout << "ArrayAddition1:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] + other.getElement(i)  << " ";
        }
        std::cout << std::endl;
    }
};

class ArrayAddition2 : public Array {
public:
    ArrayAddition2(int newSize, unsigned initialValue = 0) : Array(newSize, initialValue) {}

    void addArray(const Array& other) const override {
        std::cout << "ArrayAddition2:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] + other.getElement(i) << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array baseArray(3, 1);
    ArrayAddition1 array1(3, 2);
    ArrayAddition2 array2(3, 3);

   
    baseArray.addArray(array1);  
    array1.addArray(array2);     
    array2.addArray(baseArray);  

    return 0;
}

//////////////////////////////////////////

// Task 2
//
//#include <iostream>
//
//class Figure {
//public:
//    virtual double calculateArea() const = 0;
//    virtual double calculatePerimeter() const = 0;
//    virtual ~Figure() {}
//};
//
//class Rectangle : public Figure {
//private:
//    double length;
//    double width;
//
//public:
//    Rectangle(double len, double wid) : length(len), width(wid) {}
//
//    double calculateArea() const override {
//        return length * width;
//    }
//
//    double calculatePerimeter() const override {
//        return 2 * (length + width);
//    }
//};
//
//class Circle : public Figure {
//private:
//    double radius;
//
//public:
//    Circle(double rad) : radius(rad) {}
//
//    double calculateArea() const override {
//        return 3.14 * radius * radius; 
//    }
//
//    double calculatePerimeter() const override {
//        return 2 * 3.14 * radius; 
//    }
//};
//
//class Trapezium : public Figure {
//private:
//    double a; 
//    double b; 
//    double left;
//    double right;
//    double height;
//
//public:
//    Trapezium(double baseA, double baseB, double leftSide, double rightSide, double h) : a(baseA), b(baseB), height(h), left(leftSide), right(rightSide) {}
//
//    double calculateArea() const override {
//        return (a + b) * height / 2;
//    }
//
//    double calculatePerimeter() const override {
//        return a + b + left + right;
//    }
//
//   
//};
//
//int main() {
//    //Figure figure;
//    Rectangle rectangle(5, 3);
//    Circle circle(4);
//    Trapezium trapezium(4, 8, 3, 4, 5);
//
//    std::cout << "Rectangle - Area: " << rectangle.calculateArea() << ", Perimeter: " << rectangle.calculatePerimeter() << std::endl;
//    std::cout << "Circle - Area: " << circle.calculateArea() << ", Perimeter: " << circle.calculatePerimeter() << std::endl;
//    std::cout << "Trapezium - Area: " << trapezium.calculateArea() << ", Perimeter: " << trapezium.calculatePerimeter() << std::endl;
//
//    return 0;
// }


////////////////////////////////////////

// Ttask 3
//#include <iostream>
//
//class Currency {
//public:
//    virtual void toRubles(double amount) const = 0;
//    
//};
//
//class Dollar : public Currency {
//public:
//    void toRubles(double amount) const override {
//        double rubles = amount * 90.69;  
//        std::cout << "Amount " << amount << " in Rubles : " << rubles << std::endl;
//    }
//
//};
//
//class Euro : public Currency {
//public:
//    void toRubles(double amount) const override {
//        double rubles = amount * 99.24; 
//        std::cout << "Amount " << amount << " in Rubles: " << rubles << std::endl;
//    }
//
//    
//};
//
//int main() {
//    Dollar dollar;
//    Euro euro;
//
//    double amount;
//
//    std::cout << "Enter amount in Dollars: ";
//    std::cin >> amount;
//
//    dollar.toRubles(amount);
//
//    std::cout << "Enter amount in Euros: ";
//    std::cin >> amount;
//
//    euro.toRubles(amount);
//
//    return 0;
//}
