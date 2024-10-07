#include <iostream>
struct Node {
	int num ;
	Node *next_ptr ;
};

Node *Create_new_Node ( int n ){
	Node * new_Node = new Node () ;
	new_Node -> num = n ;
	new_Node -> next_ptr = nullptr ;
	return new_Node ;
}
void add_Node ( Node *& head_Node , int n ){
		if ( head_Node == nullptr ){
		head_Node = Create_new_Node ( n ) ;  // nếu dslk chưa có node nào cả thì gán Node ( newNode ) == head
	} else
	{
		// nếu đã có node rồi thì phải tạo node temp = head , nếu dùng head để tham chiếu thì mất data
		Node *temp = head_Node;
		// nếu chưa phải là Node cuối thì temp sẽ tiếp tục tham chiếu, nếu là node cuối thì gán cho new Node
		while ( temp -> next_ptr != nullptr ){
			temp = temp -> next_ptr;
		}
		// sau khi thoát lặp cux là tới NULL thì tạo Node ở cuối 
		temp -> next_ptr = Create_new_Node ( n ) ;
	}	
}

Node* add_node_to_k_position ( Node *head_Node , int x_value_at_k , int k_position , int num_Node ){
	Node *current_Node = head_Node ;
	if ( k_position < 0 || k_position > num_Node ) {
        std :: cout << "Vi tri chen khong hop le" << std :: endl ;
        return head_Node ;
    }
    // chèn đầu 
    if ( k_position == 0 ) {
        Node *new_Node = Create_new_Node( x_value_at_k ) ;
        new_Node -> next_ptr = head_Node ; // nếu vị trí 0 thì cho Node mới trở tới vị trí của Node Head
        head_Node = new_Node ; // gán Node Hedd = Node mới
        return new_Node ;
    } // trả về new_Node vì lúc này thì Head đã gán vào đầu thì Node ở vị trí Head cũ -> Node số 1
    // chèn trc vị trí k
	    for ( int i = 0 ; i < k_position - 1 ; i++ ) { // chèn trc vị trí k
	    	    current_Node = current_Node -> next_ptr ; // duyệt hết các Node trước K và Current Node sẽ là Node trc K
		}       
			    Node *new_added_node = Create_new_Node ( x_value_at_k ) ;
			    // vị trí của Node mới gán bằng vị trí của Node gần đây 
	    		new_added_node -> next_ptr = current_Node -> next_ptr ;
	    		// Node hiện tại trỏ tới vị trí của Node mới thêm
	    		current_Node -> next_ptr = new_added_node ;
	    		return head_Node ;
}
/*trả về con trỏ head_Node là cần thiết để đảm bảo danh sách vẫn được duy 
 trì chính xác và không bị mất điểm bắt đầu của nó.*/
 
 
void print_list ( Node *head_Node ){
	  Node* current_Node = head_Node;
    while ( current_Node != nullptr ) {
        std :: cout << current_Node -> num << " ---> " ;
        current_Node = current_Node -> next_ptr ;
    }
    std :: cout << "NULL" << std :: endl ;
}

int main (){
	Node *head = nullptr ;
	int node_value ;
	int position_k ;
	int value_x ;
	int num_Node ;
	std :: cout << "Nhap so luong Node : " ;
    std :: cin >> num_Node ;
    for ( int i = 0 ; i < num_Node ; i++ ){
    	std :: cout << "Nhap data cua Node " << i << " : " ;
    	std :: cin >> node_value ;
    	add_Node ( head , node_value ) ;
	}
    
    std :: cout << "Trc chen : " << std :: endl ;
    print_list ( head );
    
    std :: cout << "Nhap vi tri chen : " ;
    std :: cin >> position_k ;
    
    std :: cout << "Nhap gia tri node moi : " ;
    std :: cin >> value_x ;
    
    std :: cout << "Sau chen : " << std :: endl ;
    // để thêm giá trị vào thì nhớ gắn vào head để dslk vẫn giữ nguyên 
    head = add_node_to_k_position ( head , value_x , position_k , num_Node ) ;
    print_list ( head );
    
	return 0 ;
}