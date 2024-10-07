#include <iostream>
int main(){
	int a[3] = {1,2,3};

            int *p=a,   **r=&p;                    

            std::cout<<*r<<" "<<a;
}