#include <iostream>
// DONE
struct DataSV 
{
	std :: string name ;
	double GPA ;
    DataSV(){}
	DataSV( std :: string name_input , double GPA_input ) 
	{
		name = name_input ;
		GPA = GPA_input ;
	}
};

struct Node 
{
	DataSV data_in_node ;
	Node *prev_ptr ;
	Node *next_ptr ;
};

Node *Create_Node ( DataSV dt ) 
{
	Node *new_Node = new Node () ;
	new_Node -> data_in_node = dt ;
	new_Node -> prev_ptr = nullptr ;
	new_Node -> next_ptr = nullptr ;
	return new_Node ;
}

void Add_Node ( Node *&Head_Node , DataSV dt ) 
{
    if ( Head_Node == nullptr )
    {
        // Nếu danh sách rỗng, thêm nút mới và cập nhật Head_Node
        Head_Node = Create_Node ( dt ) ;
    } else 
	{
        // Duyệt tới Node cuối cùng của danh sách liên kết đôi
        Node *temp = Head_Node ;
        while ( temp -> next_ptr != nullptr )
	    {
            temp = temp -> next_ptr ;
        }
        // Tạo Node  mới và kết nối với nút cuối cùng
        Node *new_Node = Create_Node( dt ) ;
        temp -> next_ptr = new_Node ;
        new_Node -> prev_ptr = temp ;
    }
}

Node *at_between_nodes ( Node *& Head_Node , int k_position , DataSV value_of_data , int num_Node )
{
	Node *added_Node = Create_Node ( value_of_data ) ; // tạo 1 Node trong dslk đôi
	if ( k_position < 0 || k_position > num_Node )
	{
		std :: cout << "Invalid Node" ;
	}
	
	if ( k_position == 0 )
	{
		 
    	added_Node -> next_ptr = Head_Node ; // đuôi Node muốn thêm trỏ vào head
	    if ( Head_Node != nullptr ) 
		    { // ý đây là chưa có, chưa tồn tại Node head chứ ko phải Node Head trỏ tới null
	      Head_Node -> prev_ptr = added_Node ; // phần con trỏ prev của head trỏ tới Node mới 
            }
	    Head_Node = added_Node ; // 
	    added_Node -> prev_ptr = nullptr ;
	     
	}
	else
    {
	Node *Prev_Node = Head_Node ;
	for ( int i = 0 ; i < k_position - 1 ; i++ )
	{
		Prev_Node = Prev_Node -> next_ptr ; // tham chiếu đến Node trc Node cần chèn 
	}
	Node *Next_Node = Prev_Node -> next_ptr ; // tham chiếu đến Node sau
	
	if ( Prev_Node !=  nullptr && Next_Node != nullptr ) 
		{
		added_Node -> prev_ptr = Prev_Node ;
		added_Node -> next_ptr = Next_Node ;
		Prev_Node -> next_ptr = added_Node ;
		Next_Node -> prev_ptr = added_Node ;
		
        }
    }
return Head_Node ; 
}

Node *Deleted_Node ( Node *& Head_Node , int k_position , int num_Node ){
	if ( k_position < 0  && k_position > num_Node ){
		std :: cout << "Invalid Position ";
	}
	
	if ( k_position = 0 ){
		Node *Deleted_Node = Head_Node ;
	    Node *Second_Node = Head_Node -> next_ptr;
	    Second_Node = Head_Node ;
		delete Deleted_Node ;
		 
	}
	return Head_Node ;
	
}
bool checking_name ( Node *Head_Node , std :: string name_SV ){
	Node *Current_Node = Head_Node ;
    while ( Current_Node != nullptr) {
		if ( Current_Node->data_in_node.name == name_SV ){
			return true ;
		}
		Current_Node = Current_Node -> next_ptr ;
	}
	  return false ;
}

void Print_doubly ( Node * Head_Node )
{
	Node *temp = Head_Node ;
	while ( temp != nullptr )
	{
		 std :: cout << "| Name: " << temp -> data_in_node.name << "  Point: " << temp -> data_in_node.GPA << " | -->" ;
		 temp = temp -> next_ptr;
	}
	std :: cout << " NULL" << std :: endl ;
}

int main (){
	int num_Node ;
	Node *Head_Node = nullptr ;
	int name ;
	std :: string name_being_check ;
	double GPA ;
	double new_GPA ;
	int k_position ;
	std :: string new_name ;
	std :: cout << "Number of Node : " ;
	std :: cin >> num_Node ;
		DataSV sv ;
	for ( int i = 0 ; i < num_Node ; i++ )
	{
        std :: cin.ignore();
		std :: cout << "Enter name : " ;
		std :: getline( std :: cin , sv.name ) ;
		std :: cout << "GPA : " ;
		std :: cin >> sv.GPA ;
		Add_Node ( Head_Node , sv ) ;
	}
	std :: cout << "Doubly trc : " << std :: endl ;
	Print_doubly ( Head_Node ) ;
	
	std :: cout << "Enter K: " ;
	std :: cin >> k_position ;
	std :: cin.ignore () ;  // Ignore the newline character after K
	
	std :: cout << "Ten moi: " ;	
	std :: getline ( std :: cin , sv.name ) ;
	std :: cout << "GPA moi: " ;
	std :: cin >> sv.GPA ;

	Head_Node = at_between_nodes ( Head_Node , k_position , sv , num_Node ) ;
	std :: cout << "Sau add : " << std :: endl ;
	Print_doubly ( Head_Node );
	
	std :: cin.ignore () ; 
	std :: cout << "Nhap ten can check : " ;
	std :: getline ( std :: cin , name_being_check ) ;
    std :: cout << checking_name ( Head_Node , name_being_check ) ;
	
	return 0 ;
}