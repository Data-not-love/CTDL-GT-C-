#include <iostream>
struct Node{
	int num ;
	Node *next_ptr ;
};

Node *Create_new_Node ( int val ){
	Node * new_Node = new Node () ;
	new_Node -> num = val ;
	new_Node -> next_ptr = nullptr ;
	return new_Node ;
}

void add_Node ( Node *& head_Node , int val ){
		if ( head_Node == nullptr ){
		head_Node = Create_new_Node ( val ) ;  // nếu dslk chưa có node nào cả thì gán Node ( newNode ) == head
	} else
	{
		// nếu đã có node rồi thì phải tạo node temp = head , nếu dùng head để tham chiếu thì mất data
		Node *temp = head_Node;
		// nếu chưa phải là Node cuối thì temp sẽ tiếp tục tham chiếu, nếu là node cuối thì gán cho new Node
		while ( temp -> next_ptr != nullptr ){
			temp = temp -> next_ptr;
		}
		// sau khi thoát lặp cux là tới NULL thì tạo Node ở cuối 
		temp -> next_ptr = Create_new_Node ( val ) ;
	}	
}
Node* delete_a_node( Node* Head_Node , int k , int num_Node ) {
    if ( k < 0 || k > num_Node ) {
        std :: cout << "Vi tri xoa khong hop le." << std :: endl ;
        return Head_Node ;
    }

    if ( k == 0 && Head_Node != nullptr ) {
        Node* deleted_Node = Head_Node ; // gán Node cần xóa vs Head
        Head_Node = Head_Node -> next_ptr ; // Cập nhật head_Node để trỏ vào node thứ hai (nếu có). Chuyển hết 
        delete deleted_Node ; // Giải phóng bộ nhớ của node đầu tiên
        return Head_Node ; // Trả về con trỏ mới của danh sách sau khi xóa
    }

    Node* Current_Node_2 = Head_Node ;
    for ( int i = 0 ; i < k - 1 ; i++ ) {
        if ( Current_Node_2 == nullptr || Current_Node_2 -> next_ptr == nullptr ) {
            std :: cout << "Vi tri xoa khong hop le." << std :: endl ;
            return Head_Node;
        }
        Current_Node_2 = Current_Node_2 -> next_ptr ;
    }

    Node* deleted_Node = Current_Node_2 -> next_ptr ;
    Current_Node_2 -> next_ptr = deleted_Node -> next_ptr ;
    delete deleted_Node ;

    return Head_Node ;
}


void print_list ( Node *head_Node ){
	  Node* current_Node = head_Node ;
    while ( current_Node != nullptr ) {
        std :: cout << current_Node -> num << " ---> " ;
        current_Node = current_Node -> next_ptr ;
    }
    std :: cout << "NULL" << std :: endl ;
}
int main (){
	Node *head = nullptr ;
	int num_Node ;
	int node_value ;
	int deleted_k_position ;
	std :: cout << "So luong Node : " ;
	std :: cin >> num_Node ;
	for ( int i = 0 ; i < num_Node ; i++ ){
		std :: cout << "Nhap data cua Node " << i << " : " ;
		std :: cin >> node_value ;
		add_Node ( head , node_value ) ;
	}
	std :: cout << "List trc xoa : " << std :: endl ;
	print_list ( head ) ;
	
	std :: cout << "Nhap vi tri xoa : " << std :: endl ;
	std :: cin >> deleted_k_position ;
	
	std :: cout << "List sau xoa : " << std :: endl ;
	head = delete_a_node ( head , deleted_k_position , num_Node ) ;
	print_list ( head ) ;
	return 0;
}