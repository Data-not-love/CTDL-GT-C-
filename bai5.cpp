#include <iostream>
#include <string>

int main() {
    std::string str, result;
    std::getline(std::cin, str);
    
    if (str.length() > 20){
    	std :: cout << "N";
	}
	
	
	
	for ( int i = 0 ; i < str.length () ;i++){
		if ( str [i] != ' ' ){
			result += str[i];
		} 
	}
	
	std :: cout << result <<"@vku.udn.vn";
    return 0;
}
