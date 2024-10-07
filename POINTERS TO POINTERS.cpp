// pointers to pointers
#include <iostream>
 int main (){
 	 int a = 5;
 	 int *p = &a;
 	 std :: cout << p << std :: endl ; // in ra địa chỉ của x
 	 std :: cout << *p << std :: endl ; // trỏ tới giá trị bên trong địa chỉ của x
 	 std :: cout << (p+1) << std :: endl ; // in ra địa chỉ của biến a và cộng 4 bytes
 	 std :: cout << &p << std :: endl ; // in ra địa chỉ của biến p
 	 std :: cout << *(p+1) << std :: endl ; // in ra giá trị rác
 	 *p = 6;
 	 std :: cout << *p << std :: endl ; // in ra 6
 	 std :: cout << &p << std :: endl ; // in ra địa chỉ của biến p
 	 int **pointerOfP;
 	 pointerOfP = &p;
     std :: cout << pointerOfP << std :: endl; // ra địa chỉ của biến con trỏ p vì ta đã gán biến con trỏ = dịa chỉ của p
     std :: cout << &pointerOfP << std :: endl; // in ra địa chỉ của biến pointerOfP
 	return 0;
 }