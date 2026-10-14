#include <iostream>
#include <string>

using namespace std;


bool isIdentifier(string str) {
   
    if (str.length() == 0) {
        return false;
    }

   
    char firstChar = str[0];
    if (!((firstChar >= 'A' && firstChar <= 'Z') || 
          (firstChar >= 'a' && firstChar <= 'z') || 
          firstChar == '_')) {
        return false; 
    }

   
    for (int i = 1; i < str.length(); i++) {
        char ch = str[i];
        if (!((ch >= 'A' && ch <= 'Z') || 
              (ch >= 'a' && ch <= 'z') || 
              (ch >= '0' && ch <= '9') || 
              ch == '_')) {
            return false; 
        }
    }

   
    return true; 
}

int main() {
    string input;
    cout << "Enter the input: ";
    cin >> input;

    if (isIdentifier(input)) {
        cout << "Identifier" << endl;
    } else {
        cout << "Not an Identifier" << endl;
    }

    return 0;
}