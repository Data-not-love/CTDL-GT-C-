#include <iostream> 
int  f(int  *a, int  b){
      return  (*a)--+b++;
}

main(){       
      int   x=2, y=3;
      std::cout<<x<<" "<<y<<" "<<f(&y,x);    
}