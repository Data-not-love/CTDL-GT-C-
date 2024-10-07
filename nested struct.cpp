#include <bits/stdc++.h>
struct ve_time {
	int h,m;
    friend bool operator==(const ve_time& x, const ve_time& y) {
    	 return (x.h >= 0 && x.h < 24) && (y.m >= 0 && y.m < 60);
    }
};
// struct l?ng struct

struct ve {
	std :: string name;
	ve_time tg;

};
 int main (){
 	ve a;
 	std :: cout << "Nhap name : ";
 	std :: getline(std :: cin , a.name);
 	std :: cout << "Time : ";
 	std :: cin >> a.tg.h >> a.tg.m;
 	
 	
    if (!(a.tg == a.tg)) {
        std::cout << "Ve co thoi gian nhap vao khong hop le!";
    }
    else 
 	std :: cout << a.tg.h << "h" << a.tg.m ;
 	return 0;
 }