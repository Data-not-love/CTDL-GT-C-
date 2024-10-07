//IN RA CÁC GIÁ TRỊ KHÁC NHAU TRONG MẢNG VS SET
#include <bits/stdc++.h>
 int main (){
 	int n;
 	std :: cin >> n;
 	int arr[n];
 	for ( int i = 0 ; i < n ; i++){
 		std :: cin >> arr[i] ;
	 }
	 std :: set < int > setTest ;
	 for ( int x : arr){// phải là arr vì setTest bằng rỗng
	 	setTest.insert(x);// O(log(n))
	 }
	 
	 	 for ( int x : setTest ){
	 	std :: cout << x << " ";
	 }
 	return 0;
 }