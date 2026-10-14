#include <iostream>
#include <string>

using namespace std;

void findOperators(string str) {
    int opCount = 1;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        string opName = "";

        if (ch == '+') {
            opName = "Addition";
        } else if (ch == '-') {
            opName = "Subtraction";
        } else if (ch == '*') {
            opName = "Multiplication";
        } else if (ch == '/') {
            opName = "Division";
        } else if (ch == '%') {
            opName = "Modulus";
        } else if (ch == '=') {
            opName = "Equal";
        }

    
        if (opName != "") {
            cout << "operator" << opCount << ": " << ch << " (" << opName << ")" << endl;
            opCount++;
        }
    }
}

int main() {
    string input;
    cout << "Enter the input expression: ";
    cin >> input;

    findOperators(input);

    return 0;
}