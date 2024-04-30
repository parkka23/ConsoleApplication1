//
//// arrover1.cpp
//// ������������ �������� ����������� �������, ������������
//// ���� ������� ��� �������������
//// ������������ ��������� ������� ��� ��������� � ��������� �������� 
//#include <Windows.h>
//#include <iostream>
//#include <process.h>  // ��� ������� exit
//using namespace std;
//
//const int LIMIT = 100;   // ������ �������
//	
//class safearray {
//private:
//	int arr[LIMIT];
//
//public:
//	// ��������� �������� �������� �������
//	void putel(int n, int elvalue)
//	{
//		if (n < 0 || n >= LIMIT) {
//			cout << "\n��������� ������!";
//			exit(1);
//		}
//		arr[n] = elvalue;
//	}
//	// ��������� �������� �������� �������
//	int getel(int n) const {
//		if (n < 0 || n > LIMIT) {
//			cout << "\n��������� ������!";
//			exit(1);
//			
//		}
// return arr[n];
//	}
//};
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	safearray sal;
//	// ������ �������� ��������� 
//	for (int j = 0; j < LIMIT; j++)
//		sal.putel(j, j * 10);
//
//	// ���������� ��������
//	for (int j = 0; j < LIMIT; j++) {
//
//		int temp = sal.getel(j);
//		cout << "������� " << j << " ����� " << temp << endl;
//	}
//	return 0;
//
//}
//	

////////////////////////////////////////////////////////// 111111

//// arrover1.cpp
//// ������������ �������� ����������� �������, ������������
//// ���� ������� ��� �������������
//// ������������ ��������� ������� ��� ��������� � ��������� �������� 
//#include <Windows.h>
//#include <iostream>
//#include <process.h>  // ��� ������� exit
//using namespace std;
//
//const int LIMIT = 100;   // ������ �������
//
//class safearray {
//private:
//	int arr[LIMIT];
//
//public:
//	class Range {};
//
//	// ��������� �������� �������� �������
//	void putel(int n, int elvalue)
//	{
//		if (n < 0 || n >= LIMIT) {
//			throw Range();
//		}
//		arr[n] = elvalue;
//	}
//	// ��������� �������� �������� �������
//	int getel(int n) const {
//		if (n < 0 || n > LIMIT) {
//			throw Range();
//		}
//		return arr[n];
//	}
//};
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	safearray sal;
//	// ����������
//	try {
//	sal.putel(100, 10);
//	}
//	catch (safearray::Range) {
//		cout << "\n���������� - ��������� ������!" << endl;
//
//	}
//
//	// ������ �������� ��������� 
//	for (int j = 0; j < LIMIT; j++) {
//		try {
//			sal.putel(j, j * 10);
//		}
//		catch (safearray::Range) {
//			cout << "\n���������� - ��������� ������!" << endl;
//
//		}
//	}
//
//	// ���������� ��������
//	for (int j = 0; j < LIMIT; j++) {
//		try {
//			int temp = sal.getel(j);
//			cout << "������� " << j << " ����� " << temp << endl;
//		}
//		catch (safearray::Range) {
//			cout << "\n���������� - ��������� ������!"<<endl;
//
//		}
//	}
//	return 0;
//
//
//
//}
//


///////////////////////////////////// 2222222222
//
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//class Tatra;
//
//class SpeedExp {};
//
//class Kamaz {
//private:
//    std::string name;
//    double speed;
//
//public:
//    Kamaz(const std::string& truckName, double truckSpeed) : name(truckName), speed(truckSpeed) {
//        if (speed < 0.0) {
//            throw SpeedExp();
//        }
//    }
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
//
//};
//
//class Tatra {
//private:
//    std::string name;
//    double speed;
//private:
//    double getSpeed() const {
//        
//        return speed;
//    }
//public:
//    Tatra(const std::string& truckName, double truckSpeed) : name(truckName), speed(truckSpeed) {
//        if (speed < 0.0) {
//            throw SpeedExp();
//        }
//    }
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
//    try {
//        Kamaz kamaz("Master", 80.0);
//        Tatra tatra("Phoenix", 75.0);
//
//        kamaz.displayInfo();
//        tatra.displayInfo();
//        int result = FrCreater(kamaz, tatra);
//
//        if (result == 1) {
//            std::cout << "Kamaz �������!\n";
//        }
//        else if (result == -1) {
//            std::cout << "Tatra �������!\n";
//        }
//        else {
//            std::cout << "�����! �������� �����.\n";
//        }
//    
//    }
//    catch (SpeedExp) {
//        std::cerr << "������ - ������������� �������� �����������" << std::endl;
//    }
//
//    return 0;
//}
