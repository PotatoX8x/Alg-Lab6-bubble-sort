#include <iostream>
using namespace std;

const int n = 10;
void printArr(int*);
void bubble(int*);

int main() {
    srand(time(0));
    int* A = new int[n];
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 10;
    }
    cout << "Unsorted array: " << endl;
    printArr(A);
    bubble(A);
    cout << endl << endl << "Sorted array with bubble sort: " << endl;
    printArr(A);
	return 0;
}

void printArr(int* A) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << A[i];
        if (i < n - 1)
            cout << "; ";
    }
    cout << "]";
}

void bubble(int* A) {
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (A[j] < A[j - 1]) {
                swap(A[j], A[j - 1]);
            }
        }
    }
}