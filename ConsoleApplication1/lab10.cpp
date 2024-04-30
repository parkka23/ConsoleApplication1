//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//class AntiAircraftGun {
//private:
//    static double p; // ����������� ��������� ������ ��������
//
//public:
//    static int fire(int n) {
//        double chance_of_hit = 1 - std::pow(1 - p, n);
//        double random_number = static_cast<double>(rand()) / RAND_MAX;
//        std::cout << "chance_of_hit: " << chance_of_hit << std::endl;
//        std::cout << "random_number: " << random_number << std::endl;
//        // ��������� ���������� ����� �� 0 �� 1
//        if (random_number < chance_of_hit) {
//            return 1; // ���� ��������
//        }
//        else {
//            return 0; // ���� �� �����
//        }
//    }
//
//    static double estimatedHitProbability(int n) {
//        return 1 - std::pow(1 - p, n);
//    }
//
//    static void setHitProbability(double probability) {
//        if (probability >= 0 && probability <= 1) {
//            p = probability;
//        }
//        else {
//            std::cerr << "������: ����������� ������ ���� � ��������� �� 0 �� 1.\n";
//        }
//    }
//    static double getHitProbability() {
//        return p;
//    }
//};
//
//double AntiAircraftGun::p = 0.7; // ������������� ������������ ���� ������
//
//int main() {
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    // ��������� ����������� ���������
//    AntiAircraftGun::setHitProbability(0.3);
//    std::cout << "����������� ��������� ������ ��������: " << AntiAircraftGun::getHitProbability() << std::endl;
//
//    // ���������� ���������
//    int n = 10;
//
//    // ���������� ����������� ��������
//    std::cout << "���������� ��������:\n";
//    for (int i = 1; i <= n; ++i) {
//        int result = AntiAircraftGun::fire(i);
//        std::cout << "������� " << i << ": " << (result == 1 ? "���� ��������" : "���� �� �����") << std::endl;
//        //if (result == 1) {
//        //    std::cout << "���� ��������! �������� �����������." << std::endl;
//        //    break; // ��������� �������� ����� ��������� � ����
//        //}
//    }
//
//    // ��������� �������� ����������� ��������� ����
//    std::cout << "\n��������� ����������� ��������� ���� ����� " << n << " ���������: ";
//    std::cout << AntiAircraftGun::estimatedHitProbability(n) << std::endl;
//
//    return 0;
//}
