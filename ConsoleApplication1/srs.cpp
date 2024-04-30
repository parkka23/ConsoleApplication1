//
//
//#include <iostream>
//#include <string>
//#include <map>
//#include <vector>
//
//
//class Book {
//private:
//    std::string authors;
//    std::string title;
//    std::string publisher;
//    std::string origin;
//    bool available;
//    int rating; // subjective rating of the book
//
//public:
//    // Constructor
//    Book(std::string authors, std::string title, std::string publisher, std::string category, std::string origin, bool available, int rating)
//        : authors(authors), title(title), publisher(publisher), origin(origin), available(available), rating(rating) {}
//
//    // Getter methods
//    std::string getAuthors() const { return authors; }
//    std::string getTitle() const { return title; }
//    std::string getPublisher() const { return publisher; }
//    std::string getOrigin() const { return origin; }
//    bool isAvailable() const { return available; }
//    int getRating() const { return rating; }
//
//    // Setter methods (if needed)
//    void setAvailable(bool available) { this->available = available; }
//
//    // Display book information
//    void displayInfo() const {
//        std::cout << "Title: " << title << std::endl;
//        std::cout << "Authors: " << authors << std::endl;
//        std::cout << "Publisher: " << publisher << std::endl;
//        std::cout << "Origin: " << origin << std::endl;
//        std::cout << "Availability: " << (available ? "Available" : "Not Available") << std::endl;
//        std::cout << "Rating: " << rating << std::endl;
//    }
//};
//
//class LibrarySection {
//private:
//    std::string name;
//    std::vector<Book> books;
//
//public:
//    // Constructor
//    LibrarySection(std::string name) : name(name) {}
//
//    // Getter method
//    std::string getName() const { return name; }
//
//    // Method to add a book to the section
//    void addBook(const Book& book) { books.push_back(book); }
//
//    // Method to display all books in the section
//    void displayBooks() const {
//        std::cout << "Books in the " << name << " section:" << std::endl;
//        for (const auto& book : books) {
//            book.displayInfo();
//            std::cout << std::endl;
//        }
//    }
//};
//
//class Library {
//private:
//    std::map<std::string, LibrarySection> sections;
//
//public:
//    // Method to add a new section to the library
//    void addSection(const std::string& sectionName) {
//        sections.emplace(sectionName, LibrarySection(sectionName));
//    }
//
//    // Method to add a book to a specific section
//    void addBookToSection(const std::string& sectionName, const Book& book) {
//        auto it = sections.find(sectionName);
//        if (it != sections.end()) {
//            it->second.addBook(book);
//        }
//        else {
//            std::cout << "Section '" << sectionName << "' not found." << std::endl;
//        }
//    }
//
//    // Method to display all sections in the library
//    void displaySections() const {
//
//        for (const auto& pair : sections) {
//            std::cout << "- " << pair.first << std::endl;
//        }
//    }
//
//    // Method to display all books in a specific section
//    void displayBooksInSection(const std::string& sectionName) const {
//        auto it = sections.find(sectionName);
//        if (it != sections.end()) {
//            it->second.displayBooks();
//        }
//        else {
//            std::cout << "Section '" << sectionName << "' not found." << std::endl;
//        }
//    }
//
//    // Getter method to retrieve all sections
//    std::map<std::string, LibrarySection> getSections() const {
//        return sections;
//    }
//};
//
//int main() {
//    // Создаем объект библиотеки
//    Library library;
//
//    // Добавляем разделы библиотеки
//    library.addSection("Special Literature");
//    library.addSection("Hobby");
//    library.addSection("Home Economics");
//    library.addSection("Fiction");
//
//    // Создаем несколько книг
//    Book book1("John Smith", "Introduction to Quantum Mechanics", "ABC Publishing", "Special Literature", "USA", true, 5);
//    Book book2("Alice Johnson", "Gardening for Beginners", "XYZ Books", "Hobby", "UK", true, 4);
//    Book book3("Emily White", "Cooking Basics", "Cooking Press", "Home Economics", "Canada", false, 3);
//    Book book4("Michael Brown", "The Great Gatsby", "Classic Publishing", "Fiction", "USA", true, 5);
//
//    // Добавляем книги в соответствующие разделы библиотеки
//    library.addBookToSection("Special Literature", book1);
//    library.addBookToSection("Hobby", book2);
//    library.addBookToSection("Home Economics", book3);
//    library.addBookToSection("Fiction", book4);
//
//    // Отображаем разделы библиотеки
//    std::cout << "Library Sections:" << std::endl;
//    library.displaySections();
//
//    // Отображаем книги в разделе "Hobby"
//    std::cout << "\nBooks in the 'Hobby' section:" << std::endl;
//    library.displayBooksInSection("Hobby");
//
//    // Пример запроса книг по произвольному запросу
//    // (в данном случае просто отображаем информацию о первой книге)
//    std::cout << "\nInformation about the first book:" << std::endl;
//    book1.displayInfo();
//
//    // Инвентаризация библиотеки
//    // (отображаем все книги во всех разделах)
//    std::cout << "\nInventory of the library:" << std::endl;
//    std::map<std::string, LibrarySection> sections = library.getSections();
//    for (const auto& pair : sections) {
//        std::cout << "Books in the '" << pair.first << "' section:" << std::endl;
//        pair.second.displayBooks();
//        std::cout << std::endl;
//    }
//
//    return 0;
//}
