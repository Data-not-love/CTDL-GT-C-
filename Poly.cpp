#include <iostream>
// tạo 2 đa thức
// xem mỗi đa thức có bị trùng số mũ không .Có thì cộng ko thì thôi
// cộng theo hệ sô mũ tương ứng
struct data {
	int exponent ;
	int num ;
	data (){}
	data ( int exponent_input ,  int num_input )
	{
		exponent = exponent_input ; 
		num = num_input ;
	}
};

struct Node {
	data dt ;
	Node *next_ptr ;
};

Node *Create_Node ( data dt )
{
	Node *new_Node = new Node () ;
	new_Node -> dt = dt ;
	new_Node -> next_ptr = nullptr ;
	return new_Node ;
}

Node *Add_Node ( Node *& Head_Node , data dt ){
	Node *New_Node = Create_Node ( dt ) ;
	if ( Head_Node == nullptr )
	{
		Head_Node = New_Node ;
	}
	else
	{
		  Node *temp = Head_Node ; // gán node tạm bằng head. Nếu node tạm khác con trỏ null thì chuyển 
        while ( temp -> next_ptr != nullptr ) {
            temp = temp -> next_ptr ;
        }
        temp -> next_ptr = New_Node ;
	}
	
	return Head_Node ;
}
void enter_Poly ( Node *&Head_Node , int num_of_poly , int num , int exponent , data dt ) {
	std :: cout << "So luong phan tu dt :" ;
	std :: cin >> num_of_poly ;
	for ( int i = 0 ; i < num_of_poly ; i++ ){
		std :: cout << "Nhap he so : " ;
		std :: cin >> dt.num ;
		std :: cout << "Nhap so mu : " ;
		std :: cin >> dt.exponent ;
		Add_Node ( Head_Node , dt );
	}
	
}
void print_Poly ( Node *& Head_Node ) {
	Node *temp = Head_Node ;
	while ( temp != nullptr ){
		std :: cout << temp -> dt.num << "X^" << temp -> dt.exponent << " + " ;
		temp = temp -> next_ptr ;
	}	
	std :: cout << "C" << std :: endl ;
}

//Node *Check_trung_so_mu ( Node *Head_Node ){
//	Node *temp = Head_Node ;
//	Node *Next_Node = temp -> next_ptr ;
//	while ( temp != nullptr && Next_Node -> next_ptr != nullptr  ){
//	
//		if ( temp -> dt.exponent == Next_Node -> dt.exponent )
//		{
//			temp -> dt.num = temp -> dt.num + Next_Node -> dt.num ;
//			
//		}
//		
//		temp = temp -> next_ptr ;
//	}
//	return Head_Node ;
//}
 int main (){
 
 
	Node *Head_Node = nullptr ;

	int num ;
	data dt ;
	int exponent ;
	              
	int so_luong_phan_tu ;
	
	
	 enter_Poly ( Head_Node , so_luong_phan_tu ,num , exponent , dt ) ;
    std :: cout << "Da thuc : " ;
    print_Poly ( Head_Node ) ;
    
// //   Head_Node = Check_trung_so_mu ( Head_Node ) ;
//    std :: cout << "Sau khi cong trung so mu : ";
//    print_Poly ( Head_Node ) ;
    

	return 0 ;
}