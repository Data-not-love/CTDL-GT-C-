#include <bits/stdc++.h>
 int main (){
 	std :: vector <int> v = {1,2,3,4,5};
 	std :: vector <int> :: iterator it;
 	 for ( it = v.begin(); it != v.end() ; it++){
 	 	std :: cout << *it << " ";
	  }
	  std :: cout << " " << std :: endl;
	  std :: vector <int> g = {7,8,9,10,11};
	 for ( auto x : g ){ // auto ch?p nh?n m?i ki?u d? li?u
	 	std :: cout << x << " ";
	 }
 	return 0;
 }