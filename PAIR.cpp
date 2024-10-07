#include <bits/stdc++.h>
// pair : kiểu dữ liệu
 int main (){
 	std :: pair<int , int> p;
     	// first  , second
     	p.first = 100 ; // gán thành phần đầu tiên 100
     	p.second = 200 ; // gán thành phần thứ 2 là 200
     	 std :: cout << p.first << std :: endl;
 	// cách 2
 	std :: pair<int , int> q = std :: make_pair(100, 200);
 	std :: cout << q.first << "  " << q.second;
 	// cách 3
	std :: pair<int , int> k = {100,200}; 
 }