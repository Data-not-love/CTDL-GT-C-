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

void *change_value_to_b ( Node *Head_Node , int a , int b ){
	Node *Current_Node = Head_Node ;
	 while ( Current_Node != nullptr ){
	 	if ( Current_Node -> num == a ){ // Nếu tham chiếu tới data trong Node có giá trị = a . Truyền tham chiếu để gán data = b
	 		Current_Node -> num = b ;
		 }
		 Current_Node = Current_Node -> next_ptr ; // gán xong thì sẽ di chuyển qua Node tiếp theo. Nếu có thì làm lại vòng lặp
	 }
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
	Node *Head = nullptr ;
	int value_a ;
	int value_b ;
	int node_value ;
	int num_Node ;
	std :: cout << "So Luong Node : " ;
	std :: cin >> num_Node ;
	for ( int i = 0 ; i < num_Node ; i++ ){
		std :: cout << "Node's Data : " ;
		std :: cin >> node_value ;
		add_Node ( Head , node_value ) ;
	}
	std :: cout << "List : " << std :: endl ;
	print_list ( Head );
	
	
	std :: cout << "Chon Node co gia tri a : " ;
	std :: cin >> value_a ;
	std :: cout << "Thay doi a -> b : " ;
	std :: cin >> value_b ;
	
    change_value_to_b ( Head , value_a , value_b );
	std :: cout << "List sau khi thay A : ";
	print_list ( Head ) ;
	return 0;
}