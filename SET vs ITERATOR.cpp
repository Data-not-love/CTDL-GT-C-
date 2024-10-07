//duyệt set vs iterator
#include <bits/stdc++.h>
 int main (){
 	int n; 
 	std :: cin >> n;
 	int arr[n];
 	std :: set <int> se;
 	 for ( int i = 0 ; i < n ; i ++ ){
 	 	std :: cin >> arr[i];
	  }
	  	 std :: set < int > setTest ;
	 for ( int x : arr){// phải là arr vì setTest bằng rỗng
	 	setTest.insert(x);// O(log(n))
	 }
	 
	 	 for ( int x : setTest ){
	 	std :: cout << x << " ";
	 }
	 
	  std :: set<int> :: iterator it;
	  for ( it = se.begin(); it != se.end() ;it++){
	  	std :: cout << *it<< " ";
	  } 
 	return 0;
 }