//#include <iostream>
//#include <string>
//
//class Employee {
//private:
//    std::string name;
//    std::string position;
//    double salary;
//
//public:
//    // Default constructor
//    Employee() : name(""), position(""), salary(0.0) {}
//
//    // Parameterized constructor
//    Employee(const std::string& empName, const std::string& empPosition, double empSalary)
//        : name(empName), position(empPosition), salary(empSalary) {}
//
//    // Destructor
//    virtual ~Employee() {}
//
//    // Calculate annual salary
//    double calculateAnnualSalary() const {
//        return salary * 12;
//    }
//
//    // Display information about the employee
//    void displayInfo() const {
//        std::cout << "Name: " << name << std::endl;
//        std::cout << "Position: " << position << std::endl;
//        std::cout << "Monthly Salary: $" << salary << std::endl;
//        std::cout << "Annual Salary: $" << calculateAnnualSalary() << std::endl;
//    }
//};
//
//class Manager : private Employee {
//private:
//    double annual_bonus;
//    std::string company_car;
//    int stock_options;
//
//public:
//    // Default constructor
//    Manager() : Employee(), annual_bonus(0.0), company_car(""), stock_options(0) {}
//
//    // Parameterized constructor
//    Manager(const std::string& empName, const std::string& empPosition, double empSalary,
//            double bonus, const std::string& car, int options)
//        : Employee(empName, empPosition, empSalary), annual_bonus(bonus),
//          company_car(car), stock_options(options) {}
//
//    // Destructor
//    ~Manager() {}
//
//    // Display information about the manager
//    void displayManagerInfo() const {
//        displayInfo();  // Inherited from the base class
//        std::cout << "Annual Bonus: $" << annual_bonus << std::endl;
//        std::cout << "Company Car: " << company_car << std::endl;
//        std::cout << "Stock Options: " << stock_options << std::endl;
//    }
//};
//
//int main() {
//    // Test Employee class
//    Employee employee("John Doe", "Developer", 5000.0);
//    employee.displayInfo();
//
//    std::cout << "\n";
//
//    // Test Manager class
//    Manager manager("Jane Smith", "Manager", 8000.0, 2000.0, "Company Car", 100);
//    manager.displayManagerInfo();
//
//    return 0;
//}
