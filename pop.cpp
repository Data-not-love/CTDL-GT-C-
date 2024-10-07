#include <iostream>
// stack vs arr
#define MAX_SIZE 100
int stack_arr [MAX_SIZE] ;
int top = -1 ;
	int n ;
int push ( int val ){
	if ( n >= MAX_SIZE && top >= MAX_SIZE-1 ){
		std :: cout << "stack overflow" ;
		return 0 ;
	}
	top += 1 ; // tăng index lên 0 để thêm vào stack_arr
	stack_arr [top] = val ;
	return val ;
}

// hàm pop sẽ trả về giá trị đã xóa nên nó sẽ lưu trữ ở nơi nào đó trong bộ nhớ
int pop ( ){
	if ( n <= 0  && top == -1 )
	{
		std :: cout << "Stakc UnderFlow " ;
	
	}
	int top_most_value = stack_arr[top] ;
	top -= 1 ;
	return top_most_value ;
}
int main (){

	int val ;
	std :: cout << "Nhap so luong pt cua stack : " << std :: endl ;
	std :: cin >> n ;
	int pop_data ;
	// push : đẩy giá trị vào stack
	for ( int i = 0 ; i < n ; i++ ){
		std :: cin >> val ;
		push ( val ) ;
	}
	

    // pop đá giá trị ra khỏi stack	
	for ( int i = 0 ; i < n ; i++ ){
		std :: cout << "| " << pop ( )  << " |" << std :: endl ;
	}
	
    
	return 0 ;
}