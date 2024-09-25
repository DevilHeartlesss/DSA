#include <iostream>
#include <cmath>

using namespace std;

bool isNarcissistic(int number) {
    int numDigits = 0;
    int sumOfPowers = 0;

    // Count the number of digits
    for (int temp = number; temp > 0; temp /= 10) {
        numDigits++;
    }

    // Calculate the sum of digits raised to the power of numDigits
    for (int temp = number; temp > 0; temp /= 10) {
        int digit = temp % 10;
        sumOfPowers += pow(digit, numDigits);
    }

    // Check if the sum equals the original number
    return sumOfPowers == number;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isNarcissistic(number)) {
        cout << number << " is a narcissistic number." << endl;
    } else {
        cout << number << " is not a narcissistic number." << endl;
    }

    return 0;
}