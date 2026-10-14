#include <iostream>

using namespace std;


void findMinMax(int arr[], int size) {
   
    if (size <= 0) {
        cout << "Array is empty." << endl;
        return;
    }

    
    int minVal = arr[0];
    int maxVal = arr[0];

    
    for (int i = 1; i < size; i++) {
        
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    
    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;
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

   
    findMinMax(arr, n);

    return 0;
}