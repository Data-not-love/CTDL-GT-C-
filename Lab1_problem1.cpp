#include <iostream>
#include <cstdlib>
#include <ctime>

void inputData(int *a, int n) {
    srand(time(0));
    for(int i = 0; i < n; i++) {
        *(a + i) = rand() % 100; // Generate random numbers between 0 and 99
    }
}

void outputData(int *a, int n) {
    for(int i = 0; i < n; i++) {
        std::cout << *(a + i) << " ";
    }
    std::cout << std::endl;
}

void remove(int *a, int &n, int k) {
    for(int i = k; i < n; i++) {
        *(a + i) = *(a + i + 1);
    }
    --n;
}

void removeOdd(int *a, int &n) {
    for(int i = 0; i < n; i++) {
        if(*(a + i) % 2 != 0) {
            remove(a, n, i);
            --i; // Decrement i to check the same index again as elements have shifted left
        }
    }
}

int main() {
    int n = 10;
    int *a = new int[n];

    inputData(a, n);
    std::cout << "Original array: ";
    outputData(a, n);

    removeOdd(a, n);
    std::cout << "Array after removing odd numbers: ";
    outputData(a, n);

    delete[] a;
    return 0;
}
