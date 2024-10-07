#include <iostream>
#include <string>
// tạo phần data của Node vs struct 
struct Data {
	std :: string name;
	float diem;
	Data(){
	}
	Data( std :: string ten , float GPA ){
		name = ten;
		diem = GPA;
	}
};

// tạo Node
struct Node {
	Data data_of_node;
	Node *next_ptr;
};

// hàm tạo node 
Node *createNode ( Data data_sv){
	// tạo node mới vs toán tử new
	Node * newNode = new Node();
	newNode->data_of_node = data_sv;// tham chiếu tới phần data của node, gán giá trị
    newNode->next_ptr = nullptr;// mỗi khi tạo node mới thì đưa tail về null
    return newNode;
}

//void add_at_the_end (Node *&head_Node, Data data_sv){
//	// tạo node mới và truyền tham số là data sinh viên 
//	node *newNode = createNode (data_sv);
//	
//	if ( head_Node == nullptr){
//		head = newNode;  // nếu dslk chưa có node nào cả thì gán Node ( newNode ) == head
//	} else
//	{
//		// nếu đã có node rồi thì phải tạo node temp = head , nếu dùng head để tham chiếu thì mất data
//		Node *temp = head_Node;
//		// nếu chưa phải là Node cuối thì temp sẽ tiếp tục tham chiếu, nếu là node cuối thì gán cho new Node
//		while (temp->next_ptr != nullptr ){
//			temp = temp->next_ptr;
//		}
//		temp->next_ptr = newNode;
//	}
//}


void add_cuoi_my_way (Node *&head_Node, Data data_sv){
	if ( head_Node == nullptr ){
		head_Node = createNode(data_sv);  // nếu dslk chưa có node nào cả thì gán Node ( newNode ) == head
	} else
	{
		// nếu đã có node rồi thì phải tạo node temp = head , nếu dùng head để tham chiếu thì mất data
		Node *temp = head_Node;
		// nếu chưa phải là Node cuối thì temp sẽ tiếp tục tham chiếu, nếu là node cuối thì gán cho new Node
		while ( temp->next_ptr != nullptr ){
			temp = temp->next_ptr;
		}
		temp->next_ptr = createNode(data_sv);
	}	
}


void Print ( Node* head_Node ) {
  Node* temp = head_Node;
  while ( temp != nullptr ) {
    std::cout << "Name: " << temp->data_of_node.name << std::endl;
    std::cout << "Diem: " << temp->data_of_node.diem << std::endl;
    temp = temp->next_ptr;
  }
}

int dem_node (Node *head_Node ){
	int sl = 0;
	Node *temp = head_Node;
      while ( temp != nullptr ){
	  
		 sl++;
		 temp = temp->next_ptr;
	}
	return sl;
}

int main (){
	int n ;
	Node *head = nullptr;
    std :: cout << "Nhap so luong Node : " ;
    std :: cin >> n ;
    
      for ( int i = 0 ; i < n ; ++i ) {
    Data data_for_head;
	std :: cout << "Ten : ";
	std::cin.ignore(); // Loại bỏ kí tự mới dòng '\n'			
	std :: getline (std :: cin ,data_for_head.name);
	
	std :: cout << "GPA : ";
	std :: cin >> data_for_head.diem; // Loại bỏ kí tự mới dòng '\n'
    add_cuoi_my_way(head, data_for_head);
    }

    Print(head);
	return 0;
}