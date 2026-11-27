#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

class Number {
private:
    double currentTotal = 0.0;
    double nextNumber = 0.0;
    char op;
public:
    void showheader() {
            std::cout << " =====CALCULATOR===== " << std::endl;
            std::cout << " THIS CALCULATOR HAVE ALOT OF FUNCTION ON BELOW​" << std::endl;
            std::cout << " 1.PLUS (+)" << std::endl;
            std::cout << " 2.MINUS(-)" << std::endl;
            std::cout << " 3.MULTIPLE(*)" << std::endl;
            std::cout << " 4.DIVIDE(/)" << std::endl;
            std::cout << "\nPLEASE INPUT THE CALCULATE (EX: 10 + 5 * 2 = ): ";
    
        if (!(std::cin >> currentTotal)) {
            std::cout << "INVALID PLEASE INPUT AGAIN!" << std::endl;
            return ;
        }
        while (std::cin >> op && op != '=') {
            if(!(std::cin >> nextNumber)) {
            std::cout << "NO DATA PLEASE INPUT AGAIN!" << std::endl;
            return ;
        }
        switch (op) {
            case '+':
                currentTotal += nextNumber;
                break;
            case '-':
                currentTotal -= nextNumber;
                break;
            case '*':
                currentTotal *= nextNumber;
                break;
            case '/':
                if (nextNumber == 0) {
                    std::cout << "Error: THE NUMBER CAN'T DIVIDE BY ZERO!" << std::endl;
                    return ;
                }
                currentTotal /= nextNumber;
                break;
            default:
                std::cout << "Unknown operator: " << op << std::endl;
                break;
                }
            }  
        std::cout << "Result: " << currentTotal << std::endl;  
        }        
    };

class geometry {
public:
    void calculator(const std::string& operation, double degrees) {
        const double PI = 3.14159265358979323846;
        double radians = degrees * (PI / 180.0);

        if (operation == "sin") {
            std::cout << "sin(" << degrees << "°) = " << std::sin(radians) << "\n\n";
        } else if (operation == "cos") {
            std::cout << "cos(" << degrees << "°) = " << std::cos(radians) << "\n\n";
        } else if (operation == "tan") {
            std::cout << "tan(" << degrees << "°) = " << std::tan(radians) << "\n\n";
        } else if (operation == "cot") {
            std::cout << "cot(" << degrees << "°) = " << (std::cos(radians) / std::sin(radians)) << "\n\n";
        } else {
            std::cout << "Unknown button. Use sin, cos, tan, or cot.\n\n";
        }
    }
};

    int main() {

        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);

        Number calculator;
        geometry geoCalc;

        std::cout << " =====CALCULATOR===== " << std::endl;
            std::cout << " THIS CALCULATOR WAS CREATE BY TOU BACKEND ENGINEER​" << std::endl;
            std::cout << " 1.CALCULATE THE NUMBER" << std::endl;
            std::cout << " 2.CALCULATE THE GEOMETRY" << std::endl;
            std::cout << "PLEASE CHOOSE (1 OR 2): " << std::endl;

            int choice;
            if (!(std::cin >> choice)) {
                std::cout << "INVALID CHOICE!" << std::endl;
                return 0;
            }

            if (choice == 1) {
        calculator.showheader();
    } else if (choice == 2) {
        std::string op;
        double deg;
        std::cout << "ASSIGN FUNCTION (sin, cos, tan, cot): ";
        std::cin >> op;
        std::cout << "ASSIGN THE (degrees): ";
        std::cin >> deg;

        geoCalc.calculator(op, deg); // Passing user inputs into geometry::calculate()
    } else {
        std::cout << "WRONG CHOICE!" << std::endl;
    }

    return 0;
}

        

