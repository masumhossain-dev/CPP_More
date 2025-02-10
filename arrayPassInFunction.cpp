#include <iostream>
using namespace std;

int displayArray(int arr[], int arrSize);
int main() {
    int arrSize, result;
    cout << "How many numbers you want to sum (e.g. 10)?: ";
    cin >> arrSize;
    cout << "Enter that " << arrSize << " numbers: ";
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }
    result = displayArray(arr, arrSize);
    cout << "Your result is: " << result << endl;
    return 0;
}

int displayArray(int arr[], int arrSize) {
    int sum = 0;
    for (int i = 0; i<arrSize; i++) {
        sum = sum + arr[i];
    }
    return sum;
}