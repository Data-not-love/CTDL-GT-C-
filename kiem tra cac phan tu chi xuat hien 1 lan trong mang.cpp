#include <bits/stdc++.h>
int main() {
       int n;
        std :: cin >> n;
        int arr [n];
        
        for (int &x : arr)
            std :: cin >> x;
        int temp;  
 for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            std::cout << arr[i] << "  ";
        }
    }

		return 0;
		}