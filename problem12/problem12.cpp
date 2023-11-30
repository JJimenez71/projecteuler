#include <iostream>
#include <cmath>
int main(){
	long long triNum = 1;
	int count = 2;
	int divisors = 0;
	int target = 500;
	while(true){
		//std::cout << "Curr Num: " + std::to_string(triNum) << std::endl;
		for(int i = 1; i <= std::sqrt(triNum); i++){
			if(triNum % i == 0){
				if(triNum / i == i){
					divisors++;
				}else{
					divisors += 2;
				}
			}
		}
		if(divisors > target){
			break;
		}
		divisors = 0;
		triNum += count;
		count++ ;
	}
	std::cout << "Answer: " + std::to_string(triNum) << std::endl;
	return 0;
}
