#include <iostream>
#include <cmath>

long long giaiThua(int n) {
    long long giaithuaI = 1;
    for(int i = 1; i <= n; i++) {
        giaithuaI *= i;
    }
    return giaithuaI;
}

long long toHop(int n) {
    return giaiThua(n) / (giaiThua(2) * giaiThua(n - 2));
}


 int main () {
 	int n;
 	  std :: cin >> n;
 	  int dem = 0;
 	  int arr[1000];
 	 
 	  for ( int i = 0 ; i < n ; i++ ){
 	           std :: cin >> arr[i];	
	  }
 	  for ( int i = 0 ; i < n ; i++){
 	        if ( arr[i] % 28 == 0 ){
 	        	dem ++;
			 }
	   }
	   
	   int duI ;
	   int duJ ;
	 for ( int i = 0  ; i < n  ; i++){
	 	 duI = arr[i] % 28;
	 	for ( int j = i+1 ; j < n ; j++){
	 		duJ = arr[j] % 28;
	 		if ( ( duI != 0 && duJ !=0 ) && ( duJ + duI == 28 ) )
	 		{
	 			dem++;
			 }
		 }
	 }
	 std :: cout << toHop( dem );
	
 	return 0;
 }