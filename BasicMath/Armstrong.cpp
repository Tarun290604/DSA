#include <bits/stdc++.h>
using namespace std;

// Function to compute power iteratively
int power(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}

bool isArmstrong(int num) {
    int k = to_string(num).length(); // Find the number of digits
    int sum = 0;
    int n = num;

    while (n) {
        int ld = n % 10; // Extract the last digit
        sum += power(ld, k); // Compute power iteratively and add to sum
        n = n / 10; // Remove the last digit
    }
    
    return sum == num; // Check if the sum matches the original number
}

int main() {
    int number = 153; // Change this number to test other values
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
