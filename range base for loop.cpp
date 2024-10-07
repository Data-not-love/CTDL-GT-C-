#include <bits/stdc++.h>
using ll = long long;

 int main (){
 	int n;
 	std :: cin >> n ;
 	int arr[n];
  for (int &x : arr) std :: cin >> x;
  
		
		for ( int x : arr){
			std :: cout << x << " ";
		}
	    for ( int x : arr){
	    	 x = 100; // ko thay đổi giá trị của mảng truewf khi thêm tham chiếu
	    	
		}
		
		std :: cout << "  \n";
		for (int i =0 ; i< n ; i++ ){
				std :: cout << arr[i] << " ";
			}
		
 	return 0;
 }