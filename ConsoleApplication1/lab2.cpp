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
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student {
private:
    string lastName;
    string firstName;
    string birthDate;
    string phoneNumber;

public:
    Student(const string& last, const string& first, const string& birth, const string& phone)
        : lastName(last), firstName(first), birthDate(birth), phoneNumber(phone) {}

    const string& getLastName() const {
        return lastName;
    }

    void displayStudent() const {
        cout << "Last Name: " << lastName << "\tFirst Name: " << firstName
            << "\tBirth Date: " << birthDate << "\tPhone Number: " << phoneNumber << endl;
    }
};

class StudentGroup {
private:
    vector<Student> students;

public:
    void addStudent(const string& last, const string& first, const string& birth, const string& phone) {
        students.emplace_back(last, first, birth, phone);
    }

    void removeStudent(const string& lastName) {
        auto it = remove_if(students.begin(), students.end(),
            [lastName](const Student& student) { return student.getLastName() == lastName; });

        students.erase(it, students.end());
    }

    void displayAllStudents() const {
        if (students.empty()) {
            cout << "No students in the group.\n";
        }
        else {
            for (const auto& student : students) {
                student.displayStudent();
            }
        }
    }

    void searchStudent(const string& lastName) const {
        auto it = find_if(students.begin(), students.end(),
            [lastName](const Student& student) { return student.getLastName() == lastName; });

        if (it != students.end()) {
            cout << "Student found:\n";
            it->displayStudent();
        }
        else {
            cout << "Student not found.\n";
        }
    }

    void sortByLastName() {
        sort(students.begin(), students.end(),
            [](const Student& s1, const Student& s2) { return s1.getLastName() < s2.getLastName(); });
    }
};

int main() {
    StudentGroup group;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Display All Students\n";
        cout << "4. Search Student\n";
        cout << "5. Sort Students by Last Name\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string last, first, birth, phone;
            cout << "Enter Last Name: ";
            cin >> last;
            cout << "Enter First Name: ";
            cin >> first;
            cout << "Enter Birth Date: ";
            cin >> birth;
            cout << "Enter Phone Number: ";
            cin >> phone;

            group.addStudent(last, first, birth, phone);
            break;
        }
        case 2: {
            string lastName;
            cout << "Enter Last Name of the Student to Remove: ";
            cin >> lastName;
            group.removeStudent(lastName);
            break;
        }
        case 3:
            group.displayAllStudents();
            break;
        case 4: {
            string lastName;
            cout << "Enter Last Name of the Student to Search: ";
            cin >> lastName;
            group.searchStudent(lastName);
            break;
        }
        case 5:
            group.sortByLastName();
            cout << "Students sorted by Last Name.\n";
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
