#include <iostream>

void dec(int *p){

           *p-=1;

} 

main(){

           int i=10;

           dec(&--i);

           std::cout<<i;

}//pass by reference