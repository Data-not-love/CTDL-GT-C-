#include <iostream>
// nh?p s? lu?ng ph?n t? d? pop xong in stack m?i
int top_stack =  -1 ;
int stack_arr[200] ;
void push ( int value  )
{       top_stack += 1;
		stack_arr [top_stack] = value ;
}	
 
int pop () 
{   int val = stack_arr[top_stack] ;
         top_stack -= 1 ;
         return val ;
}

int main ()
{   int pop_value ;
    int pop_number ; 
  	int num_of_val ;
 	std :: cout << "Enter Number : " ;
 	std :: cin >> num_of_val ;
 	int val ;
 	
 	if ( num_of_val < 0 ) 
	{
 		std :: cout << "Stack Underflow" ;
	}
	
	else if ( num_of_val > 200 )
    {
		std :: cout << "Stack Overflow" ;
	}
	
	else
	{
 		for ( int i = 0 ; i < num_of_val ; i++ )
		{
 		std :: cout << "Push : " ;
 		std :: cin >> val ;
 		push ( val ) ;
	    }	
    }
    
    std :: cout << "Number of pop value : " << std :: endl ;
	std :: cin >> pop_number ;
	
	for ( int i = 0 ; i < pop_number  ; i++ )
	{
    	pop_value = pop () ;
    	std :: cout << "Pop value : " << pop_value << std :: endl ;
    }
 	return 0 ;
 }