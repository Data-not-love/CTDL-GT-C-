//pointer arithmetic
#include <iostream>
 int main (){
 	int a = 11;
 	int *p = &a;
 	std :: cout << p << std :: endl; // kết quả là địa chỉ của biến a = 0x7afe14
    std :: cout << *p << std :: endl; // in ra 11
    std :: cout << *p + 1 << std ::endl; // in ra giá trị bên trong ô nhớ của a và cộng thêm 1
 	std :: cout << (p+1) << std :: endl; // 0x7afe18 vì a là một biến int và nó sẽ chiếm 4 bytes bộ nhớ nên sẽ cộng vào địa chỉ của a
 	std :: cout << *(p+1) << std :: endl; // ra giá trị rác vì ko có giá trị nào đc gắn vào ô nhớ p+1
    
    double b = 1.111;
    double *k = &b;
    std :: cout << k << std :: endl; // kết quả địa chỉ biến b = 0x7afe00
    std :: cout << (k+1) << std :: endl; // 0x7afe08 vì b là biến double , sẽ chiếm 8 byte trong bộ nhớ và cộng vào địa chỉ của b
    
    char g = 'k';
    char *charac = &g;
    std :: cout << static_cast<void*>(charac) << std :: endl; // nếu in = vs char std::cout, nó sẽ cố gắng in ra một chuỗi ký tự, bắt đầu từ địa chỉ mà con trỏ đang trỏ tới, cho đến khi gặp ký tự null ('\0').
    std :: cout << static_cast<void*>(charac+1) ;
 	return 0;
 }