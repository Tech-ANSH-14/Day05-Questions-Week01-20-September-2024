#include <iostream>
#include <string>

std::string concatenateStrings(const std::string &str1, const std::string &str2) {
    return str1 + str2;
}

int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    
    std::string str3 = "C++ ";
    std::string str4 = "Programming";
    
    std::string str5 = "OpenAI ";
    std::string str6 = "GPT-4";

    std::cout << "Concatenation of '" << str1 << "' and '" << str2 << "' is: " << concatenateStrings(str1, str2) << std::endl;
    std::cout << "Concatenation of '" << str3 << "' and '" << str4 << "' is: " << concatenateStrings(str3, str4) << std::endl;
    std::cout << "Concatenation of '" << str5 << "' and '" << str6 << "' is: " << concatenateStrings(str5, str6) << std::endl;

    return 0;
}
