#include <iostream>
using namespace std;

int main() {
    int arr[10], n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int negatives[10], positives[10];
    int negCount = 0, posCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negatives[negCount] = arr[i];
            negCount++;
        }
        if (arr[i] > 0) {
            positives[posCount] = arr[i];
            posCount++;
        }
    }

    cout << "Negative numbers in array are: ";
    for (int i = 0; i < negCount; i++) {
        cout << negatives[i] << " ";
    }
    
    cout << "\nPositive numbers in array are: ";
    for (int i = 0; i < posCount; i++) {
        cout << positives[i] << " ";
    }

    return 0;
}
