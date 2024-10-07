#include <bits/stdc++.h>
struct sv {
	std :: string msv , ten ;
	double GPA;
	double diem_chuyen_can ;
	
	bool operator < ( const sv other) {
		return GPA < other.GPA;
	}
	
	bool operator > ( const sv svcc){
		return diem_chuyen_can > svcc.GPA;
	}
};
 int main (){
 	int n ;
 	std :: cout <<  "Nhap so luong sinh vien : ";
 	std :: cin >> n;
 	sv ds[n]; //mảng các đối tượng thuộc kiển sv đã tự định gnhiax 
 	  for ( int i = 0 ; i < n ; i++ ){
 	  	std :: cout << "Nhap Masv : ";
 	  	std :: cin >> ds[i].msv ; 
 	  	std :: cin.ignore();
 	    std :: cout << "Nhap ten : ";
 	  	getline ( std :: cin , ds[i].ten);
 	  	std :: cout << "Nhap GPA : ";
 	  	std :: cin >> ds[i].GPA;
 	  	std :: cout << "Nhap diem chuyen can : ";
 	  	std :: cin >> ds[i].diem_chuyen_can;
	   }
	   
	   std :: sort (ds , ds + n);// duyệt từ vị trị đầu tiên cho tới vị trí thứ n
	                             // ds + n là một con trỏ để trỏ đến phần tử nằm ngay sau phần tử cuối cùng của mảng
	   for ( sv x : ds){
	   	std :: cout << x.msv << "  " << x.ten << "  " << x.GPA << std :: endl;
	   }
	   
	
	   std :: sort (ds , ds + n);
	   for ( sv y : ds){
	   	std :: cout << y.msv << "  " << y.ten << "  " << y.diem_chuyen_can << std :: endl;
	   }
 	return 0;
 }