#include <iostream>
#include <vector>
#include <algorithm>
/*push_back (value) : đẩy giá trị vào trong vector
  pop_back () : đẩy giá trị cuối ra khỏi vector
  erase ( iterator giá trị đầu , giá trị sau giá trị cuối ) : trỏ tới vị trí cần xóa
  clear () : xóa hết ptu trong vector
  duyệt theo iterator ( acts like a pointer, truy cập vào ô nhớ của từng phần tử )
  reverse ()
*/
int main() {
    // Khai báo một vector kiểu int
    std :: vector < int > numbers ;

    // Thêm các số nguyên vào vector
 	int num_of_elements ;
    std :: cout << "Enter the number of elements: " ;
    std :: cin >> num_of_elements ;

    // Thêm các số nguyên vào vector
    int val ;
    std :: cout << "Enter elements of numbers vector: " << std :: endl ;
    for ( int i = 0 ; i < num_of_elements ; ++i ) {
        std :: cin >> val ;
		numbers.push_back( val ) ;
    }
    
    std :: cout << "Elements of numbers vector: " ;
    for ( int i = 0 ; i < numbers.size() ; ++i ) {
        std :: cout << numbers[i] << " " ;
    }
    std :: cout << std :: endl ;
    
    // duyệt vs iterator
    for ( std :: vector < int > :: iterator x = numbers.begin() ; x != numbers.end() ; ++x )
    { //end() : sau phần tử cuối cùng 
      // dịch con trỏ cho đến sau phần tử cuối cùng thì dừng
		std :: cout << *x << " " ;
	}
	std :: cout << std :: endl ;
	
	// duyệt vs auto
	for ( auto x = numbers.begin() ; x != numbers.end() ; ++x )
	{
		std :: cout << *x << " " ;
	}
    std :: cout << std :: endl ;
    // duyệt for each
    for ( int x : numbers )
    {
    	std :: cout << x << " " ;
	}
	std :: cout << std :: endl ;

	std :: cout << numbers.front() << std :: endl ;
	std :: cout << numbers.back() << std :: endl ;
	
	
	int delete_num ;
	std :: cout << "Enter so can xoa : " ;
	std :: cin >> delete_num ;
	std :: vector < int > :: iterator x = numbers.begin() + delete_num ;
    numbers.erase ( x ) ;
    
	std :: cout << "After deleting : " ;
	for ( int x : numbers )
    {
    	std :: cout << x << " " ;
	}
	std :: cout << std :: endl ;
		
    std :: reverse ( numbers.begin() , numbers.end() ) ;
    for ( int x : numbers )
    {
    	std :: cout << x << " " ;
	}
	std :: cout << std :: endl ;
    return 0;
}
