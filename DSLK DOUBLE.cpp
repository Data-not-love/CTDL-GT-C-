#include <iostream>
struct DataSV {
	std :: string name ;
	double GPA ;
	DataSV(){
	}
	DataSV( std :: string ten , double diem ){ // tham số sẽ tượng tự vs input trong ngữ cảnh này
		name = ten ;
		GPA = diem ;
	}
};
struct Node {
	DataSV Data_of_Node ;
	Node * prev_ptr ;
	Node * next_ptr ;
};

Node *Create_Node ( DataSV dt ){
	Node *New_Node = new Node () ;
	New_Node -> Data_of_Node = dt ;
	New_Node -> prev_ptr = nullptr ;
	New_Node -> next_ptr = nullptr ; 
	return New_Node ;
}

void Add_Node ( Node *&Head_Node , DataSV dt ) {
    if (Head_Node == nullptr) {
        // Nếu danh sách rỗng, thêm nút mới và cập nhật Head_Node
        Head_Node = Create_Node ( dt ) ;
    } else {
        // Tìm nút cuối cùng của danh sách liên kết đôi
        Node *temp = Head_Node ;
        while ( temp -> next_ptr != nullptr ) {
            temp = temp -> next_ptr ;
        }
        // Tạo nút mới và kết nối với nút cuối cùng
        Node *new_Node = Create_Node( dt ) ;
        temp -> next_ptr = new_Node ;
        new_Node -> prev_ptr = temp ;
    }
}


Node* add_at_first ( Node *&Head_Node , DataSV sv ){
	Node *added_Node = Create_Node ( sv ) ; // tạo 1 Node trong dslk đôi
	added_Node -> next_ptr = Head_Node ; // đuôi Node muốn thêm trỏ vào head
	  if ( Head_Node != nullptr ) { // ý đây là chưa có, chưa tồn tại Node head chứ ko phải Node Head trỏ tới null
	     Head_Node -> prev_ptr = added_Node ; // phần con trỏ prev của head trỏ tới Node mới 
            }
	Head_Node = added_Node ; // 
	added_Node -> prev_ptr = nullptr ;
	return Head_Node ;
}

void print_doubly ( Node * Head_Node ){
	Node *temp = Head_Node ;
	while ( temp != nullptr ){
		 std :: cout << "| Ten " << temp -> Data_of_Node.name << "  Diem " << temp -> Data_of_Node.GPA << " | -->" ;
		 std :: cout  ; 
		 temp = temp -> next_ptr;
	}
	std :: cout << " NULL" << std :: endl ;
}

 int main (){
 	Node *Head_Node = nullptr ;
 	DataSV sv;
 	int n ;
 	std :: string name ;
 	double GPA ;
 	std :: cout << "Nhap sl Node : " ;
 	std :: cin >> n ;
 	for ( int i = 0 ; i < n ; i++ ){
 		std :: cout << "Ten Hoc Sinh : " ;
 		std :: cin.ignore() ;
 		std :: cin >> sv.name ;
 		std :: cout << "Nhap diem : " ;
 		std :: cin >> sv.GPA ;
 		Add_Node ( Head_Node , sv ) ;
 	}
 	std :: cout << "DS trc : " << std :: endl ;
    print_doubly ( Head_Node ) ;

   	std :: cout << "Chen Hoc Sinh : " ;
	std :: cin.ignore() ;
	std :: cin >> sv.name ;
 	std :: cout << "Chen diem : " ;
 	std :: cin >> sv.GPA ;
    std :: cout << "DS sau them : " << std :: endl ;
    Head_Node = add_at_first ( Head_Node , sv ) ;
    print_doubly ( Head_Node ) ;
 	return 0;
 }