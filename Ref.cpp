#include <iostream>
 int main (){
 	int x = 1;
 	int &b = x;
 	std :: cout << b << std :: endl;
 	 b = 20;
 	 std :: cout << b;
 	return 0;
 }