#include <iostream>
 int main (){
 	int x = 5;
 	int *p = &x;// thứ thay đổi là giá trị trong ô nhớ x
 	*p = 6;
 	 std :: cout << "Dia chi cua o nho x : " << &x << std :: endl;
 	 std :: cout << "Dia chi o chua gia tri 6 : " << p << std :: endl;
 	 std :: cout << "Dia chi cua bien con tro p : " << &p << std :: endl; // 0x7afe08
	 int **q = &p; // biến con trỏ -> con trỏ q đc gán = địa chỉ của biến con trỏ p
	               // mà địa chỉ của biến con trỏ p lưu giá trị = địa chỉ ô nhớ của số 6 ( a.k.a X )
	               // => giải tham chiếu của q đang trỏ tới giá trị = địa chỉ ô nhớ của số 6
                   // giải tham chiếu của giải tham chiếu : giải tham chiếu của q đang trỏ tới giá trị = địa chỉ ô nhớ của giá trị 6. 
	               // Thì giải tham chiếu của giải tham chiếu sẽ in ra gía trị bên trong ô nhớ 0x7afe14 là 6
	 std :: cout <<"Gia tri giai tham chieu cua giai tham chieu : " << *(*q) << std :: endl;  
	 std :: cout <<"Dia chi la cua bien con tro -> con tro: "<< &q << std :: endl; // 0x7afe00
	 int ***r = &q; // biến con trỏ -> con trỏ -> con trỏ r gán = địa chỉ của q 0x7afe00
                    // giải tham chiếu r sẽ trỏ tới giá trị bên trong ô nhớ 0x7afe00 = địa chỉ của biến con trỏ -> con trỏ q = 0x7afe08
                    // giải tham chiếu -> giải tham chiếu r sẽ trỏ tới giá trị bên trong 0x7afe08 = là địa chỉ của ô nhớ chứa số 6 = 0x7afe14
                    // giải tham chiếu -> giải tham chiếu -> giải tham chiếu sẽ trỏ tới giá trị bên trong ô nhớ 0x7afe14 = 6 ( địa chỉ ô nhớ x )
     std :: cout << r << std :: endl; // 0x7afe00
     std :: cout << *r << std ::endl; // 0x7afe08
	 std :: cout << *(*r) << std :: endl; // 0x7afe14
	 std :: cout << *(*(*r)) << std :: endl ; // 6
	

	
	
	 ***r = 10; // biến này trỏ tới ô nhớ x và thay đổi giá trị = 10
	 std ::  cout << x << std :: endl; // 
	 **q = *p + 2; // mà biến con trỏ p cux trỏ tới địa chỉ ô nhớ x và lấy giá trị bên trong ( 10 )
	 std :: cout << x << std :: endl; 
	 
 	return 0;
 }