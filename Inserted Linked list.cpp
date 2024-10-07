#include <bits/stdc++.h>

struct Node {
	int data;
	Node* nextptr;
};
Node* head;
void Insert ( int data , int n ){
	struct Node *temp1 = new Node ();
	temp1->data = data;
	temp1->nextptr = nullptr;
	if ( n==1 ){
		temp1->nextptr = head;
		head = temp1;
		return;
	}
	Node *temp2 = head;
	for (int i =0 ; i <n-2 ;i++){
		temp2 = temp2->nextptr;
	}
	temp1->nextptr = temp2->nextptr;
	temp2->nextptr = temp1;
};
void print ();

 int main (){
 	head = nullptr; //dslk r?ng
 	Insert (323,1);
 	Insert (234,2);
 	Print();
 	return 0;
 }