// Assignment 5 part 2 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: It uses recursion to solve the Ackermann problems.

#include <iostream>

unsigned int ackermann(unsigned int m, unsigned int n) {
    //m = 0, return n+1
    if (m == 0) {
        return n + 1;
    }
    //n = 0, return ackermann(m-1, 1)
    if (n == 0) {
        return ackermann(m - 1, 1);
    }
    //else
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    std::cout << "Ackermann(0, 0) = " << ackermann(0, 0) << "\n";
    std::cout << "Ackermann(0, 1) = " << ackermann(0, 1) << "\n";
    std::cout << "Ackermann(1, 1) = " << ackermann(1, 1) << "\n";
    std::cout << "Ackermann(1, 2) = " << ackermann(1, 2) << "\n";
    std::cout << "Ackermann(1, 3) = " << ackermann(1, 3) << "\n";
    std::cout << "Ackermann(2, 2) = " << ackermann(2, 2) << "\n";
    std::cout << "Ackermann(3, 2) = " << ackermann(3, 2) << "\n";
    std::cout << "Ackermann(3, 3) = " << ackermann(3, 3) << "\n";
    std::cout << "Ackermann(4, 0) = " << ackermann(4, 0) << "\n";
}
