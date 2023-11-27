#include <iostream>
#include <cmath>

bool pythTriplet(int a, int b, int c){
	if(std::pow(a, 2) + std::pow(b, 2) == std::pow(c,2)){
		return true;
	}
	return false;
}
int main(){
	// Generate all permutations of a + b + c = 1000 where a < b < c
	for(int a = 0; a < 998; a++){
		for(int b = a+1; b < 999; b++ ){
			for(int c = b+1; c < 1000; c++){
				if((a + b + c) == 1000 && pythTriplet(a, b, c)){
		 			int answer = a * b * c;
					std::cout << "Answer: " + std::to_string(answer) << std::endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
