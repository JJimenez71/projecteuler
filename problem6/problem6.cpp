#include <iostream>
#include <cmath>

int main(){
	int number_range = 100;

	int sum_squares = 0;
	int square_sum = 0;
	for(int i = 1; i <= number_range; i++){
		sum_squares += 	std::pow(i, 2);
		square_sum += i;
	}
	// Take the square of square_sum
	square_sum = std::pow(square_sum, 2);

	int answer = square_sum - sum_squares;
	std::cout << "Answer: " + std::to_string(answer) << std::endl;
	return 0;
}
