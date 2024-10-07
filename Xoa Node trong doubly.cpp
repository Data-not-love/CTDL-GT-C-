#include <iostream>
struct Client_Data {
	std :: string name ;
	int age ;
	Client_Data(){
	}
	Client_Data ( std :: string ten_input , int tuoi_input ){
		name = ten_input ;
		age = tuoi_input ;
	}
};

struct Node {
	Client_Data dt ;
	Node *prev_ptr ;
	Node *next_ptr ;
};

Node *Create_Node ( Client_Data dt_client ) {
	Node *new_Node = new Node () ;
	new_Node -> dt = dt_client ;
	new_Node -> prev_ptr = nullptr ;
	new_Node -> next_ptr = nullptr ;
	return new_Node ;
}

void Add_Node ( Node *&Head_Node , Client_Data dt_client ){
	if ( Head_Node == nullptr ) {
		Head_Node = Create_Node ( dt_client ) ;
	} else {
		Node *temp = Head_Node ;
		while ( temp -> next_ptr != nullptr ) {
			temp = temp -> next_ptr ;
		}
		Node *new_Node = Create_Node ( dt_client ) ;
		temp -> next_ptr = new_Node ;
		new_Node -> prev_ptr = temp ;
		
	}
}

Node *Delete_First_Node ( Node *Head_Node ) {
	Node * Deleted_Node = Head_Node ;
	Head_Node = Head_Node -> next_ptr ;
	delete Deleted_Node ;
	return Head_Node ;
	
}

void print_node ( Node *Head_Node){
		Node *temp = Head_Node ;
	while ( temp != nullptr ) {
		 std :: cout << "| Ten: " << temp -> dt.name << "  Tuoi: " << temp -> dt.age << " | -->" ;
		 temp = temp -> next_ptr ;
	}
	std :: cout << " NULL" << std :: endl ;
}

int main (){
	Node *Head = nullptr ;
	int num_Node ;
	int name ;
	int age ;
		std :: cout << "Number of Node : " ;
		std :: cin >> num_Node ;
		Client_Data client ;
		for ( int i = 0 ; i < num_Node ; i++ ){
			std :: cin.ignore();
			std :: cout << "Name : " ;
			std :: getline ( std :: cin , client.name ) ;
			std :: cout << "Age : " ;
			std :: cin >> client.age ;
			Add_Node ( Head , client ) ;
		}
	std :: cout << "Trc xoa : " ;
	print_node ( Head ) ;
	
	Head = Delete_First_Node ( Head ) ;
	std :: cout << "Sau xoa : " ;
    print_node ( Head ) ;
	
	return 0 ;
}