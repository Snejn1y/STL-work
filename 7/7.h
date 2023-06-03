#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H

#include <iostream>
#include <list>
#include <vector>

std::list<int> generateRandomList(int size);
std::list<int> generateUserInputList(int size);
std::list<int> removeEveryThird(std::list<int>& myList);
void printList(const std::list<int>& list, const std::string& message);
void printVector(const std::vector<int>& myVector, const std::string& title);

#endif
