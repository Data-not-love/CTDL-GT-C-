#include <iostream>
void PassByVal (int value){// truyền bản sao của một biến vào hàm này
   value = 10;
   std :: cout << "Gia tri Pass By Val : "<< value << std :: endl;
}
void PassByRef (int &ref){// truyền giá trị thật của biến đó vào hàm này
    ref = 20;
    std :: cout << "Gia tri Pass By Ref : " <<ref << std :: endl;
}
void PassByPtr (int *ptr){
   	*ptr = 300;
	std :: cout << *ptr;
}
 int main(){
 	int x = 1;
 	int *xptr = &x;
 	
 	
 	std :: cout <<"Gia tri dau : " <<x << std :: endl;
 	PassByVal (x);
 	std :: cout <<"Gia tri sau PASS BY VAL : "<< x << std :: endl;
 	std :: cout << "   " << std :: endl;
 	
 	std :: cout <<"Gia tri dau : " <<x << std :: endl;
 	PassByRef (x);
 	std :: cout <<"Gia tri sau PASS BY REF : "<< x << std :: endl;
 	std :: cout << "   " << std :: endl;
 	
// 	std :: cout <<"Gia tri dau : " << x << std :: endl;
// 	std :: cout <<"Pointer Val : " <<*xptr << std :: endl;// dereference : hãy in ra giá trị mà con trỏ đang muốn trỏ tới
// 	PassByPtr(xptr);
 	
 	return  0;
 }