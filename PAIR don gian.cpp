#include <bits/stdc++.h>
 int main (){
 	int n ;
 	std :: cin >> n;
 	std :: pair <int , int> a[n];
 	  for ( int i = 0 ; i < n ; i++ ){
 	  	std :: cin >> a[i].first ;
		std :: cin >> a[i].second ;
	   }
	   
	   for ( int i = 0 ; i < n ; i++){
	   	std :: cout << a[i].first << "  " << a[i].second << std :: endl;
	   }
 	return 0;
 }