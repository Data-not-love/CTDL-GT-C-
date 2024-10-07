// capture list toán tử lambda
# include <iostream>
int main (){
	int a = 1 ;
	auto f = [a]() { return a*9; }; // a capture tham trị
	auto f1 = [&a]() { return a++; }; // a capture tham chiếu
	std :: cout << f() << std :: endl ;
	std :: cout << f1() ;
	return 0;
}