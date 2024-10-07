#include <iostream>
#include <array>

int main() {
	int num_of_part ;
	std :: cin >> num_of_part ; 
    // Khai báo một mảng có kích thước cố định là 5 phần tử, kiểu int
    std :: array < int , 1000 > myArray ; // không thể ném biến num_of_part khi khai báo array stl vì array stl cần biết một con số cụ thể tại thời điểm biên dịch

    // Gán giá trị cho các phần tử của mảng
    std :: cout << "Elements of myArray: " << std :: endl ;
    for ( int i = 0 ; i <  num_of_part ; ++i ) {
        std :: cin >> myArray[i] ;
    }

    // Truy cập và in giá trị của các phần tử trong mảng
    std :: cout << "Elements of myArray: " ;
    for ( int i = 0 ; i <  num_of_part ; ++i ) {
        std :: cout << myArray[i] << " " ;
    }
    std :: cout << std :: endl ;

    return 0;
}
