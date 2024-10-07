#include <iostream>
#include <cmath>
 int main (){
 	int n;
 	 std :: cin >> n;
 	  
 	 int arr[50];
 	 
 	 for ( int i = 0 ; i < n ; i++ ){
 	 	std :: cin >> arr[i];
	  }
	  
	 	 for ( int i = 0 ; i < n ; i++ ){
 	 	std :: cout << arr[i] << " ";
	  }
	  
	  
	  int max = arr[0];
	     for ( int i = 0 ; i < n ; i++ ){
 	        if ( arr[i] > max ){
 	        	max = arr[i];
			 } 
	  }
		std :: cout << "\n" << max;
		
		int dem  = 0;
		
	for ( int i = 0 ; i < n ; i++ ){
		if (arr [i] == max){
			dem++;
		}
	}
	   std :: cout << "\n" << dem;
 	return 0;
 }