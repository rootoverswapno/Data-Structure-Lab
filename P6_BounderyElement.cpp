#include <iostream>
using namespace std;

int sumBoundaryElements(int **arr, int m, int n) {
    int sum = 0;

    // Add top row
    for (int j = 0; j < n; ++j) {
        sum += arr[0][j];
    }

    // Add bottom row
    for (int j = 0; j < n; ++j) {
        sum += arr[m - 1][j];
    }

    // Add left column, excluding top and bottom corners
    for (int i = 1; i < m - 1; ++i) {
        sum += arr[i][0];
    }

    // Add right column, excluding top and bottom corners
    for (int i = 1; i < m - 1; ++i) {
        sum += arr[i][n - 1];
    }

    return sum;
}

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    // Allocate memory for 2D array
    int **arr = new int*[m];
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

    // Calculate the sum of boundary elements
    int boundarySum = sumBoundaryElements(arr, m, n);
    cout << "Sum of boundary elements: " << boundarySum << endl;

    // Free allocated memory
    for (int i = 0; i < m; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
