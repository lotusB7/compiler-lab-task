#include <iostream>
#include <string>

using namespace std;


void generateFullName() {
    string firstName, lastName, fullName;

   
    cout << "First name = ";
    cin >> firstName;

    cout << "Lastname = ";
    cin >> lastName;


    fullName = firstName + " " + lastName;

   
    cout<< fullName << endl;
}

int main() {
  
    generateFullName();

    return 0;
}