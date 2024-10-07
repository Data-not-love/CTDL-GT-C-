#include <iostream>
#include <algorithm>

int Partition ( int arr[1000] , int left , int right){
	int mid_pivot = arr[(left + right )/2] ;
	int i = left - 1 ;
	int j = right + 1 ;
	while ( true ){
		// nếu giá trị bên trái lơn hơn pivot thì đưa ra sau pivot
		do
		{
			i++ ;
		} while ( arr[i] > mid_pivot ) ;
		// nếu giá trị bên phải nhỏ hơn pivot thì đưa ra trc pivot
		do
		{
		    j-- ;
		} while ( arr[j] < mid_pivot ) ;
		
		if ( i >= j )
            return j ;
        std :: swap( arr[i], arr[j]) ;
	}
}

void Quick_Sort ( int arr[1000] , int left , int right , int n )
{
	if ( left < right )
	{
		int pivot =  Partition(arr, left, right);
        Quick_Sort (arr, left, pivot , n );
        Quick_Sort (arr, pivot + 1, right , n );
	}
	

	
}
int main (){
	int n ;
	std :: cin >> n ;
	int arr [1000] ;
	for ( int i = 0 ; i < n ; i++ ){
		std :: cin >> arr[i] ;
	}
	
	std :: cout << "Before Sorting : " ;
	for ( int i = 0 ; i < n ; i++ ){
		std :: cout << arr[i] << " " ;
	}
	std :: cout << " " << std :: endl ;
	
	
	
	
	Quick_Sort ( arr , 0 , n-1 ,  n ) ;
		std :: cout << "After Sorting in Deceding : " ;
	for ( int i = 0 ; i < n ; i++ ){
		std :: cout << arr[i] << " " ;
	}
	return 0 ;
}