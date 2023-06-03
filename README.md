# Cyclic List Manipulation

This code demonstrates manipulation of a cyclic list in C++. It provides functions to generate a random list, generate a user input list, remove every third element from the list, and print the contents of the list.

## Function Details

- `generateRandomList(int size)`: Generates a random list of integers with the specified size. The random numbers range from 0 to 99.
- `generateUserInputList(int size)`: Generates a list of integers with the specified size based on user input.
- `removeEveryThird(std::list<int>& myList)`: Removes every third element from the given cyclic list and returns the removed elements as a new list.
- `printList(const std::list<int>& list, const std::string& message)`: Prints the elements of the given list along with an optional message.

## Main Function

The `main` function presents a menu with the following options:

1. Display information about the developer.
2. Work with data.
3. Exit the program.

Depending on the selected option, the program executes the corresponding functionality.

### Menu Options

1. Display Information about the Developer: Prints the name, variant, and difficulty level of the developer.
2. Work with Data:
   - Prompts the user to choose how to enter the data (randomly or from the keyboard).
   - Asks for the number of elements in the list.
   - Generates a cyclic list based on the chosen method.
   - Prints the original list.
   - Removes every third element from the list and prints the removed elements.
   - Prints the number of removed elements.
   - Prints the list after removing the elements.
3. Exit: Ends the program.

---

This is the overview of the provided code and its functionalities. Feel free to explore and modify it as needed.
