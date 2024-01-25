#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

//class Product {
//public:
//    int id;
//    string name;
//    double price;
//
//    void print() {
//        cout << "id: " << id << "\n";
//        cout << "name: " << name<<"\n";
//        cout << "price: " << price;
//
//    }
//
//};
//
//int main()
//{
//    Product product1;
//    product1.id = 1;
//    product1.name = "Samsung Galaxy Book Pro";
//    product1.price = 795.40;
//    product1.print();
//}

 /*Lab 1
 Task 1 - 2*/ 
//double power(double n, int p=2);
//
//int main() {
//    double n;
//    char n2;
//    int n3;
//    long n4;
//    float n5;
//    short n6;
//    int p;
//    double result;
//    cout << "---------- Task 1 ----------\n";
//    cout << "Enter base: \n";
//    cin >> n;
//
//    cout << "Do you want to enter the exponent? (Enter 0 for default, any other number for custom): ";
//    cin >> p;
//
//    if (p != 0) {
//        cout << "Enter exponent: ";
//        cin >> p;
//        result = power(n, p);
//    }
//    else result = power(n);
//    cout<<"Result: "<<result<<"\n\n";
//
//
//    cout << "---------- Task 2 ----------\n";
//    cout << "char\n";
//    cout << "Enter base: \n";
//    cin >> n2;
//    cout << "ASCII value of entered char: " << static_cast<int>(n2) << "\n";
//    cout << "Enter exponent: \n";
//    cin >> p;
//     result = power(n2, p);
//    cout << "Result: " << result << "\n\n";
//
//    cout << "int\n";
//    cout << "Enter base: \n";
//    cin >> n3;
//    cout << "Enter exponent: \n";
//    cin >> p;
//    result = power(n3, p);
//    cout << "Result: " << result << "\n\n";
//
//    cout << "short\n";
//    cout << "Enter base: \n";
//    cin >> n6;
//    cout << "Enter exponent: \n";
//    cin >> p;
//    result = power(n6, p);
//    cout << "Result: " << result << "\n\n";
//
//
//    cout << "long\n";
//    cout << "Enter base: \n";
//    cin >> n4;
//    cout << "Enter exponent: \n";
//    cin >> p;
//    result = power(n4, p);
//    cout << "Result: " << result << "\n\n";
//
//    cout << "float\n";
//    cout << "Enter base: \n";
//    cin >> n5;
//    cout << "Enter exponent: \n";
//    cin >> p;
//    result = power(n5, p);
//    cout << "Result: " << result << "\n\n";
//
//    return 0;
//}
//
//double power(double n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}
//
//double power(char n, int p=2) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}
//double power(int n, int p=2) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}
//double power(short n, int p = 2) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}
//double power(long n, int p=2) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}
//double power(float n, int p=2) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}

 //Task 3
struct Employee {
public:
	    int id;
	    string surname;
		int age;
		string position;
		double averageSalary;

	
	    void print() {
	        cout << "id: " << id << "\n";
	        cout << "surname: " << surname<<"\n";
			cout << "age: " << age << "\n";
	        cout << "position: " << position << "\n";
			cout << "average salary: " << averageSalary << "\n";
	
	    }

};

struct Factory {
    string name;
    vector<Employee> employees;

    void inputEmployees() {
        int n;
        cout << "Enter the number of employees at the " << name << " factory: ";
        cin >> n;

        for (int i = 0; i < n; ++i) {
            Employee employee;

            cout << "Enter information for employee " << i + 1 << ":\n";
            cout << "ID: ";
            cin >> employee.id;
            cout << "Surname: ";
            cin >> employee.surname;
            cout << "Age: ";
            cin >> employee.age;
            cout << "Position: ";
            cin >> employee.position;
            cout << "Average Salary: ";
            cin >> employee.averageSalary;

            employees.push_back(employee);
        }
    }

    pair<int, int>  countEmployees() const {
        int countLocksmith = 0;
        int countTurner = 0;

        for (const auto& employee : employees) {
            if (employee.position == "locksmith") {
                countLocksmith++;
            }
            else if (employee.position == "turner") {
                countTurner++;
            }
        }

        cout << "Number of locksmiths at the " << name << " factory: " << countLocksmith << endl;
        cout << "Number of turners at the " << name << " factory: " << countTurner << endl;
        return { countLocksmith, countTurner };
    }
};

int main() {
    setlocale(LC_ALL, "English");

    const int N = 2;
    vector<Factory> factories(N);

    for (int i = 0; i < N; ++i) {
        cout << "Enter the name of factory " << i + 1 << ": ";
        cin >> factories[i].name;
        factories[i].inputEmployees();
        cout << endl;
    }
    int locksmith=0, turner=0;
   
    for (const auto& factory : factories) {
        pair<int, int> counts = factory.countEmployees();
        locksmith += counts.first;
        turner += counts.second;
        cout << endl;
    }
    cout << "Number of locksmiths: " << locksmith << endl;
    cout << "Number of turners: " << turner << endl;

    return 0;
}