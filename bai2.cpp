#include <iostream>
 int main ()
 {
 	 int n; 
 	 std :: cin >>  n;
 	 if ( n<= 0)
 	   std :: cout << "N" ;
 	   int k = 0;
 	   int S = 0;
 	      while ( S + k + 1 <= n ){
 	   
 	      	k++;
 	         S+=k;
		   }
		  std :: cout << k;
 	return 0;
 }