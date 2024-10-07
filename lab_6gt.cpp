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
		Node *temp = head_Node ;
		// nếu chưa phải là Node cuối thì temp sẽ tiếp tục tham chiếu, nếu là node cuối thì gán cho new Node
		while ( temp -> next_ptr != nullptr ){
			temp = temp -> next_ptr ;
		}
		// sau khi thoát lặp cux là tới NULL thì tạo Node ở cuối 
		temp -> next_ptr = Create_new_Node ( val ) ;
	}	
}

Node* delete_nodes_greater_than_k( Node *&Head_Node , int k ){
    Node *Moved_Node;
	while ( Head_Node != nullptr && Head_Node -> num > k )
	{
        Moved_Node = Head_Node ; // đưa Node đầu sang Node 2
        Head_Node = Head_Node -> next_ptr ; // Cập nhật head_Node để trỏ vào node thứ hai (nếu có). Chuyển hết 
        delete Moved_Node ; // Giải phóng bộ nhớ của node đầu tiên 
    }  
    Node *current_Node = Head_Node ;
    while ( current_Node != nullptr && current_Node -> next_ptr != nullptr ) {
        if ( current_Node -> next_ptr -> num > k) {
            Node *temp = current_Node -> next_ptr ;
            current_Node -> next_ptr = temp ->  next_ptr ;
            delete temp ;
        } else {
            current_Node = current_Node -> next_ptr ;
        }
    }
    
    return Head_Node ;

}

 
void print_list ( Node *head_Node ){
	  Node* current_Node = head_Node;
    while ( current_Node != nullptr ) {
        std :: cout << current_Node -> num << " ---> " ;
        current_Node = current_Node -> next_ptr ;
    }
    std :: cout << "NULL" << std :: endl ;
}

int main (){
	Node *Head =  nullptr ;
	int number_of_Node ;
	int value_of_Node ; 
	int bigger_than_k ;
	std :: cout << "Nhap so Node : " ;
	std :: cin >> number_of_Node ;
	for ( int i = 0 ; i < number_of_Node ; i++ ){
		std :: cout << "Data : " ;
		std :: cin >> value_of_Node ;
		add_Node ( Head , value_of_Node ) ;
	}
	std :: cout << "List : " ;
	print_list ( Head ) ;
	
	std :: cout << "Nhap gia tri K : " ;
	std :: cin >> bigger_than_k ;
    Head = delete_nodes_greater_than_k( Head , bigger_than_k ) ;
	std :: cout << "List lon hon K : " ;
	print_list ( Head ) ;
	return 0 ;
}