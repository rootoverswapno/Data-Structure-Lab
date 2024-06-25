#include <iostream>
using namespace std;

// Function to calculate the sum of diagonal elements without repetition
int sumDiagonalElements(int** arr, int m, int n) {
    int primarySum = 0;
    int secondarySum = 0;
    int minDim = min(m, n);

    // Sum primary diagonal
    for (int i = 0; i < minDim; ++i) {
        primarySum += arr[i][i];
    }

    // Sum secondary diagonal
    for (int i = 0; i < minDim; ++i) {
        secondarySum += arr[i][n - 1 - i];
    }

    int sum = primarySum + secondarySum;

    // If m and n are equal and odd, subtract the middle element once as it is counted twice
    if (m == n && m % 2 != 0) {
        sum -= arr[m / 2][n / 2];
    }

    return sum;
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    // Allocate memory for 2D array
    int** arr = new int*[m];
    for (int i = 0; i < m; ++i) {
        arr[i] = new int[n];
    }

    // Input array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    // Calculate the sum of diagonal elements without repetition
    int sum = sumDiagonalElements(arr, m, n);

    // Print the sum
    cout << "Sum of diagonal elements: " << sum << endl;

    // Free allocated memory
    for (int i = 0; i < m; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
