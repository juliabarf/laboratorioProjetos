#include <iostream>
#include <string>

int main() {
    std::string text = "Hello World";

    // Extract "World" starting at index 6
    std::string sub1 = text.substr(5,1);      // Output: "World"

    // Extract "Hello" starting at index 0, length 5
    std::string sub2 = text.substr(0, 5);   // Output: "Hello"

    std::cout << sub1 << " " <<  std::endl;
    return 0;
}
