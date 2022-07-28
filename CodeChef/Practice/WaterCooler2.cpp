#include <iostream>


int main() {
	// your code goes here
	int t, x, y;
	std::cin >> t;
	
	while(t){
	    std::cin >> x >> y;
    	if(y%x!=0){
    	    std::cout << y/x << std::endl;
    	}else{
    	   std:: cout << (y/x) - 1 << std::endl;
    	}
    	t--;
	}
	return 0;
}
