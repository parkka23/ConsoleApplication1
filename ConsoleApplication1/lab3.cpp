// Task 1
//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <chrono>
//#include <thread>
//
//class Timer {
//private:
//    int seconds;
//
//public:
//    Timer(int initialSeconds) : seconds(initialSeconds) {}
//
//    Timer(const std::string& timeString) {
//        parseTimeString(timeString);
//    }
//
//    Timer(int minutes, int seconds) : seconds(minutes * 60 + seconds) {}
//
//    void run() {
//        while (seconds > 0) {
//            displayTime();
//            delay(1000);  // Delay for 1000 milliseconds (1 second)
//            seconds--;
//        }
//
//        std::cout << "Timer expired. BEEP BEEP BEEP!\n";
//        playSound();
//    }
//
//private:
//    void parseTimeString(const std::string& timeString) {
//        size_t pos1 = timeString.find(':');
//        size_t pos2 = timeString.rfind(':');
//
//        int hours = std::stoi(timeString.substr(0, pos1));
//        int minutes = std::stoi(timeString.substr(pos1 + 1, pos2 - pos1 - 1));
//        int secs = std::stoi(timeString.substr(pos2 + 1));
//
//        seconds = hours * 3600 + minutes * 60 + secs;
//    }
//
//    void displayTime() const {
//        int hours = seconds / 3600;
//        int minutes = (seconds % 3600) / 60;
//        int secs = seconds % 60;
//
//        std::cout << "Time Remaining: " << hours << "h " << minutes << "m " << secs << "s\n";
//    }
//
//    // Delay function without using <thread>
//    void delay(int milliseconds) {
//        auto start = std::chrono::steady_clock::now();
//        while (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count() < milliseconds);
//    }
//
//    // Function to play a sound (Windows-specific)
//    void playSound() const {
//        // Beep sound on Windows
//        Beep(1000, 500);  // Beep at 1000 Hz for 500 milliseconds
//    }
//};
//
//int main() {
//    Timer timer1(5);
//    Timer timer2("00:00:05");
//    Timer timer3(0, 5);
//
//    timer1.run();
//    timer2.run();
//    timer3.run();
//
//    return 0;
//}


///////////////////////////////////////////

// Task 2
//#include <iostream>
//#include <string>
//
//class Nomenclature {
//private:
//    std::string itemName;
//    double wholesalePrice;
//    double retailMarkup;
//    int stockQuantity;
//
//public:
//    Nomenclature(const std::string& name, double wholesale, double markup, int quantity)
//        : itemName(name), wholesalePrice(wholesale), retailMarkup(markup), stockQuantity(quantity) {}
//
//    ~Nomenclature() {
//        std::cout << "Object for item '" << itemName << "' has been destroyed.\n";
//    }
//
//    double calculateNetIncome(int soldQuantity) const {
//        double netIncome = (retailMarkup - wholesalePrice) * soldQuantity;
//        return netIncome;
//    }
//
//    void displayItemDetails() const {
//        std::cout << "Item Name: " << itemName << "\n";
//        std::cout << "Wholesale Price: " << wholesalePrice << "\n";
//        std::cout << "Retail Markup: " << retailMarkup << "\n";
//        std::cout << "Stock Quantity: " << stockQuantity << "\n";
//    }
//};
//
//int main() {
//    Nomenclature item("Product", 50, 70, 100);
//
//    std::cout << "Item Details:\n";
//    item.displayItemDetails();
//
//    int soldQuantity = 20;
//    double netIncome = item.calculateNetIncome(soldQuantity);
//    std::cout << "Net Income for selling " << soldQuantity << " items: " << netIncome << "\n";
//
//    return 0;
//}

///////////////////////////////

// Task 3
//#include <iostream>
//#include <string>
//#include <ctime>
//
//class Soft {
//private:
//    std::string programName;
//    std::string developer;
//    double occupiedSpace;
//    time_t licenseExpirationDate;
//
//public:
//    Soft(const std::string& name, const std::string& dev, double space, const std::string& expirationDate)
//        : programName(name), developer(dev), occupiedSpace(space) {
//        tm expirationDateStruct = parseDate(expirationDate);
//        licenseExpirationDate = mktime(&expirationDateStruct);
//    }
//
//    ~Soft() {
//        std::cout << "Software for program '" << programName << "' has been uninstalled.\n";
//    }
//
//    /*int daysUntilExpiration() const {
//        time_t currentTime;
//        time(&currentTime);
//
//        double secondsRemaining = difftime(licenseExpirationDate, currentTime);
//        int daysRemaining = static_cast<int>(secondsRemaining / (60 * 60 * 24));
//
//        return daysRemaining;
//    }*/
//    void daysUntilExpiration() const {
//        time_t currentTime;
//        time(&currentTime);
//
//        tm currentLocalTime;
//        localtime_s(&currentLocalTime, &currentTime);
//
//        currentLocalTime.tm_hour = 0;
//        currentLocalTime.tm_min = 0;
//        currentLocalTime.tm_sec = 0;
//
//        double secondsRemaining = difftime(licenseExpirationDate, mktime(&currentLocalTime));
//        int daysRemaining = static_cast<int>(secondsRemaining / (60 * 60 * 24));
//
//        if (daysRemaining < 0) {
//            std::cout << "License already expired\n";
//        }
//        else if (daysRemaining == 0) {
//            std::cout << "License expires today\n";
//        }
//        else {
//            std::cout << "Days Until License Expiration: " << daysRemaining << " days\n";
//        }
//    }
//
//    void displaySoftwareDetails() const {
//        std::cout << "Software Details:\n";
//        std::cout << "Program Name: " << programName << "\n";
//        std::cout << "Developer: " << developer << "\n";
//        std::cout << "Occupied Space: " << occupiedSpace << " GB\n";
//
//        tm expirationDateStruct;
//        localtime_s(&expirationDateStruct, &licenseExpirationDate);
//        std::cout << "License Expiration Date: " << expirationDateStruct.tm_mday << "/"
//            << expirationDateStruct.tm_mon + 1 << "/" << expirationDateStruct.tm_year + 1900 << "\n";
//    }
//
//private:
//    tm parseDate(const std::string& dateString) const {
//        tm result = {};
//        sscanf_s(dateString.c_str(), "%d/%d/%d", &result.tm_mday, &result.tm_mon, &result.tm_year);
//        result.tm_mon -= 1;  
//        result.tm_year -= 1900;  
//        return result;
//    }
//};
//
//int main() {
//    Soft software("MySoftware", "It Company", 2.5, "15/02/2023");
//    software.displaySoftwareDetails();
//   software.daysUntilExpiration();
//   std::cout << "\n";
//   ///
//   Soft software2("MySoftware2", "It Company", 2.5, "08/02/2024");
//   software2.displaySoftwareDetails();
//   software2.daysUntilExpiration();
//   std::cout << "\n";
//
//   ///
//   Soft software3("MySoftware3", "It Company", 2.5, "15/02/2024");
//   software3.displaySoftwareDetails();
//   software3.daysUntilExpiration();
//    
//
//    return 0;
//}
