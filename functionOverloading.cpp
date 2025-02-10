#include <iostream>
using namespace std;

int sum(int num1, int num2);
int sum(int num1, int num2, int num3);
int sum(int num1, int num2, int num3, int num4);

int main() {
    while (1) {
        int num1, num2, num3, num4;
        int count;
        cout << "How many numbers do you want to sum? (Out of 2, 3 or 4 combination): ";
        cin >> count;

        if (count == 2) {
            cout << "Enter your 2 numbers: ";
            cin >> num1 >> num2;
            sum(num1, num2);
        }
        else if (count == 3) {
            cout << "Enter your 3 numbers: ";
            cin >> num1 >> num2 >> num3;
            sum(num1, num2, num3);
        }
        else if (count == 4) {
            cout << "Enter your 4 numbers: ";
            cin >> num1 >> num2 >> num3 >> num4;
            sum(num1, num2, num3, num4);
        }
        else {
            cout << "Enter valid numbers!";
        }
    }
    return 0;
}

int sum(int num1, int num2) {
    int sum = num1 + num2;
    cout << "Your result is: " << sum << endl;
    return sum;
}
int sum(int num1, int num2, int num3) {
    int sum = num1 + num2 + num3;
    cout << "Your result is: " << sum << endl;
    return sum;
}
int sum(int num1, int num2, int num3, int num4) {
    int sum = num1 + num2 + num3 + num4;
    cout << "Your result is: " << sum << endl;
    return sum;
}