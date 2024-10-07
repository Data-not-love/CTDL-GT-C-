#include <iostream>
// stack vs arr
#define MAX 4
int stack_arr [MAX] ;
int top = -1 ;

void push ( int val )
{
	if ( top == MAX -1 )
	{
		std :: cout << "Stack overflow" ;
		exit ( 1 ) ;
	}
	top += 1 ; // tăng index lên 0 để thêm vào stack_arr
	stack_arr [top] = val ;
	}

// hàm pop sẽ trả về giá trị đã xóa nên nó sẽ lưu trữ ở nơi nào đó trong bộ nhớ
int pop (){
	if (top <= -1)
	{
		std :: cout << "Stack Underflow " ;
		exit ( 1 ) ;
	}
int val = stack_arr[top];
         top -= 1 ;
         return val ;
}
int main (){

	     int data ;                
    push ( 12 ) ;
	push ( 34 ) ;
	push ( 78 ) ;
	push ( 90 ) ;
//	push ( 10 );
	
	for ( int i = 0 ; i < 4 ; i++ ){
	 data = pop ( ) ;
	 std :: cout << data << std :: endl ;
}
     data = pop ( ) ;
	 std :: cout << data << std :: endl ;
//	pop ( 34 );
//	pop ( 78 );
//	pop ( 90 );
////	pop ( 10 );
	return 0;
}