#include <iostream>
#include <stack>
 int main (){
 	std :: stack < char > stack ;
 	std :: string name ;
 	std :: cout << "Name : " ;
 
	std :: getline ( std :: cin , name ) ;
	for (int i = 0 ; i < name.size() ; i++ ){
		stack.push(name[i]);
	}
	

    for (int i = 0 ; i < name.size() ; i++ ){
		std :: cout << stack.top() ;
		stack.pop() ;
	}
 	 	return 0 ;
 }