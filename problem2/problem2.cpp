#include <iostream>
using namespace std;

int main(){
	int x = 1;
	int y = 1;
	int answer = 0;
	while(x < 4000000){
		int curr = x + y;
		if(curr % 2 == 0){
			answer += curr;
		}
		x = y;
		y = curr;
	}
	string answer_string = to_string(answer);
	cout << "Answer: " + answer_string + "\n";
	return 0;
}
