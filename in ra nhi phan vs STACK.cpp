// Chuyển số sang hệ nhị phân vs Stack
// Ý tưởng : tạo số nguyên 
// chia dư số đó cho 2
// sau mỗi lần chia thì push số dư vào stack 
// pop ra và in kết quả
# include <iostream>
# include <stack>
int main ()
{
	int normal_number ;
	int nguyen ;
	int du ;
	std :: stack < int > binary_stack ;
	std :: cout << "Enter a number to convert :" ;
	std :: cin >> normal_number ;

		while ( normal_number != 0 )
		{
			du = normal_number % 2 ; // tìm số dư ( 0 or 1 )
			nguyen = normal_number / 2 ; // lấy nguyên
			normal_number = nguyen ; // vì phần nguyên sẽ chia tiếp cho 2 nên gán = normal_number
			binary_stack.push (du) ; // đấy số dư vào stack
		}
		
		std :: cout << "After coverting to binary code :" ;
		while ( binary_stack.empty() != true )
		{
			std :: cout << binary_stack.top() ;
		    binary_stack.pop() ;
		}
	
	return 0 ;	
}