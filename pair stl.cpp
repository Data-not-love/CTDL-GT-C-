#include <iostream>
#include <utility> // Thư viện utility để sử dụng pair
// lưu các cặp giá trị có kiểu giống or khác nhau
/*swap (pair)*/
#include <algorithm>
int main (){
	std :: pair < int , float > pair_1 ;
	int first_val ;
	float second_val ;
	std :: cin >> first_val ;
	pair_1.first = first_val ;
	
	std :: cin >> second_val ;
	pair_1.second = second_val ;
	std :: cout << "Pair 1 val : " ;
	std :: cout << pair_1.first << "   " << pair_1.second << std :: endl ;
	 
	std :: pair < int , float > pair_2 ;
	int first_val1 ;
	float second_val1 ;
	std :: cin >> first_val1 ;
	pair_2.first = first_val1 ;
	
	std :: cin >> second_val1 ;
	pair_2.second = second_val1 ;
	
	std :: cout << "Pair 2 val : " ;
	std :: cout << pair_2.first << "   " << pair_2.second << std :: endl ;
	
	pair_1.swap( pair_2 ) ; // để hoán đổi đc thì cả hai phải cùng kiểu
	std :: cout << "Pair 1 values after swap: " << pair_1.first << " " << pair_1.second << std :: endl ;
    std :: cout << "Pair 2 values after swap: " << pair_2.first << " " << pair_2.second << std :: endl ;
	return 0;
}