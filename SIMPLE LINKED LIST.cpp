// ví dụ đơn giản về linked list
#include <bits/stdc++.h>

struct SinhVien {
    // phần data của node 
	std :: string name ;
	std :: string lop ;
	std :: string MSV ;
	double diem ;
			
	SinhVien() { //Lỗi này xảy ra khi bạn cố gắng sử dụng một hàm (trong trường hợp này là hàm tạo mặc định của node) mà đã bị xóa
//Trong trường hợp của bạn, hàm tạo mặc định của node bị xóa do SinhVien không có hàm tạo mặc định. Khi bạn cung cấp một hàm tạo cho SinhVien, hàm tạo mặc định sẽ không được tự động tạo ra
	}
	SinhVien ( std :: string ten , std :: string lop ,  std :: string ID , double GPA ){
		name = ten ;
		lop = lop ;
		MSV = ID ;
		diem = GPA ;
	}
};

struct node {
    // phần Node 
    SinhVien SVdata; // phần data
	node *nextptr;// phần link, có thể bỏ từ khóa struct
};

node *createNode ( SinhVien sv ){
	node *newNode = new node();// Mỗi Node mới là con trỏ kiểu Node
	newNode->SVdata = sv;// dùng toán tử lamda
	newNode->nextptr = nullptr;// mỗi lần cấp phát data thì cứ cho Link = NULL ptr
	return newNode;
}

//hàm thêm NODE ( mỗi node cần một con trỏ , data)
void addNode (node *&head , SinhVien sv){
	// *& tham chiếu tới con trỏ. Và đương nhiên là khi truyền tham chiếu thì node sẽ thay đổi
	// tạo node qua toán tử new và gọi hàm createnode và truyền tham số
	node *newNode = createNode (sv);
	// nếu node head là con trỏ null thì tạo ra node mới
	if (head == nullptr ){
		head = newNode;
	} else {
		// nếu không phải 
        node *temp = head; // gán node tạm bằng head. Nếu node tạm khác con trỏ null thì chuyển 
        while (temp->nextptr != nullptr) {
            temp = temp->nextptr;
        }
        temp->nextptr = newNode;
    }
}

void printLinkedList ( node *head ){

	
	// gán địa chỉ của head cho biến con trỏ temp 
	 node *temp = head;
    while (temp != nullptr) {// nếu địa chỉ != null pointer thì có thể thêm data vào node
        std :: cout << "Name: " << temp->SVdata.name << std :: endl;
        std :: cout << "Class: " << temp->SVdata.lop << std :: endl;
        std :: cout << "Student ID: " << temp->SVdata.MSV << std :: endl;
        std :: cout << "Score: " << temp->SVdata.diem << std :: endl;
        std :: cout << std::endl;
        temp = temp->nextptr; // sau khi thêm data vào node xong thì tiếp tục trỏ đến địa chỉ của node tiếp theo
                              // giúp con trỏ node chuyển tiếp nhau
    }

}

int numNode ( node *head ){// head : quản lý node đầu tiên
	int numofNode = 0;
	  while (head != nullptr ){
	  	numofNode ++;
	  	 head = head->nextptr;// sau khi cộng 1 head vào thì tham chiếu tới địa chỉ của head tiếp theo
	  }
	  return numofNode;	 
}

 int main (){
 		node *head = nullptr;
 		int n;
 		std :: cout << "So Node la : ";
 		std :: cin >> n;
 for ( int i = 0 ; i < n ; i++ ) {
 
 	SinhVien a;
 	std :: cout << "Ten sv : ";
 	std :: cin >> a.name;
 	std :: cout << "Lop : ";
	std :: cin.ignore(); // bỏ qua ký tự trắng. Trước getline luôn có ignore nhập có khoarng trắng
    getline( std::cin , a.lop );
	std :: cout << "Ma SV : "; 
    std :: cin >> a.MSV;
    std :: cin.ignore();
    std :: cout << "Diem : ";
    std :: cin >> a.diem;
    addNode ( head , a );
      
}
printLinkedList(head);
  //  std :: cout << a.name << "  " << a.lop << "  " << std :: setprecision(3) << a.MSV << " " << a.diem << std :: endl;
   std :: cout <<"So Node dang ton tai: "<< numNode (head);
   return 0;
 }