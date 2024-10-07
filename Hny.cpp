#include <iostream>
#include <time.h>
  int main (){
  	   time_t now = time(NULL);
        struct tm* local = localtime(&now);
        std :: cout << "Happy New Year " << local->tm_year + 1900;
  	return 0;
  }