#include <iostream>
#include <utility>
#include <vector>
int main (){
	int num_of_pair ;
	std :: cout << "Number of pair : " ;
	std :: cin >> num_of_pair ;
	
	int first_val ;
	int second_val ;
	
	std :: vector < std :: pair < int , int > > vector_1 ;
	for ( int i = 0 ; i < num_of_pair ; ++i )
	{
			std :: cin >> first_val ;
	    	std :: cin >> second_val ;
        	vector_1.push_back({first_val,second_val}) ;
	}
	
	for ( int i = 0 ; i < vector_1.size() ; ++i )
    { 
    	std :: cout << vector_1[i].first << " " << vector_1[i].second << std :: endl ;
	}

	for ( std :: pair < int , int > x : vector_1 ){
		// khi duyệt for each thì x phải trùng kiểu dữ liệu vs bên trong vector  
		std :: cout << x.first << "   " << x.second << std :: endl ;
	}
	
	return 0 ;
}