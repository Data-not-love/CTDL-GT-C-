#include <iostream>
void modifyValue(int &x) {
    int value = 100; // Thay đổi giá trị của tham số trong hàm
    x = value + x;
}

int main() {
	int number = 50;
    std :: cout << "Before : " << number << std :: endl ;
    std :: cout << "After : " << std :: modifyValue (number);
    return 0;
}