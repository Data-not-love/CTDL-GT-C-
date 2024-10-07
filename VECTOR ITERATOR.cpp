#include <bits/stdc++.h>
 int main (){
    std :: vector <int> v = { 1 , 2 , 3 , 4 , 5};
 	std :: vector <int> :: iterator it = v.begin();// cú pháp khai báo iterator
 	std :: vector <int> :: reverse_iterator it1 = v.rbegin();
 	std :: cout << *it << std :: endl; // in ra 1 ,* : toán tử giải tham chiếu : dereference
 	std :: cout << *it1 << std :: endl ;
 	++it;// dịch chuyển một ô
 	std :: cout << *it << std :: endl;
 	
 	std :: vector <int> :: iterator it3 = v.begin() + 3;
 	std :: cout << *it3 << std :: endl;
 	
// 	std :: vector <int> :: reverse_iterator it4 = v.rbegin() - 3;
// 	std :: cout << *it4 << std :: end;
//  sai vì ko thể trừ 1 con trỏ từ 1 con trỏ khác để di chuyển no ngược lại
//	std :: vector <int> :: reverse_iterator it4 = v.rbegin();
    std :: vector<int>::reverse_iterator it4 = v.rbegin();
	std :: advance (it4,3);
    std :: cout << *it4 << std :: endl;
    

	
	 return 0;
 }