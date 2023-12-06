#include <iostream>

long long calcFactorial(int n){
	long long prod = 1;
	for(int i = 1; i <= n; i++){
		prod *= i;
	}
	std::cout << prod << std::endl;
	return prod;
}

int main(){
	long long numerator = calcFactorial(40);
	long long n = calcFactorial(20);
	long long answer = numerator / (n * n);

	std::cout << "Answer: " + std::to_string(answer) << std::endl;
	return 0;
}
