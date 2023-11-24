#include <iostream>

int main(){
	int current_number = 20;
	int range = 20;	
	bool flag = true;
	// Keep on looping until we find a number
	while(flag){
		for(int i = 1; i <= range; i++){
			// We see a number not evenly divisible
			if(current_number % i != 0){
				break;
			}
			// We got to 20 and we didn't break
			if(i == range){
				flag = false;
			}
		}
		if(flag){
			current_number += 10;
		}
	}
	std::cout << "Answer: " + std::to_string(current_number) << std::endl;
	return 0;
}
