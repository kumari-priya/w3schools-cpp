#include <iostream>
// using namespace std;

int main() {
    int num1, num2;
    /* The code below will print Hello World and I am learning C++
    to the screen, and it is amazing! This is multi-line comment. */
    std::cout << "Hello World!" << std::endl;;
    std::cout << "Enter a number: ";
    std::cin >> num1;
    std::cout << "Enter another number: ";
    std::cin >> num2;
    std::cout << "The sum is " << num1 + num2 << ". \n";
    return 0;
}
