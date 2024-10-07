#include <iostream>
void InsertionSort ( int n , int arr[1000] )
{
	for ( int i = 1 ; i < n ; i++ )
	{
		int comparision_val = arr[i] ;
	int	j = i - 1 ;
		while ( j >= 0 && comparision_val < arr [j] )
		{
			arr[j+1] = arr[j] ;
			j -= 1 ;
		} 
		arr[j+1] = comparision_val ;
	}
	
	for ( int i = 0 ; i < n ; i++ )
	{
		std :: cout << arr[i] << " " ;
	}
}


int main (){
	int n ;
	std :: cin >> n ;
	int arr[1000];
	while ( n <= 0 ) {
		std :: cin >> n ;
	}
	
	for ( int i = 0 ; i < n ; i++ ){
		std :: cin >> arr[i] ;
	}
	
	
	std :: cout << "Before Sorting : " ;
	for ( int i = 0 ; i < n ; i++ ){
		std :: cout << arr[i] << " " ;
	}
	std :: cout << " " << std :: endl ;
	
	std :: cout << "After Sorting : " ;
	InsertionSort ( n , arr ) ;
	
	return 0;
}