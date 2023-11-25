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
	int num_prime = 0;
	int curr_num = 2;
	int max_prime = 0;
	bool found_prime = false;
	while(num_prime < 10001){
		if(checkPrime(curr_num)){
			max_prime = curr_num;
			num_prime += 1;
		}
		curr_num += 1;
	}
	std::cout << "Answer: " + std::to_string(max_prime) << std::endl;
	return 0;
}
