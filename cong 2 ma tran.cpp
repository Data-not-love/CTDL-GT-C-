#include <iostream>
 int main (){
 	int m;
 	int n;
 	int arr1[10][10]; 
 	std :: cin >> m ;
 	std :: cin >> n ;
 	
 	while ( m != n || ( m <= 0 && n <= 0 ))
	 {  std :: cout << "Nhap lai m ";
 		std :: cin >> m;
 		std :: cout << "Nhap lai n ";
 		std :: cin >> n;
	 }

for ( int i = 0 ; i < m ; i++ ){
	for ( int j = 0 ; j < m ; j++ ){
		std :: cin >> arr1[i][j];
	}
}

for ( int i = 0 ; i < m ; i++ ){
	for ( int j = 0 ; j < m ; j++ ){
		std :: cout << arr1[i][j] << " ";
	}
	std :: cout << std :: endl;
}


		
	 return 0;
 }