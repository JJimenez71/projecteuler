#include <iostream>
#include <string>
#include <algorithm>
bool check_palindrome(std::string mult_string){

	std::string reverse_string = mult_string;
	std::reverse(reverse_string.begin(), reverse_string.end());	

	int eq = mult_string.compare(reverse_string);
	if(eq == 0){
		return true;
	}
	return false;
}


int main(){

	int a = 1000;
	int b = 1000;
	int mult = 0;
	std::string mult_string = "";
	int largest_palindrome = 0;

	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){			
			mult = i * j;
	 		mult_string = std::to_string(mult);
			bool is_palindrome = check_palindrome(mult_string);
			if(is_palindrome && mult > largest_palindrome){
				largest_palindrome = mult;	
			}
		}
	}

	std::string answer = std::to_string(largest_palindrome);
	std::cout << "Answer: " + answer << std::endl;
	return 0;
}
