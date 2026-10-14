#include <iostream>
#include <string>

using namespace std;

void checkComment(string str) {
    int n = str.length();
    
    
    if (n >= 2 && str[0] == '/' && str[1] == '/') {
        cout << "It is a single line comment" << endl;
    }
   
    else if (n >= 4 && str[0] == '/' && str[1] == '*' && str[n-2] == '*' && str[n-1] == '/') {
        cout << "It is a multiple line comment" << endl;
    }
    else {
        cout << "It is Not a comment" << endl;
    }
}

int main() {
    string input;
    cout << "Enter your input: ";
    
    
    getline(cin, input); 

    checkComment(input);

    return 0;
}