#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int best[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                  11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int worst[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
                   10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int n = 20;

    cout << "Name: Ipshit Singh\n";
    cout << "Enrollment No.: 12514803124\n";

    cout << "\nBEST CASE\n";
    cout << "Original Array: ";
    printArray(best, n);

    insertionSort(best, n);

    cout << "Sorted Array:   ";
    printArray(best, n);

    cout << "\nComplexity Proof:\n";
    cout << "Each element is already in correct position\n";
    cout << "Comparisons per element = O(1)\n";
    cout << "T(n) = n * O(1)\n";
    cout << "Best Case = O(n)\n";

    cout << "\nWORST CASE\n";
    cout << "Original Array: ";
    printArray(worst, n);

    insertionSort(worst, n);

    cout << "Sorted Array:   ";
    printArray(worst, n);

    cout << "\nComplexity Proof:\n";
    cout << "Each element may be compared with all previous elements\n";
    cout << "Maximum shifts = n(n-1)/2\n";
    cout << "T(n) = O(n^2)\n";
    cout << "Worst Case = O(n^2)\n";

    return 0;
}
