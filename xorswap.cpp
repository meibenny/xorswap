#include <iostream>
#include <cstdlib>

void xorswap(int&, int&);

int main(int argc, char*argv[]){
	if(argc != 3){
		std::cout<<"Program needs two int arguments"<<std::endl;
		return 1;
	}
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	std::cout<<"x is: "<<x<<std::endl;
	std::cout<<"y is: "<<y<<std::endl;
	std::cout<<"Swapping"<<std::endl;
	xorswap(x, y);
	std::cout<<"x is: "<<x<<std::endl;
	std::cout<<"y is: "<<y<<std::endl;

return 0;
}

void xorswap(int& x, int& y){
	//check if addresses of x and y are the same
	//if they are, XOR-ing will set the value to 0
	if(x!=y){
		x ^= y;
		y ^= x;
		x ^= y;
	}
	else{
		std::cout<<"ints are the same. did not swap"<<std::endl;
	}
}
