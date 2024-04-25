#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
int Vowels(const std::string& str);
int Words(const std::string& str);
std::string reverse(const std::string& str);
std::string capitalizeLetter(const std::string& str);
int main() {
    std::ifstream inputFile("textfile.txt");
    std::string fileData;
    if (inputFile.is_open()) {
        std::getline(inputFile, fileData);
        inputFile.close();
        int numVowels = Vowels(fileData);
        std::cout << "Number of vowels: " << numVowels << std::endl;
        int numWords = Words(fileData);
        std::cout << "Number of words: " << numWords << std::endl;
        std::cout << "Reversed statement: " << reverse(fileData) << std::endl;
        std::cout << "Statement with second letter capitalized: " << capitalizeLetter(fileData) << std::endl;
    } else {
        std::cerr << "Error: Unable to open file." << std::endl;
    }
    return 0;
}
int Vowels(const std::string& str) {
    int count = 0;
    for (char ch : str) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            count++;
        }
    }
    return count;
}
int Words(const std::string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (std::isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}
std::string reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}
std::string capitalizeLetter(const std::string& str) {
    std::string result = str;
    bool capitalize = false;
    for (char& ch : result) {
        if (std::isalpha(ch)) {
            if (capitalize) {
                ch = std::toupper(ch);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
    return result;
}
