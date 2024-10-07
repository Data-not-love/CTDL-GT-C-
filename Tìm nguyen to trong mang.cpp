#include <bits/stdc++.h>
using ll = long long;
bool nt (ll n){
	 for ( int i = 2 ; i <= sqrt(n) ; i++){
	 	if ( n%i == 0 ) return false;
	 }
	 return n > 1;
}
 int main (){
 	int n;
 	 using std :: cin ;
 	 using std :: cout ;
    cin >> n ;
 	int arr[n];
 	   for ( int i = 0 ; i < n ; i++ ){
 	   	 cin >> arr[i];
		}
		
		for (int i =0 ; i< n ; i++ ){
			if (nt(arr[i])){
				cout << arr[i] << " ";
			}
		}
 	return 0;
 }