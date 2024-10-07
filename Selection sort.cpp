#include <iostream>
#include <algorithm>
void SelectionSort_decrease( int n, int arr[1000]  ) 
{
	
	for ( int i = 0 ; i < n -1 ; i++ ){
		int index_min = i ;
		for ( int j = i+1 ; j < n ; j++ ){
			if ( arr [j] < arr [index_min] ){
				index_min = j  ;
			}	
		}
        std :: swap ( arr[i] ,arr[index_min] ) ;
	}
	
		
	for ( int i = 0 ; i < n ; i++ )
	{
 		std :: cout << arr[i] << "  " ;
	}
}

void SelectionSort_increase( int n, int arr[1000]  ) 
{
	
	for ( int i = 0 ; i < n -1 ; i++ ){
		int index_max = i ;
		for ( int j = i+1 ; j < n ; j++ ){
			if ( arr [j] > arr [index_max] ){
				index_max = j  ;
			}	
		}
		std :: swap ( arr[index_max] ,arr[i] );
	}
	
		
	for ( int i = 0 ; i < n ; i++ )
	{
 		std :: cout << arr[i] << "  " ;
	}
}



int main (){
 	int n ;
 	std :: cin >> n ;
 	int arr[1000] ;
 	
 	while ( n <= 0 )
	{
 		std :: cin >> n ;
	}
	 
	for ( int i = 0 ; i < n ; i++ )
	{
		std :: cin >> arr[i] ;
	}
	
	std :: cout << "Before Sorting : " ;
 	for ( int i = 0 ; i < n ; i++ )
	{
 		std :: cout << arr[i] << "  " ;
	}
	std :: cout << "  " << std :: endl;
	
	std :: cout << "After Decreasing : " ;
	SelectionSort_decrease ( n ,arr ) ;
	std :: cout << "  " << std :: endl ;
	
	std :: cout << "After Increasing : " ;
	SelectionSort_increase ( n ,arr ) ;
	
	
 	return 0;
 }