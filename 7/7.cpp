#include "7.h"
#include <cstdlib>
#include <ctime>

std::list<int> generateRandomList(int size) {
    srand(time(0));
    std::list<int> list;
    for (int i = 0; i < size; i++) {
        list.push_back(rand() % 100);
    }
    return list;
}

std::list<int> generateUserInputList(int size) {
    std::list<int> list;
    int userInput;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a number: ";
        std::cin >> userInput;
        list.push_back(userInput);
    }
    return list;
}

std::list<int> removeEveryThird(std::list<int>& myList) {
    std::list<int> removedElements;
    auto it = myList.begin();
    for (int i = 1; it != myList.end(); ++i) {
        if (i % 3 == 0) {
            removedElements.push_back(*it);
            it = myList.erase(it);
        }
        else {
            ++it;
        }
    }
    return removedElements;
}

void printList(const std::list<int>& list, const std::string& message) {
    std::cout << message;
    for (int n : list) {
        std::cout << n << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int f = 0;
    while (true)
    {
        std::cout << "\tMenu\n"
            "1. Display information about the developer;\n"
            "2. Work with data;\n"
            "3. Exit\n"
            "Choose: ";
        std::cin >> f;
        switch (f)
        {
        case 1:
        {
            std::cout << "NAME: Lutsak Denis Vladimirovich\n"
                "Variant: 13\n"
                "Difficulty: A\n";
            break;
        }
        case 2:
        {
            int c = 0;
            std::cout << "How do you want to enter data?\n"
                "1. Randomly\n"
                "2. From the keyboard\n"
                "Choose: ";
            std::cin >> c;

            std::list<int> cyclicList;
            int size;
            std::cout << "Enter a number of elements: ";
            std::cin >> size;

            if (c == 1)
                cyclicList = generateRandomList(size);
            else
                cyclicList = generateUserInputList(size);

            printList(cyclicList, "Original list: ");

            std::list<int> removedElements = removeEveryThird(cyclicList);

            printList(removedElements, "Remove elements: ");

            std::cout << "Remove number: " << removedElements.size() << std::endl;

            printList(cyclicList, "List after remove: ");
            break;
        }
        default:
            return 0;
        }
    }
}
