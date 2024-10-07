#include <iostream>

struct Node {
	int num ;
	Node *next_ptr ;
} ;

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

void show_value ( Node* Head_Node , int value_at_k , int number_of_Node ){
    if ( value_at_k < 0 || value_at_k >= number_of_Node ) {
        std :: cout << "Ko ton tai Node" ;
        return;
    }
	Node *Current_Node_2 = Head_Node ;
    if ( value_at_k >= 0 && Current_Node_2 != nullptr ){
	 for ( int i = 0 ; i < value_at_k ; i++ ){  // Duyệt tới vị trí K = cách cho Current Node di tham chiếu tới từng Node sau
			Current_Node_2 = Current_Node_2 -> next_ptr ;
			}
			std :: cout << "Gia tri trong Node K : " << Current_Node_2 -> num << std :: endl ;
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
	Node *head = nullptr ;
	int value_at_k ;
	int num_Node ;
	int node_value ;
	std :: cout << "So Node : " ;
	std :: cin >> num_Node ;
	for ( int i = 0 ; i < num_Node ; i++ ){
		std :: cout << "Nhap data cua Node " << i << " : " ;
		std :: cin >> node_value ;
		add_Node ( head , node_value ) ;
	}
	
	std :: cout << "List : " ;
	print_list ( head ) ;

	std :: cout << "Chon Node de show value : " ;
	std :: cin >> value_at_k ;
	show_value ( head , value_at_k , num_Node ) ;
	return 0 ;
}