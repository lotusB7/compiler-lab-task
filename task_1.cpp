#include <iostream>
#include <string>

using namespace std;

void numericConst() {
    string input;
    cin >> input;

    bool isNumeric = true;
    
    for(int i = 0; i < input.length(); i++) {
        
        if(input[i] >= 48 && input[i] <= 57) {
            continue; 
        } else {
            isNumeric = false;
            break; 
        }
    }

    if (isNumeric) {
        cout << "Numeric constant" << endl;
    } else {
        cout << "Not numeric constant" << endl;
    }
}

int main() {
    cout << "Enter your input: ";
    numericConst();
    return 0;
}