// Task 1
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//class Kamaz {
//private:
//    std::string name;
//    double speed;
//
//public:
//    Kamaz(const std::string& truckName, double truckSpeed) : name(truckName), speed(truckSpeed) {}
//
//    void displayInfo() const {
//        std::cout << "Kamaz " << name << ": Speed - " << speed << " km/h\n";
//    }
//
//    double getSpeed() const {
//        return speed;
//    }
//};
//
//class Tatra {
//private:
//    std::string name;
//    double speed;
//
//public:
//    Tatra(const std::string& truckName, double truckSpeed) : name(truckName), speed(truckSpeed) {}
//
//    void displayInfo() const {
//        std::cout << "Tatra " << name << ": Speed - " << speed << " km/h\n";
//    }
//
//    
//    double getSpeed() const {
//        return speed;
//    }
//};
//
//int FrCreater(const Kamaz& kamaz, const Tatra& tatra) {
//    if (kamaz.getSpeed() > tatra.getSpeed()) {
//        return 1;  
//    }
//    else if (kamaz.getSpeed() < tatra.getSpeed()) {
//        return -1; 
//    }
//    else {
//        return 0;  
//    }
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    Kamaz kamaz("Master", 80.0);
//    Tatra tatra("Phoenix", 75.0);
//
//    kamaz.displayInfo();
//    tatra.displayInfo();
//
//    int result = FrCreater(kamaz, tatra);
//
//    if (result == 1) {
//        std::cout << "Kamaz победил!\n";
//    }
//    else if (result == -1) {
//        std::cout << "Tatra победил!\n";
//    }
//    else {
//        std::cout << "Ничья! Скорости равны.\n";
//    }
//
//    return 0;
//}

//////////////////////////
// 
// Task 2
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//class Tatra;  
//
//class Kamaz {
//private:
//    std::string name;
//    double speed;
//
//public:
//    Kamaz(const std::string& truckName, double truckSpeed) : name(truckName), speed(truckSpeed) {}
//
//    void displayInfo() const {
//        std::cout << "Kamaz " << name << ": Speed - " << speed << " km/h\n";
//    }
//
//    double getSpeed() const {
//        return speed;
//    }
//
//    friend int FrCreater(const Kamaz& kamaz, const Tatra& tatra);  
//};
//
//class Tatra {
//private:
//    std::string name;
//    double speed;
//
//private:
//        double getSpeed() const {
//            return speed;
//        }
//
//public:
//    Tatra(const std::string& truckName, double truckSpeed) : name(truckName), speed(truckSpeed) {}
//
//    void displayInfo() const {
//        std::cout << "Tatra " << name << ": Speed - " << speed << " km/h\n";
//    }
//
//    /*double getSpeed() const {
//        return speed;
//    }*/
//
//    friend int FrCreater(const Kamaz& kamaz, const Tatra& tatra);  
//};
//
//int FrCreater(const Kamaz& kamaz, const Tatra& tatra) {
//    if (kamaz.getSpeed() > tatra.getSpeed()) {
//        return 1;
//    }
//    else if (kamaz.getSpeed() < tatra.getSpeed()) {
//        return -1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    Kamaz kamaz("Master", 80.0);
//    Tatra tatra("Phoenix", 75.0);
//
//    kamaz.displayInfo();
//    tatra.displayInfo();
//
//    int result = FrCreater(kamaz, tatra);
//
//    if (result == 1) {
//        std::cout << "Kamaz победил!\n";
//    }
//    else if (result == -1) {
//        std::cout << "Tatra победил!\n";
//    }
//    else {
//        std::cout << "Ничья! Скорости равны.\n";
//    }
//
//    return 0;
//}

///////////////////////

// Task 3
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//class Tatra;
//
//class Kamaz {
//private:
//    std::string name;
//    double speed;
//
//public:
//    Kamaz(const std::string& truckName, double truckSpeed) : name(truckName), speed(truckSpeed) {}
//
//    void displayInfo() const {
//        std::cout << "Kamaz " << name << ": Speed - " << speed << " km/h\n";
//    }
//
//    double getSpeed() const {
//        return speed;
//    }
//
//    friend class Tatra;
//};
//
//class Tatra {
//private:
//    std::string name;
//    double speed;
//private:
//    double getSpeed() const {
//        return speed;
//    }
//public:
//    Tatra(const std::string& truckName, double truckSpeed) : name(truckName), speed(truckSpeed) {}
//
//    void displayInfo() const {
//        std::cout << "Tatra " << name << ": Speed - " << speed << " km/h\n";
//    }
//
//    
//    friend int FrCreater(const Kamaz& kamaz, const Tatra& tatra);
//};
//
//
//
//int FrCreater(const Kamaz& kamaz, const Tatra& tatra) {
//    if (kamaz.getSpeed() > tatra.getSpeed()) {
//        return 1;
//    }
//    else if (kamaz.getSpeed() < tatra.getSpeed()) {
//        return -1;
//    }
//    else {
//        return 0;
//    }
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    Kamaz kamaz("Master", 80.0);
//    Tatra tatra("Phoenix", 75.0);
//
//    kamaz.displayInfo();
//    tatra.displayInfo();
//
//    int result = FrCreater(kamaz, tatra);
//
//    if (result == 1) {
//        std::cout << "Kamaz победил!\n";
//    }
//    else if (result == -1) {
//        std::cout << "Tatra победил!\n";
//    }
//    else {
//        std::cout << "Ничья! Скорости равны.\n";
//    }
//
//    return 0;
//}
