#include <bits/stdc++.h>
struct Sinh_vien {  // cú pháp Struct

// có thể định nghĩa hàm trong struct

     std :: string msv; // trường 1
     std :: string ten;
     double GPA;
     std :: string dc;
    
    // hàm tạo
    Sinh_vien (){
    	msv = "Abc";
    	ten = "cuong";
    	GPA = 3.5;
    	dc = "quang binh";
	}
	
	Sinh_vien ( std :: string id , std :: string name , double GPA , std :: string add){
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
	Sinh_vien a;
	std :: cin >> a.msv;
	std::cin.ignore(); // bỏ qua ký tự trắng. Trước getline luôn có ignore nhập có khoarng trắng
    getline(std::cin, a.ten); 
    std :: cin >> a.GPA;
    std :: cin.ignore();
    getline(std::cin, a.dc);
    
    
    Sinh_vien e;
    e.in();
	
    std :: cout << a.msv << "  " << a.ten << "  " << std :: setprecision(3) << a.GPA << " " << a.dc << std :: endl;
    a.nhap();
	a.in();
	
	
	return 0;
}