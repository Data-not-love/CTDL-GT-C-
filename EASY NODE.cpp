#include <bits/stdc++.h>
struct Node {
	int data;
	Node *tail_link;
};

 int main (){
   Node *head = nullptr;; // tạo biến con trỏ head kiêu node để luu địa chỉ của Node đầu tiên
  // trỏ tới null vì có node khác
   Node *temp = new Node();
   temp->data = 2;
   temp->tail_link = nullptr;
   head = temp;
   std :: cout << temp->data;  
   return 0;
 }