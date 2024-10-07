// chèn 1 phần từ trong vector
#include <bits/stdc++.h>
 int main (){
 	std :: vector <int> v;
 	int n ;
 	std :: cout << "Enter vector : ";
	std :: cin >> n;
	
	// cách 1 nhập phần tử vector 
     for ( int i = 0; i < n ; i++){
   
     	int temp;
     	std :: cin >> temp ;
     	v.push_back(temp);
	 }
 	 for ( int i = 0 ; i < v.size() ; i++){
 	 	std :: cout << v[i] << " ";
	  }
	  int b,c;
	  std :: cout << "Value of B : ";
	  std :: cin >> b;
	  
	  std :: cout << "Enter Iterator position : ";
	  std :: cin >> c;
	  if ( c >=0  && c <n )
	  v.insert (v.begin()+ c ,b);
	  
	  for ( int x : v){
	  	std :: cout << x << " ";
	  }
 	return 0;
 }