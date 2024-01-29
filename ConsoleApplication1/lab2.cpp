// Lab 1 
// Task 1
//#include <string>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Aeroflot {
//private:
//    int flightNumber;
//    string departureCity;
//    string destinationCity;
//    string departureTime;
//    string arrivalTime;
//    int registrationSection;
//
//public:
//    Aeroflot(int number, const string& departure, const string& destination,
//        const string& arrival, const string& departureTime, int section)
//        : flightNumber(number), departureCity(departure), destinationCity(destination),
//        arrivalTime(arrival), departureTime(departureTime), registrationSection(section) {}
//
//    void inputFlightData() {
//        cout << "Enter Flight Number: ";
//        cin >> flightNumber;
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
//
//        cout << "Enter Departure City: ";
//        getline(cin, departureCity);
//
//        cout << "Enter Destination City: ";
//        getline(cin, destinationCity);
//
//        cout << "Enter Arrival Time: ";
//        getline(cin, arrivalTime);
//
//        cout << "Enter Departure Time: ";
//        getline(cin, departureTime);
//
//        cout << "Enter Registration Section: ";
//        cin >> registrationSection;
//    }
//
//    void displayFlightData() const {
//        cout << flightNumber << "\t\t" << departureCity << "\t\t" << destinationCity << "\t"
//            << arrivalTime << "\t\t" << departureTime << "\t\t" << registrationSection << endl;
//    }
//
//    const string& getDestinationCity() const {
//        return destinationCity;
//    }
//};
//
//bool compareFlights(const Aeroflot& flight1, const Aeroflot& flight2) {
//    return flight1.getDestinationCity() < flight2.getDestinationCity();
//}
//
//int main() {
//    vector<Aeroflot> flights;  
//
//    int numFlights;
//    cout << "Enter the number of flights: ";
//    cin >> numFlights;
//
//    for (int i = 0; i < numFlights; ++i) {
//        cout << "\nEnter details for Flight " << i + 1 << ":\n";
//        Aeroflot flight(0, "", "", "", "", 0);  
//        flight.inputFlightData();  
//        flights.push_back(flight);  
//    }
//
//    sort(flights.begin(), flights.end(), compareFlights);
//
//    cout << "\nFlight Number\tDeparture City\tDestination City\tArrival Time\tDeparture Time\tRegistration Section\n";
//    for (const auto& flight : flights) {
//        flight.displayFlightData();
//    }
//
//    if (flights.empty()) {
//        cout << "\nNo flights available.\n";
//    }
//
//    return 0;
//}

////////////////////////////////////////////////////

// Task 2
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <iomanip> 
//#include <sstream> 
//using namespace std;
//class Student {
//private:
//    string lastName;
//    string firstName;
//    string birthDate;
//    string phoneNumber;
//
//public:
//    Student(const string& last, const string& first, const string& birth, const string& phone)
//        : lastName(last), firstName(first), birthDate(birth), phoneNumber(phone) {}
//
//    const string& getLastName() const {
//        return lastName;
//    }
//
//    const string& getFirstName() const {
//        return firstName;
//    }
//
//    const string& getBirthDate() const {
//        return birthDate;
//    }
//
//    const string& getPhoneNumber() const {
//        return phoneNumber;
//    }
//
//    void displayStudent() const {
//        cout << "Last Name: " << lastName << " | First Name: " << firstName
//            << " | Birth Date: " << birthDate << " | Phone Number: " << phoneNumber << endl;
//    }
//};
//
//class StudentGroup {
//private:
//    vector<Student> students;
//
//public:
//    void addStudent(const string& last, const string& first, const string& birth, const string& phone) {
//        students.emplace_back(last, first, birth, phone);
//    }
//
//    void removeStudent(const string& lastName) {
//        auto it = remove_if(students.begin(), students.end(),
//            [lastName](const Student& student) { return student.getLastName() == lastName; });
//
//        students.erase(it, students.end());
//    }
//
//    void displayAllStudents() const {
//        if (students.empty()) {
//            cout << "No students in the group.\n";
//        }
//        else {
//            for (const auto& student : students) {
//                student.displayStudent();
//            }
//        }
//    }
//
//    // search
//
//    void searchByLastName(const string& lastName) const {
//        auto it = find_if(students.begin(), students.end(),
//            [lastName](const Student& student) { return student.getLastName() == lastName; });
//
//        if (it != students.end()) {
//            cout << "Student found:\n";
//            it->displayStudent();
//        }
//        else {
//            cout << "Student not found.\n";
//        }
//    }
//    void searchByFirstName(const string& firstName) const {
//        auto it = find_if(students.begin(), students.end(),
//            [firstName](const Student& student) { return student.getFirstName() == firstName; });
//
//        if (it != students.end()) {
//            cout << "Student found:\n";
//            it->displayStudent();
//        }
//        else {
//            cout << "Student not found.\n";
//        }
//    }
//    void searchByBirthDate(const string& birthDate) const {
//        auto it = find_if(students.begin(), students.end(),
//            [birthDate](const Student& student) { return student.getBirthDate() == birthDate; });
//
//        if (it != students.end()) {
//            cout << "Student found:\n";
//            it->displayStudent();
//        }
//        else {
//            cout << "Student not found.\n";
//        }
//    }
//    void searchByPhoneNumber(const string& phoneNumber) const {
//        auto it = find_if(students.begin(), students.end(),
//            [phoneNumber](const Student& student) { return student.getPhoneNumber() == phoneNumber; });
//
//        if (it != students.end()) {
//            cout << "Student found:\n";
//            it->displayStudent();
//        }
//        else {
//            cout << "Student not found.\n";
//        }
//    }
//
//
//    // sort
//    void sortByLastName() {
//        sort(students.begin(), students.end(),
//            [](const Student& s1, const Student& s2) { return s1.getLastName() < s2.getLastName(); });
//    }
//    void sortByFirstName() {
//        sort(students.begin(), students.end(),
//            [](const Student& s1, const Student& s2) { return s1.getFirstName() < s2.getFirstName(); });
//    }
//    void sortByBirthDate() {
//        sort(students.begin(), students.end(), [](const Student& s1, const Student& s2) {
//            std::tm tm1 = {}, tm2 = {};
//        std::istringstream ss1(s1.getBirthDate()), ss2(s2.getBirthDate());
//
//        ss1 >> std::get_time(&tm1, "%Y-%m-%d");
//        ss2 >> std::get_time(&tm2, "%Y-%m-%d");
//
//        return std::mktime(&tm1) < std::mktime(&tm2);
//            });
//    }
//
//    void sortByPhoneNumber() {
//        sort(students.begin(), students.end(),
//            [](const Student& s1, const Student& s2) { return s1.getPhoneNumber() < s2.getPhoneNumber(); });
//    }
//};
//
//int main() {
//    StudentGroup group;
//
//    int choice;
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Add Student\n";
//        cout << "2. Remove Student\n";
//        cout << "3. Display All Students\n";
//        cout << "4. Search Student\n";
//        cout << "5. Sort Students\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            string last, first, birth, phone;
//            cout << "Enter Last Name: ";
//            cin >> last;
//            cout << "Enter First Name: ";
//            cin >> first;
//            cout << "Enter Birth Date: ";
//            cin >> birth;
//            cout << "Enter Phone Number: ";
//            cin >> phone;
//
//            group.addStudent(last, first, birth, phone);
//            break;
//        }
//        case 2: {
//            string lastName;
//            cout << "Enter Last Name of the Student to Remove: ";
//            cin >> lastName;
//            group.removeStudent(lastName);
//            break;
//        }
//        case 3:
//            group.displayAllStudents();
//            break;
//        case 4: {
//            int searchChoice;
//            cout << "\nSearch Options:\n";
//            cout << "1. By Last Name\n";
//            cout << "2. By First Name\n";
//            cout << "3. By Birth Date\n";
//            cout << "4. By Phone Number\n";
//            cout << "Enter your choice: ";
//            cin >> searchChoice;
//
//            switch (searchChoice) {
//            case 1: {
//                string lastName;
//                cout << "Enter Last Name of the Student to Search: ";
//                cin >> lastName;
//                group.searchByLastName(lastName);
//                break;
//            }
//            case 2: {
//                string firstName;
//                cout << "Enter First Name of the Student to Search: ";
//                cin >> firstName;
//                group.searchByFirstName(firstName);
//                break;
//            }
//            case 3: {
//                string birthDate;
//                cout << "Enter Birth Date of the Student to Search: ";
//                cin >> birthDate;
//                group.searchByBirthDate(birthDate);
//                break;
//            }
//            case 4: {
//                string phoneNumber;
//                cout << "Enter Phone Number of the Student to Search: ";
//                cin >> phoneNumber;
//                group.searchByPhoneNumber(phoneNumber);
//                break;
//            }
//            default:
//                cout << "Invalid choice. Please try again.\n";
//            }
//            break;
//        }
//        case 5: {
//            int sortChoice;
//            cout << "\nSort Options:\n";
//            cout << "1. By Last Name\n";
//            cout << "2. By First Name\n";
//            cout << "3. By Birth Date\n";
//            cout << "4. By Phone Number\n";
//            cout << "Enter your choice: ";
//            cin >> sortChoice;
//
//            switch (sortChoice) {
//            case 1:
//                group.sortByLastName();
//                cout << "Students sorted by Last Name.\n";
//                break;
//            case 2:
//                group.sortByFirstName();
//                cout << "Students sorted by First Name.\n";
//                break;
//            case 3:
//                group.sortByBirthDate();
//                cout << "Students sorted by Birth Date.\n";
//                break;
//            case 4:
//                group.sortByPhoneNumber();
//                cout << "Students sorted by Phone Number.\n";
//                break;
//            default:
//                cout << "Invalid choice. Please try again.\n";
//            }
//            break;
//        }
//        case 0:
//            cout << "Exiting...\n";
//            break;
//        default:
//            cout << "Invalid choice. Please try again.\n";
//        }
//    } while (choice != 0);
//
//    return 0;
//}

///////////////////////////////////////////////////////
// Task 3
#include <iostream>
#include <fstream>
#include <stack>
#include <string>
using namespace std;
class TrainSortingNode {
private:
    std::stack<int> leftDirection;  
    std::stack<int> rightDirection; 

public:
    void addWagon(int wagon, bool isLeftDirection) {
        if (isLeftDirection) {
            leftDirection.push(wagon);
            std::cout << "Added wagon " << wagon << " to the left direction.\n";
        }
        else {
            rightDirection.push(wagon);
            std::cout << "Added wagon " << wagon << " to the right direction.\n";
        }
    }

    void removeWagon(bool isLeftDirection) {
        if (isLeftDirection) {
            if (!leftDirection.empty()) {
                std::cout << "Removed wagon " << leftDirection.top() << " from the left direction.\n";
                leftDirection.pop();
            }
            else {
                std::cout << "Left direction is empty. Cannot remove wagon.\n";
            }
        }
        else {
            if (!rightDirection.empty()) {
                std::cout << "Removed wagon " << rightDirection.top() << " from the right direction.\n";
                rightDirection.pop();
            }
            else {
                std::cout << "Right direction is empty. Cannot remove wagon.\n";
            }
        }
    }

    void displayContents() const {
        cout << "Left Direction: ";
        displayStackContents(leftDirection);
        cout << "Right Direction: ";
        displayStackContents(rightDirection);
    }

private:
    // Helper method to display the contents of a stack
    void displayStackContents(const stack<int>& directionStack) const {
        if (directionStack.empty()) {
            cout << "Empty";
        }
        else {
            stack<int> tempStack = directionStack;
            while (!tempStack.empty()) {
                cout << tempStack.top() << " ";
                tempStack.pop();
            }
        }
        cout << "\n";
    }
};

int main() {
    TrainSortingNode sortingNode;

    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Add Wagon\n";
        std::cout << "2. Remove Wagon\n";
        std::cout << "3. Display Contents\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int wagon, directionChoice;
            std::cout << "Enter Wagon Number: ";
            std::cin >> wagon;
            std::cout << "Select Direction (1. Left / 2. Right): ";
            std::cin >> directionChoice;

            bool isLeftDirection = (directionChoice == 1);
            sortingNode.addWagon(wagon, isLeftDirection);
            break;
        }
        case 2: {
            int directionChoice;
            std::cout << "Select Direction to Remove Wagon (1. Left / 2. Right): ";
            std::cin >> directionChoice;

            bool isLeftDirection = (directionChoice == 1);
            sortingNode.removeWagon(isLeftDirection);
            break;
        }
        case 3:
            sortingNode.displayContents();
            break;
        case 0:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

     

    return 0;
}
