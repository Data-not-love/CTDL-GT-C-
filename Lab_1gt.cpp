#include <iostream>
struct Node{
	int num ;
	Node *next_ptr ;
};

Node *Create_new_Node ( int n ){
	Node * new_Node = new Node () ;
	new_Node -> num = n ;
	new_Node -> next_ptr = nullptr ;
	return new_Node ;
}

void add_node ( Node *& head_Node , int n ){
		if ( head_Node == nullptr ){
		head_Node = Create_new_Node ( n ) ;  // nếu dslk chưa có node nào cả thì gán Node ( newNode ) == head
	} else
	{
		// nếu đã có node rồi thì phải tạo node temp = head , nếu dùng head để tham chiếu thì mất data
		Node *temp = head_Node ;
		// nếu chưa phải là Node cuối thì temp sẽ tiếp tục tham chiếu, nếu là node cuối thì gán cho new Node
		while ( temp->next_ptr != nullptr ){
			temp = temp->next_ptr ;
		}
		temp->next_ptr = Create_new_Node( n ) ;
	}	
}

void Print ( Node* head_Node ){
	Node* temp = head_Node ;
	 while ( temp != nullptr ) {
    std :: cout << temp -> num << " ---> " ;
    temp = temp -> next_ptr ;
  }
  std :: cout << "NULL" << std :: endl ;
}

 int main (){
 	int n ;
 	int data_value ;
 	Node *head = nullptr ;
 	std :: cout << "Nhap so luong Node : " ;
 	std :: cin >> n ;
 	 for ( int i = 0 ; i < n ; i++ ){
 	 	std :: cout << "Nhap data cua Node " << i << " : " ;
 	 	std :: cin >> data_value ;
 	 	add_node ( head , data_value ) ;
	  }
	  Print ( head ) ;
 	return 0 ;
 }