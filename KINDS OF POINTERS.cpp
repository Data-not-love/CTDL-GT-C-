#include <iostream>
 int main (){
 	int a = 1025;
 	// 1025 = 0001 0000 0010 0101
 	int *p = &a;
 	std :: cout << sizeof(int) << std :: endl;
 	std :: cout << p << std :: endl;
 	std :: cout << *p << std :: endl;
 
 	char *p0;
 	//p0 = p;  lỗi vì p0 là biến pointer kiểu char và nó ko thể tương đương vs biến pointer kiểu int
    p0 = (char*)p;
    std :: cout << static_cast<void*>(p0) << std :: endl; // in ra địa chỉ của a vì biến con trỏ p đc gắn vs địa chỉ của a
	std :: cout << static_cast<int>(*p0);/// khi ép kiểu thì giá trị của byte bắt đầu (ở bên phải) đc gán vs p0. Sau đó , dereference p0, p0
	// là pointer to char và nó sẽ chỉ nhìn vào 1 byte để đoán giá trị
	
	
	
	
 	return 0;
 }