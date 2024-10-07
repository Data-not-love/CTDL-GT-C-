#include <iostream>
 int main (){
 	int a;
 	int *p;
 	a = 10;
 	p = &a;
 	
 	std :: cout << *p << std :: endl;
	std :: cout << &p << std :: endl;
	
	int b;
	b = 300;
	p = &b;
	std :: cout << *p << std :: endl;
	std :: cout << &p;
 	
 	return 0;
 }