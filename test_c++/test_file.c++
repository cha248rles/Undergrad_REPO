#include <iostream> // Required for std::cout and std::endl

int main() {
    // Printing a string literal
    std::cout << "Hello, World!" << std::endl;

    // Printing a variable
    int age = 30;
    std::cout << "My age is: " << age << std::endl;

    // Chaining multiple outputs
    std::string name = "Alice";
    std::cout << "Name: " << name << ", Age: " << age << std::endl;

    // Using '\n' for a newline character (alternative to std::endl)
    std::cout << "This is on one line.\nThis is on a new line." << std::endl;

    return 0;
}
