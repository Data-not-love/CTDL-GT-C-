#include <bits/stdc++.h>
 int main (){
 	int a = 200;
 	int *p = &a; // gán biến con trỏ p vs địa chỉ của a
 	std :: cout << p << std :: endl;// in ra địa chỉ trong bộ nhớ của biến a
 	std :: cout << *p << std :: endl;// biến con trỏ đang trỏ đến giá trị của a = 200. 
	// *p không phải là địa chỉ của p, mà là giá trị mà p đang trỏ đến( với trường hợp này là a = 200). Khái niệm này là dereferencing
 	std :: cout << &p << std :: endl;// in ra địa chỉ của biến con trỏ p bằng cách tham chiếu tới địa chỉ của p
 	
 	
 	float b = 1.5;
 	float *d = &b;//*d : là giá trị tại địa chỉ của biến con trỏ d
 	std :: cout << *d;
 	
	  	return 0;
 }