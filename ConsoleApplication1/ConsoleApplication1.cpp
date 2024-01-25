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

//int main()
//{
//    Product product1;
//    product1.id = 1;
//    product1.name = "Samsung Galaxy Book Pro";
//    product1.price = 795.40;
//    product1.print();
//}

// Lab 1
// Task 1 - 2 
//double power(double n, int p=2);
//
//int main() {
//    double n;
//    char n2;
//    int n3;
//    long n4;
//    float n5;
//    int p;
//    cout << "---------- Task 1 ----------\n";
//    cout << "Enter base: \n";
//    cin >> n;
//    cout << "Enter exponent: \n";
//    cin >> p;
//    double result = power(n, p);
//    cout<<"Result: "<<result<<"\n\n";
//
//    double defResult = power(n);
//    cout << "Default result with exponent 2: " << defResult << "\n\n";
//
//
//    cout << "---------- Task 2 ----------\n";
//    cout << "char\n";
//    cout << "Enter base: \n";
//    cin >> n2;
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
//double power(char n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}
//double power(int n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}
//double power(long n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}
//double power(float n, int p) {
//    double result = 1.0;
//    for (int i = 0; i < p; i++) {
//        result *= n;
//    }
//    return result;
//}

// Task 3
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

    void countEmployees() const {
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
    }

    for (const auto& factory : factories) {
        factory.countEmployees();
    }

    return 0;
}