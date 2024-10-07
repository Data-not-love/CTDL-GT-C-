#include<iostream>
int n ;
int arr[200] ;
int Linear_Research ( int val ){
	for ( int i = 0 ; i < n ; i++ ){
		if ( arr[i] == val ){
		return i ;
	}}
	return -1 ;
} 
int main (){
 	std :: cin >> n ;
 	for ( int i = 0 ; i < n ; i++ ){
 		std :: cin >> arr[i] ;
	}
	for ( int i = 0 ; i < n ; i++ ){
 		std :: cout << arr[i] << std :: endl ;
	}
	
	int value ;
	std :: cin >> value ;
	
	int	index = Linear_Research ( value ) ;
	if ( index != -1 ){
		std :: cout << "Index : "<<index ;
	}
	else 
	std :: cout << "Nothing" ;
	
 	return 0;
 }