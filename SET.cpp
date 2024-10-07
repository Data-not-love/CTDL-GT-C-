#include <bits/stdc++.h>
 int main (){
 	std :: set < int > set1;
 	
 	int arr [7] = { 1 , 2 , 3,1 ,2,4 ,5 };
 	for (int x : arr){
 		set1.insert(x);// chèn phần tử vào set
	 }
	 
	 for ( int x : set1 ){
	 	std :: cout << x << " ";
	 }
	 std :: cout << "Set size : ";
	 std :: cout << set1.size();
 	return 0;
 }