#include <iostream>
#include <cmath>


int main(){
	long int n = 600851475143;
	//long int n = 315;
	long int biggest_prime = 0;

	// Handle when n is even
	while(n % 2 == 0){
		biggest_prime = 2;
		n = n / 2;
	}

	// Handle when n odd (difference of two prime numbers is at least 2 so we can increment by that amount)
	for(int i = 3; i <= sqrt(n); i += 2){
		while(n % i == 0){
			biggest_prime = i;
			n = n / i;
		}
	}

	// n is a prime number that is bigger than 2
	if(n > 2){
		biggest_prime = n;
	}

	std::string biggest_prime_string = std::to_string(biggest_prime);
	std::cout << biggest_prime_string << std::endl;
	return 0;
}
