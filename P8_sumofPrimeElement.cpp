#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; // 2 is the only even prime number
    if (num % 2 == 0) return false; // other even numbers are not prime

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cout << "Enter the number of rows (n): ";
    cin >> n;
    cout << "Enter the number of columns (m): ";
    cin >> m;

    // Allocate memory for 2D array
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[m];
    }

    // Input array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    // Calculate the sum of all prime numbers in the array
    int primeSum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (isPrime(arr[i][j])) {
                primeSum += arr[i][j];
            }
        }
    }

    // Print the sum of prime numbers
    cout << "Sum of prime numbers: " << primeSum << endl;

    // Free allocated memory
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
