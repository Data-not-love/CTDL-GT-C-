#include <bits/stdc++.h>

struct Sinh_vien {  // cú pháp Struct

// có thể định nghĩa hàm trong struct

     std :: string msv; // trường 1
     std :: string ten;
     double GPA;
     std :: string dc;
    
    // hàm tạo
	
	Sinh_vien ( std :: string id , std :: string name , double GPA , std :: string add){
		// gán đối số cho các trường
		msv = id ;
		ten = name ;
		GPA = GPA ;
		dc = add ;
		
	}
    
     void nhap (){
     		std :: cin >> msv;
	        std::cin.ignore(); // bỏ qua ký tự trắng. Trước getline luôn có ignore nhập có khoarng trắng
            getline(std::cin, ten); 
            std :: cin >> GPA;
            std :: cin.ignore();
            getline(std::cin,dc);
     	
	 }
     void in (){
     	std :: cout << msv << "  " << ten << "  " << std :: setprecision(3) << GPA << "  " << dc << std :: endl;
     	
	 }
};


int main (){
     std :: string id ;
	 std :: string name ;
	 double GPA ; 
	 std :: string add;
	 
	 Sinh_vien a (id,name, GPA ,add);
	 a.nhap();
	 a.in();
	
	return 0;
}