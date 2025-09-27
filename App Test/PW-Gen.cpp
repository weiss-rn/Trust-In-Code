#include <iostream>
#include <string>
#include <random>
#include <ctime>

class PasswordGenerator {
private:
    const std::string lowercase = "abcdefghijklmnopqrstuvwxyz";
    const std::string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string numbers = "0123456789";
    const std::string symbols = "!@#$%^&*()-_=+[]{}|;:,.<>?";
public:
    PasswordGenerator() {
        std::srand(std::time(0));
    }
    std::string generatePassword(int length, bool useUpper = true, bool useNumbers = true, bool useSymbols = true) {
        std::string characterPool = lowercase;   
        if (useUpper) characterPool += uppercase;
        if (useNumbers) characterPool += numbers;
        if (useSymbols) characterPool += symbols;
        if (characterPool.empty()) {
            return "Error: No character types selected!";
        }
        std::string password;
        for (int i = 0; i < length; ++i) {
            int randomIndex = std::rand() % characterPool.length();
            password += characterPool[randomIndex];
        }
        return password;
    }
    void displayPasswordStrength(const std::string& password) {
        int strength = 0;
        bool hasLower = false, hasUpper = false, hasNumber = false, hasSymbol = false;
        for (char c : password) {
            if (islower(c)) hasLower = true;
            else if (isupper(c)) hasUpper = true;
            else if (isdigit(c)) hasNumber = true;
            else hasSymbol = true;
        }
        if (hasLower) strength++;
        if (hasUpper) strength++;
        if (hasNumber) strength++;
        if (hasSymbol) strength++;
        if (password.length() >= 12) strength++;
        std::cout << "Password Strength: ";
        switch (strength) {
            case 1: std::cout << "Very Weak"; break;
            case 2: std::cout << "Weak"; break;
            case 3: std::cout << "Moderate"; break;
            case 4: std::cout << "Strong"; break;
            case 5: std::cout << "Very Strong"; break;
            default: std::cout << "Unknown"; break;
        }
        std::cout << " (" << strength << "/5)" << std::endl;
    }
};

int main() {
    PasswordGenerator generator;
    int length;
    char includeUpper, includeNumbers, includeSymbols;
    std::cout << "=== Random Password Generator ===" << std::endl;
    std::cout << "Enter password length: ";
    std::cin >> length;
    if (length <= 0) {
        std::cout << "Invalid length!" << std::endl;
        return 1;
    }
    std::cout << "Include uppercase letters? (y/n): ";
    std::cin >> includeUpper;
    std::cout << "Include numbers? (y/n): ";
    std::cin >> includeNumbers;
    std::cout << "Include symbols? (y/n): ";
    std::cin >> includeSymbols;
    bool useUpper = (includeUpper == 'y' || includeUpper == 'Y');
    bool useNumbers = (includeNumbers == 'y' || includeNumbers == 'Y');
    bool useSymbols = (includeSymbols == 'y' || includeSymbols == 'Y');
    std::string password = generator.generatePassword(length, useUpper, useNumbers, useSymbols);
    std::cout << "\nGenerated Password: " << password << std::endl;
    generator.displayPasswordStrength(password);
    std::cout << "\n=== Additional Examples ===" << std::endl;
    std::cout << "8-character simple: " << generator.generatePassword(8, true, true, false) << std::endl;
    std::cout << "12-character strong: " << generator.generatePassword(12, true, true, true) << std::endl;
    std::cout << "16-character very strong: " << generator.generatePassword(16, true, true, true) << std::endl;
    return 0;
}

// for some reason this one is harder to code, smh
