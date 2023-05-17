#include <iostream>
#include <string>
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
private:
    int numerator;
    int denominator;
};

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

string Fraction::toString() {
    int wholePart = numerator / denominator;
    int remainder = numerator % denominator;

    string fractionString;

    if (wholePart < 0 || remainder < 0) {
        fractionString += "-";
        wholePart = abs(wholePart);
        remainder = abs(remainder);
    }

    fractionString += to_string(wholePart);

    if (remainder != 0) {
        fractionString += " ";
        fractionString += to_string(remainder);
        fractionString += "/";
        fractionString += to_string(denominator);
    }

    return fractionString;
}

double Fraction::toDouble() {
    return static_cast<double>(numerator) / denominator;
}

int main(void) {
    int num, den;
    string input = "";
    getline(cin, input);

    
    size_t slashPos = input.find("/");
    if (slashPos != string::npos) {
        num = stoi(input.substr(0, slashPos));
        den = stoi(input.substr(slashPos + 1));
    } else {
        cout << "Invalid input format." << endl;
        return 1;
    }

    Fraction fraction(num, den);
    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal." << endl;

    return 0;
}