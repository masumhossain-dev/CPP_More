#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

while (1) {
    int guessNumber, randomNumbr;
    cout << "Enter your guess number: " << endl;
    cin >> guessNumber;

    randomNumbr = 1 + rand() % 5;

    if (randomNumbr == guessNumber) {
        cout << "You Have Won!" << endl;
    }
    else {
        cout << "You Have Lose!, Please try again" << endl;
        cout << "The random number is: " << randomNumbr << endl;
    }
}

    return 0;
}