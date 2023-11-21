#include <iostream>
int main(){
	int answer = 0;
	for(int i = 0; i < 1000; i++){
		if (i % 5 == 0 || i % 3 == 0){
			answer += i;
		}
	}
	std::string answer_string = std::to_string(answer);
	std::cout << "Answer: " + answer_string + "\n";
	return 0;
}
