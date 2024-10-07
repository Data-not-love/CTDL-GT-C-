#include <iostream>
const int MAX_SIZE = 100;
int front_queue = -1;
int rear_queue = -1;
int n;
int arr[MAX_SIZE];
bool IsFull (){
	if ( rear_queue == n - 1 )
		return true ;
	else
		return false ;
}
 
bool IsEmpty (){
	if ( front_queue == -1 && rear_queue == -1 )
		return true ;
	else
		return false ;
}

int Enqueue ( int val ){
	if ( IsFull () ){
		exit ;
	}
	if ( IsEmpty () ){
		front_queue ++ ;
		rear_queue ++ ;
	}
	else
	{
		rear_queue ++ ;
	}
	return arr[rear_queue] = val ;
} 
int DeQueue ( ) {
	int x ;
	if ( IsEmpty () ){
		exit;
	}
	if ( front_queue == 0 && rear_queue == 0 ){
		x = arr [ front_queue ];
		front_queue -- ;
		rear_queue -- ;
	}
	if ( front_queue == 0 && ( rear_queue > 0 && rear_queue <= n -1 ))
	{	
		x = arr [ front_queue ];
		front_queue ++ ;
	}
	return x ;
}


int main (){
	std :: cin >> n ;
	std :: cout << Enqueue (34);
	std :: cout << Enqueue (89);
	
	return 0 ;
	
}