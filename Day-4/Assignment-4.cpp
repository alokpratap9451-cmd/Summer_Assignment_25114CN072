#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int original = num;
        int digits = 0, temp = num;

        // Count digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        // Calculate sum of digits^digits
        int sum = 0;
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        // Check Armstrong condition
        if (sum == original) {
            cout << original << " ";
        }
    }

    return 0;
}
