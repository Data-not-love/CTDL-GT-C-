#include <bits/stdc++.h>
int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    int n;
    cin >> n;
    int arr[n];// nếu là arr[100] thì nó sẽ vào vòng for và bắt nhập 100 lần trc khi in kết quả

    for (int &x : arr)
        cin >> x;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << arr[i] << ' ' << arr[j] << endl;
        }
    }
   
    return 0;
}
