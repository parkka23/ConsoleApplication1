//#include <iostream>
//
//template<typename T>
//T findMax(const T* arr, int size) {
//    T max = arr[0];
//    for (int i = 1; i < size; ++i) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//template<typename T>
//void sortArray(T* arr, int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if (arr[j] > arr[j + 1]) {
//                T temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    int intArr[] = { 0, 7, 1, -9, 5 };
//    int intSize = sizeof(intArr) / sizeof(int);
//    for (int i = 0; i < intSize; ++i) {
//        std::cout << intArr[i] << " ";
//    }
//    std::cout << std::endl << "Max of intArr: " << findMax(intArr, intSize) << std::endl;
//    sortArray(intArr, intSize);
//    std::cout << "Sorted intArr: ";
//    for (int i = 0; i < intSize; ++i) {
//        std::cout << intArr[i] << " ";
//    }
//    std::cout << std::endl << std::endl;
//
//    double doubleArr[] = { 3.5, 7.2, 1.8, 9.1, 5.4 };
//    int doubleSize = sizeof(doubleArr) / sizeof(double);
//    for (int i = 0; i < doubleSize; ++i) {
//        std::cout << doubleArr[i] << " ";
//    }
//    std::cout << std::endl << "Max of doubleArr: " << findMax(doubleArr, doubleSize) << std::endl;
//    sortArray(doubleArr, doubleSize);
//    std::cout << "Sorted doubleArr: ";
//    for (int i = 0; i < doubleSize; ++i) {
//        std::cout << doubleArr[i] << " ";
//    }
//    std::cout << std::endl << std::endl;
//
//
//    char charArr[] = { 'z', 'a', 'b', 'c', 'x' };
//    int charSize = sizeof(charArr) / sizeof(char);
//    for (int i = 0; i < charSize; ++i) {
//        std::cout << charArr[i] << " ";
//    }
//    std::cout << std::endl << "Max of charArr: " << findMax(charArr, charSize) << std::endl;
//    sortArray(charArr, charSize);
//    std::cout << "Sorted charArr: ";
//    for (int i = 0; i < charSize; ++i) {
//        std::cout << charArr[i] << " ";
//    }
//    std::cout << std::endl;
//
//
//    return 0;
//}

//
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//template<typename T, size_t N>
//class Array {
//private:
//    T array1[N];
//    T array2[N];
//
//public:
//    Array() {
//        srand(time(0));
//       
//        for (size_t i = 0; i < N; ++i) {
//            array1[i] = static_cast<T>(1 + rand() % 100);
//            array2[i] = static_cast<T>(1 + rand() % 100);
//        }
//    }
//
//    T sum() const {
//        T sum = 0;
//        for (size_t i = 0; i < N; ++i) {
//            sum += array1[i] + array2[i];
//        }
//        return sum;
//    }
//    void printArrays() const {
//        std::cout << "Array 1: ";
//        for (size_t i = 0; i < N; ++i) {
//            std::cout << array1[i] << " ";
//        }
//        std::cout << std::endl;
//
//        std::cout << "Array 2: ";
//        for (size_t i = 0; i < N; ++i) {
//            std::cout << array2[i] << " ";
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    Array<int, 5> intArray;
//    intArray.printArrays();
//    std::cout << "Sum of integers: " << intArray.sum() << std::endl;
//
//    Array<double, 5> doubleArray;
//    doubleArray.printArrays();
//    std::cout << "Sum of doubles: " << doubleArray.sum() << std::endl;
//
//    return 0;
//}


//
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//template<typename T>
//class Stack {
//private:
//    std::vector<T> elements;
//
//public:
//    void push(const T& element) {
//        elements.push_back(element);
//    }
//
//    T pop() {
//        if (elements.empty()) {
//            throw std::runtime_error("Stack is empty");
//        }
//        T topElement = elements.back();
//        elements.pop_back();
//        return topElement;
//    }
//
//    size_t size() const {
//        return elements.size();
//    }
//};
//
//struct Worker {
//    std::string surname;
//    int age;
//    std::string position;
//    double salary;
//};
//
//int main() {
//    Stack<Worker> workersStack;
//
//    int factoryCount;
//    std::cout << "Enter the number of factories: ";
//    std::cin >> factoryCount;
//
//    for (int i = 0; i < factoryCount; ++i) {
//        int workerCount;
//        std::cout << "Enter the number of workers in factory " << i + 1 << ": ";
//        std::cin >> workerCount;
//
//        for (int j = 0; j < workerCount; ++j) {
//            Worker worker;
//            std::cout << "Enter worker's surname, age, specialization, and salary: ";
//            std::cin >> worker.surname >> worker.age >> worker.position >> worker.salary;
//            workersStack.push(worker);
//        }
//    }
//
//    int locksmithCount = 0;
//    int turnerCount = 0;
//
//    Stack<Worker> tempStack; 
//
//    while (workersStack.size() > 0) {
//        Worker worker = workersStack.pop();
//        tempStack.push(worker); 
//
//        if (worker.position == "locksmith") {
//            ++locksmithCount;
//        }
//        else if (worker.position == "turner") {
//            ++turnerCount;
//        }
//    }
//
//    while (tempStack.size() > 0) {
//        Worker worker = tempStack.pop();
//        workersStack.push(worker); 
//    }
//
//    std::cout << "Number of locksmiths: " << locksmithCount << std::endl;
//    std::cout << "Number of turners: " << turnerCount << std::endl;
//
//    return 0;
//}
 //


