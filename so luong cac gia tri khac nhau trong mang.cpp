// mảng đánh dấu ( sử dụng chỉ số của mảng để dánh dấu giá trị tương ứng trong mảng đó. Lùa bò vào chuồng
// in ra số lượng các giá trị khác nhau xuất hiện trong mảng
#include <bits/stdc++.h>
int count[1000001]; // các phần tử trong hàm count này bằng 0 vì chưa khởi tạo,
// còn nếu khởi tạo trong main thì ra giá trị rác và tràn bộ nhớ stack do khai báo một mảng quá lớn
 int main  (){
 	int n;
 	std :: cin >>n ;
 	int arr[n];
 	 for ( int i = 0; i < n ; i++ ){
 	 	std :: cin >> arr[i];
	  }
	  
	  // giả sử ta gặp số 1 đầu tiên trong mảng arr và đánh giấu cho 1 xuất hiện,v à ko xuất hiện thì count = 0
	
	for ( int i = 0 ; i < n ; i++){
		// đánh dấu sự xuất hiện của arr[i]
		count [ arr[i] ] = 1; //lấy giá trị của arr[i] mình đưa vào chỉ số tương ứng ở trong mảng count và biến nó thành 1
			}
			int dem = 0;
			for ( int i = 0 ; i < 1000001 ; i++ ){
				if ( count [i] == 1){
					++dem;
				}
			}
			std :: cout << dem ;
			return 0;
 }