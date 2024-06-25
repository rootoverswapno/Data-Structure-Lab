#include <bits/stdc++.h>
using namespace std;
void splitarray(int arr[], int n, int *&first, int &firstsize, int *&second, int &secondsize)
{
    firstsize = n / 2;
    secondsize = n - firstsize;
    first = new int[firstsize];
    second = new int[secondsize];
    for (int i = 0; i < firstsize; ++i)
    {
        first[i] = arr[i];
    }
    for (int i = 0; i < secondsize; ++i)
    {
        second[i] = arr[firstsize + i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int *first = NULL;
    int *second = NULL;
    int firstsize = 0, secondsize = 0;
    splitarray(arr, n, first, firstsize, second, secondsize);
    cout << "first Half : ";
    for (int i = 0; i < firstsize; ++i)
    {
        cout << first[i] << " ";
    }
    cout << endl;

    cout << "Second Half: ";
    for (int i = 0; i < secondsize; ++i)
    {
        cout << second[i] << " ";
    }
    cout << endl;
    
    delete[] first;
    delete[] second;

    return 0;
}