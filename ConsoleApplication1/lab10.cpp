//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//class AntiAircraftGun {
//private:
//    static double p; // Вероятность попадания одного выстрела
//
//public:
//    static int fire(int n) {
//        double chance_of_hit = 1 - std::pow(1 - p, n);
//        double random_number = static_cast<double>(rand()) / RAND_MAX;
//        std::cout << "chance_of_hit: " << chance_of_hit << std::endl;
//        std::cout << "random_number: " << random_number << std::endl;
//        // Генерация случайного числа от 0 до 1
//        if (random_number < chance_of_hit) {
//            return 1; // Цель поражена
//        }
//        else {
//            return 0; // Цель не сбита
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
//            std::cerr << "Ошибка: Вероятность должна быть в диапазоне от 0 до 1.\n";
//        }
//    }
//    static double getHitProbability() {
//        return p;
//    }
//};
//
//double AntiAircraftGun::p = 0.7; // Инициализация статического поля класса
//
//int main() {
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    // Установка вероятности попадания
//    AntiAircraftGun::setHitProbability(0.3);
//    std::cout << "Вероятность попадания одного выстрела: " << AntiAircraftGun::getHitProbability() << std::endl;
//
//    // Количество выстрелов
//    int n = 10;
//
//    // Вычисление результатов стрельбы
//    std::cout << "Результаты стрельбы:\n";
//    for (int i = 1; i <= n; ++i) {
//        int result = AntiAircraftGun::fire(i);
//        std::cout << "Выстрел " << i << ": " << (result == 1 ? "Цель поражена" : "Цель не сбита") << std::endl;
//        //if (result == 1) {
//        //    std::cout << "Цель поражена! Стрельба остановлена." << std::endl;
//        //    break; // Остановка стрельбы после попадания в цель
//        //}
//    }
//
//    // Оценочное значение вероятности поражения цели
//    std::cout << "\nОценочная вероятность поражения цели после " << n << " выстрелов: ";
//    std::cout << AntiAircraftGun::estimatedHitProbability(n) << std::endl;
//
//    return 0;
//}
