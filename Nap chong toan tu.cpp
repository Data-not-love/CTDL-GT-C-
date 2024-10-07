#include <bits/stdc++.h>
struct So_phuc {
   int a , b; // a + bj
    
    // kiểu trả về + toán tử ( các tham số ) {}
    So_phuc operator + ( const So_phuc other ) {
    	So_phuc tong;
    	tong.a = a + other.a; // số a đầu + số a thứ 2
    	tong.b = b + other.b;
    	return tong;
	}
	
//	So_phuc operator - ( const So_phuc other ){
//		So_phuc tru;
//		tru.a = a - other.a;
//		tru.b = b - other.b;
//		return tru;
//	}
	
	friend So_phuc operator - ( const So_phuc x , const So_phuc y ){
		So_phuc tru;
		tru.a = x.a - y.a;
		tru.b = x.b - y.b;
		return tru;
	}
	
	//insertion >> nạp chồng
	friend std :: istream& operator >> ( std :: istream& in , So_phuc&x) {
		in >> x.a >> x.b;
		  return in;
	}
	
	//extraction << 
	friend std :: ostream& operator << ( std :: ostream& out , So_phuc x){
		out << x.a << " " <<x.b;
		return out;
	}
	
	//nạp chồng toán tử so sánh
//	bool operator == ( const So_phuc other ){
//		return a == other.a && b ==other.b;
//	}
//	
	
	friend bool operator == ( const So_phuc x , const So_phuc y ){
		return x.a == y.a && x.b == y.b;
	}
};

int main (){
   So_phuc a{ 1,2 } , b{ 3,4 };
   So_phuc c = a + b; // 
   std :: cout << c.a << "  " << c.b << std :: endl; // 4 ( 1+3 ) + 6 ( 2+4 )j
   
   So_phuc r{ 7,8 } , t{ 11,34 };
   So_phuc g = r - t;  
   std :: cout << g.a << "  " << g.b;
   
   So_phuc h,j;
   std :: cin >> h >> j;
   So_phuc l = h + j;
   std :: cout << l << std :: endl;
   if ( h == j ){
   	std :: cout << "Yes";
   }
   else
    std :: cout << "No";
   
   return 0;	
}