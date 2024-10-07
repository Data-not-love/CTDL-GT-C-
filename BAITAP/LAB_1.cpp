#include <bits/stdc++.h>

void input(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        std::cin >> *(a + i); // Dùng con trỏ để truy cập phần tử
    }
}

void output(int *a, int n) {
    for(int i = 0; i < n; ++i) {
        std::cout << *(a + i) << " "; // Dùng con trỏ để truy cập phần tử
    }
    std::cout << std::endl;
}

void remove(int *a, int *n, int k) {
    for(int i = k; i < *n - 1; ++i) {
        *(a + i) = *(a + i + 1); 
    }
    (*n)--; 
}

void bo_so_le(int *a, int *n) {
    int i = 0;
    while(i < *n) {
        if (*(a + i) % 2 != 0) {
            remove(a, n, i); 
        } else {
            ++i;
        }
    }
}

int main() {
    int n;
    std::cout << "Kich co mang : ";
    std::cin >> n;

    int *a = new int[n];

    srand(time(0));

    input(a, n);
    std::cout << "Trc khi loai so le : ";
    output(a, n);

     bo_so_le (a, &n);
    std::cout << "Sau khi loai so le : ";
    output(a, n);

    delete[] a; // giải phóng bộ nhớ

    return 0;
}
