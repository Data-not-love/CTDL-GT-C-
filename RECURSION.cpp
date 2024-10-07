#include <bits/stdc++.h>
long long gt ( int n ){
	if ( n == 1 )
	return 1;
	else 
	   return n*gt(n-1);
}
 int main (){
 	int n;
 	std :: cin >> n;
 	std :: cout << gt(n) ;
 	return 0;
 }