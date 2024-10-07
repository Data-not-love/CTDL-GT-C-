//pair in pair 
// pair < pair , int > 
#include <iostream>
#include <utility>
#include <vector>
int main (){
	int n ;
	std :: vector < pair <pair<int,int> ,int  >> vector_1 ;
	vector_1.push_back({{1,3},9});
	return 0 ;
}