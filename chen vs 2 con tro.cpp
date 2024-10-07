#include <iostream>
struct DataSv 
{	
	std :: string name ;
	double GPA ;
	DataSv(){}
	DataSv( std :: string ten_input , double GPA_input ){
		name = ten_input ;
		GPA = GPA_input ;
		
	}
};

struct Node {
	DataSv dtSV ;
	Node *next_ptr ;
};

Node *Create_Node ( DataSv dt ){
	Node *new_Node = new Node () ;
	new_Node -> dtSV = dt ;
	new_Node -> next_ptr = nullptr ;
	return new_Node ;
}

Node *Add_Node ( Node *&Head_Node , Node *&Tail_Node , DataSv dt ){
 if (Head_Node == nullptr) {
        Head_Node = Create_Node(dt);
        Tail_Node = Head_Node; // Cập nhật Tail_Node khi tạo nút đầu tiên
    } else {
        Node *temp = Head_Node;
        while (temp->next_ptr != nullptr) {
            temp = temp->next_ptr;
        }
        temp->next_ptr = Create_Node(dt);
        Tail_Node = temp->next_ptr; // Cập nhật Tail_Node sau khi thêm nút mới
    }
    return Head_Node;
}

Node *Add_between ( Node *Head_Node , Node *Tail_Node , int position_k , DataSv dt , int num_Node )
{
	Node *Added_Node = Create_Node ( dt ) ;
	if ( position_k < 0 || position_k > num_Node )
	{
		std :: cout << "Invalid Position" ;
	}	
	else 
	{
		Node *Curr_Head = Head_Node ;
		Node *Curr_Tail = Tail_Node ;
		 for ( int i = 0 ; i < position_k - 1 ; i++ ){
		 	Curr_Head = Curr_Head -> next_ptr ;
		 }
		 
		 for ( int i = num_Node ; i > position_k ; i-- ){
		 	Curr_Tail = Curr_Tail -> next_ptr ;
		 }
		 Added_Node -> next_ptr = Curr_Tail ;
		 Curr_Head -> next_ptr = Added_Node ;
		 
	}
	return Head_Node ;
}
void Print_List ( Node * Head_Node ){
		Node *temp = Head_Node ;
	while ( temp != nullptr )
	{
		 std :: cout << "| Name: " << temp -> dtSV.name << "  Point: " << temp -> dtSV.GPA << " | -->" ;
		 temp = temp -> next_ptr;
	}
	std :: cout << " NULL" << std :: endl ;
}

int main ()
{   int k_position ;
	Node *Head_Node = nullptr ;
	Node *Tail_Node = nullptr ;
	DataSv sv ;
	int num_Node ;
	std :: cout << "Number of Node : " ; 
	std :: cin >> num_Node ;
	double GPA ;
	for ( int i = 0 ; i < num_Node ; i++ ){
		
		std :: cin.ignore() ;
		std :: cout << "Enter name : " ;
		std :: getline( std :: cin , sv.name ) ;
		std :: cout << "GPA : " ;
		std :: cin >> sv.GPA ;
		Add_Node ( Head_Node , Tail_Node ,sv );
	}
	std :: cout << "List before Insert : " ;
	Print_List ( Head_Node ) ;
	

	std :: cout << "Enter Insert Position : " ;
	std :: cin >> k_position ;
	std :: cin.ignore () ;
	
	std :: cout << "Ten moi: " ;	
	std :: getline ( std :: cin , sv.name ) ;
	std :: cout << "GPA moi: " ;
	std :: cin >> sv.GPA ;
	
	Head_Node = Add_between ( Head_Node , Tail_Node , k_position , sv , num_Node ) ;
	std :: cout << "Sau add : " << std :: endl ;
	Print_List ( Head_Node );
	return 0 ;
}