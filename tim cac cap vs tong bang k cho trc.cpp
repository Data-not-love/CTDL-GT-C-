#include <bits/stdc++.h>
int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    int n,k;
    int dem = 0;
    cin >> n;
    int arr[n];// nếu là arr[100] thì nó sẽ vào vòng for và bắt nhập 100 lần trc khi in kết quả
    
    
    for (int &x : arr)
        cin >> x;
        cin >> k;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
        	if ( arr[i] + arr[j] ==  k ){
        		++dem;
        	cout << arr[i] << ' ' << arr[j] << endl;
			}  
        }
    }
    
    cout << dem;
    return 0;
}
