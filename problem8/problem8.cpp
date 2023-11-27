#include <iostream>
#include <fstream>
#include <vector>

int main(){
	std::vector<char> nums;
	std::ifstream file("input.txt");
	
	// Read txt file
	char ch;
	while(file.get(ch)){
		if(ch != '\n'){
			nums.push_back(ch);
		}
	}

	// Do sliding window
	int window_size = 13;
	long long largest_product = 1; // Because we have such a large window. Our product will need to be a bigger type than an int
	long long window_product = 1;
	for(int i = 0; i <= nums.size() - window_size; i++){
		int diff = (i + window_size) - i;
		std::cout << std::to_string(diff) << std::endl;
		for(int j = i; j < (i + window_size); j++){
			window_product *= (nums[j] - '0');
		}
		if(window_product > largest_product){
			largest_product = window_product;
		}
		// Reset current product
		window_product = 1;
	}
	std::cout << "Answer: " + std::to_string(largest_product) << std::endl;
	return 0;
}
