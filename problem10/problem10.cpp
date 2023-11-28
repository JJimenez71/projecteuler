#include <iostream>
#include <cmath>

bool checkPrime(int n){

	if(n == 0 || n == 1){
		return false;
	}

	for(int i = 2; i <= std::sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}


int main(){
	long answer = 0;
	int range = 2000000;
	for(int i = 1; i < range; i++){
		if(checkPrime(i)){
			answer += i;
		}
	}
	std::cout << "Answer: " + std::to_string(answer) << std::endl;
	return 0;
}
