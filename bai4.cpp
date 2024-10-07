#include <iostream>
 int main (){
 	int a, b;
 	  std :: cin >> a; 
 	  std :: cin >> b;
 	    if (( a > 0 && a <= 1000000) && ( b > 0 && b <= 1000000)){
 	    	std :: cout << (a+b);
		 }
		 else
		  std :: cout << "N";
 	return 0;
 }