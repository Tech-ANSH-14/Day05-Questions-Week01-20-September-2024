#include <iostream>
#include <string>
int countCharacter(const std::string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str1 = "Hello, World!";
    char ch1 = 'l';
    
    std::string str2 = "C++ Programming";
    char ch2 = 'm';
    
    std::string str3 = "OpenAI";
    char ch3 = 'n';
    
    std::string str4 = "This is a test.";
    char ch4 = 't';

    std::cout << "In the string '" << str1 << "', the character '" << ch1 << "' occurs " << countCharacter(str1, ch1) << " times." << std::endl;
    std::cout << "In the string '" << str2 << "', the character '" << ch2 << "' occurs " << countCharacter(str2, ch2) << " times." << std::endl;
    std::cout << "In the string '" << str3 << "', the character '" << ch3 << "' occurs " << countCharacter(str3, ch3) << " times." << std::endl;
    std::cout << "In the string '" << str4 << "', the character '" << ch4 << "' occurs " << countCharacter(str4, ch4) << " times." << std::endl;

    return 0;
}
