#include <iostream>

using namespace std;


double findAverage(int arr[], int size) {
    
    double sum = 0; 
    
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
 
    return sum / size; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    double average = findAverage(arr, n);

    cout << "The average value of the elements is: " << average << endl;

    return 0;
}