#include <bits/stdc++.h>
int count [100001];

 int main (){
 	int n ;
 	  std :: cin >> n ;
 	int arr[n];
 	int dem;
 	for ( int i = 0; i < n ; i++ ){
 	 	std :: cin >> arr[i];
	  }
	   for ( int i = 0 ; i < n ; i++ ){
	   	//tang t?n su?t c?a arr[i]
	   	count [ arr[i] ] ++;
	   }
	   
	   for ( int i = 0 ; i < 100000 ; i++ ){
	   	if (count [i]!=0 ){
	   		std :: cout << i << " " << count[i] << std :: endl;
		   }
	   }
	  
	  return 0;
 }