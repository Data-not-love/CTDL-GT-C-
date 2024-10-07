#include <bits/stdc++.h>
//vector
int main (){
	std :: vector <int> v; //vector rỗng
	v.push_back(100); // thêm giá trị 100 vào vector vào cuối
	v.push_back(200); // {100,200}
	v.push_back(300); // {100,200,300}
	
	std :: cout << v.size() << std :: endl; // đưa ra kích cỡ vector
	
	for ( int i =0 ; i < v.size(); i++){
		std :: cout << v[i] << " ";
	}
	
	for ( int x : v){
			std :: cout << x << " ";
	}
	
	
	
	std :: vector <int> k;
	int n ;
	std :: cin >> n;
	
	// cách 1 nhập phần tử vector 
     for ( int i = 0; i < n ; i++){
   
     	int temp;
     	std :: cin >> temp ;
     	v.push_back(temp);
	 }
	 
//	 cách 2 
//	 std :: vector <int> k(n);
//	 for ( int i = 0; i < n ; i++ ){
//	 	std :: cin >> k[i];
//	 }
 
	 	for ( int i = 0; i < n ; i++ ){
			std :: cout << k[i] << " ";
	
	// cách 1 nhập phần tử vector 
     for ( int i = 0; i < n ; i++){
   
     	int temp;
     	std :: cin >> temp ;
     	v.push_back(temp);
	 }
	 
//	 cách 2 
//	 std :: vector <int> k(n);
//	 for ( int i = 0; i < n ; i++ ){
//	 	std :: cin >> k[i];
//	 }
 
	 	for ( int i = 0; i < n ; i++ ){
			std :: cout << k[i] << " ";
	}
	
	
	return 0;
	}
}