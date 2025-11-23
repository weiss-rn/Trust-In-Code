#include <iostream>
#include <string>
#include <cctype>

class PasswordChecker {
private:
    std::string password;
    
    bool hasUpperCase() const {
        for (char c : password) {
            if (std::isupper(c)) return true;
        }
        return false;
    }
    bool hasLowerCase() const {
        for (char c : password) {
            if (std::islower(c)) return true;
        }
        return false;
    }
    bool hasDigit() const {
        for (char c : password) {
            if (std::isdigit(c)) return true;
        }
        return false;
    }
    bool hasSpecialChar() const {
        std::string specialChars = "!@#$%^&*()-_=+[]{}|;:,.<>?";
        for (char c : password) {
            if (specialChars.find(c) != std::string::npos) return true;
        }
        return false;
    }
public:
    void setPassword(const std::string& pwd) {
        password = pwd;
    }
    int calculateStrength() const {
        if (password.empty()) return 0;
        int strength = 0;
        if (password.length() >= 8) strength += 2;
        if (password.length() >= 12) strength += 1;
        if (hasUpperCase()) strength += 1;
        if (hasLowerCase()) strength += 1;
        if (hasDigit()) strength += 1;
        if (hasSpecialChar()) strength += 2;
        return std::min(strength, 10);
    }
    void displayStrengthReport() const {
        int strength = calculateStrength();
        std::cout << "\n=== Password Strength Report ===" << std::endl;
        std::cout << "Password: " << std::string(password.length(), '*') << std::endl;
        std::cout << "Length: " << password.length() << " characters" << std::endl;
        std::cout << "Strength Score: " << strength << "/10" << std::endl;
        if (strength <= 3) {
            std::cout << "Status: Very Weak" << std::endl;
        } else if (strength <= 5) {
            std::cout << "Status: Weak" << std::endl;
        } else if (strength <= 7) {
            std::cout << "Status: Moderate" << std::endl;
        } else if (strength <= 9) {
            std::cout << "Status: Strong" << std::endl;
        } else {
            std::cout << "Status: Very Strong" << std::endl;
        }
        std::cout << "\nRecommendations:" << std::endl;
        if (password.length() < 8) {
            std::cout << "- Use at least 8 characters" << std::endl;
        }
        if (!hasUpperCase()) {
            std::cout << "- Add uppercase letters" << std::endl;
        }
        if (!hasLowerCase()) {
            std::cout << "- Add lowercase letters" << std::endl;
        }
        if (!hasDigit()) {
            std::cout << "- Add numbers" << std::endl;
        }
        if (!hasSpecialChar()) {
            std::cout << "- Add special characters (!@#$% etc.)" << std::endl;
        }
    }
};
int main() {
    PasswordChecker checker;
    std::string password;
    std::cout << "=== Password Strength Checker ===" << std::endl;
    std::cout << "Enter a password to check its strength: ";
    std::getline(std::cin, password);
    checker.setPassword(password);
    checker.displayStrengthReport();
    char choice;
    std::cout << "\nWould you like to test another password? (y/n): ";
    std::cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        std::cin.ignore();
        std::cout << "Enter another password: ";
        std::getline(std::cin, password);
        checker.setPassword(password);
        checker.displayStrengthReport();
    }
    std::cout << "\nThank you for using the PW-Checker!" << std::endl;
    return 0;
}


// Fyi - CPP is pain for Python Dev, i still need more learning
