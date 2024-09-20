#include <iostream>
#include <string>

int stringLength(const std::string &str) {
    return str.length();
}

int main() {
    std::string str1 = "Hello, World!";
    std::string str2 = "C++ Programming";
    std::string str3 = "";
    std::string str4 = "OpenAI";

    std::cout << "Length of '" << str1 << "' is: " << stringLength(str1) << std::endl;
    std::cout << "Length of '" << str2 << "' is: " << stringLength(str2) << std::endl;
    std::cout << "Length of '" << str3 << "' is: " << stringLength(str3) << std::endl;
    std::cout << "Length of '" << str4 << "' is: " << stringLength(str4) << std::endl;

    return 0;
}
