#include <iostream>
#include <stack>
// push
// pop
// top
// size
// isEmpty
// O(1) ; vì chỉ thao tác với phần tử trên cùng
 int main ()
{
	std :: stack <int> first_stack ;
	first_stack.push (2) ;
	first_stack.push (23) ;
	first_stack.push (45) ;
	

	std :: cout << first_stack.top () << std :: endl ;
	first_stack.pop () ;  // đá 45 ra khỏi stack
	std :: cout << first_stack.top () << std :: endl ;
	std :: cout << first_stack.size() << std :: endl ;
	std :: cout << first_stack.empty() ;
 	return 0 ;
}