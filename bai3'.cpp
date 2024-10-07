#include <iostream>
 int main (){
 
  int n;
  std :: cin >> n;
      if (n<=0)
	    std :: cout << "N";
		
		int max = 0;
		for ( int i = 1 ; i < n ; i++ ){
			if ( n % i == 0 && i % 2 !=0 && i >  max ){
			  max = i;
		   }
		} 
		std :: cout << max;
		return 0; 
}