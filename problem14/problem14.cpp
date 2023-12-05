#include <iostream>
#include <unordered_map>

int collatz(int num){
    int length = 1;
    while(true){
        if(num == 1){
            return length;
        }
        if(num % 2 == 0){
            num = int(num / 2);
        }else{
            num = int((3 * num) + 1);
        }
        length++;
    }
}


int main(){
    int starting_num = 0;
    int longest_chain = 0;
    for(int i = 1; i < 1000000; i++){
        int chain = collatz(i);
        if(chain > longest_chain){
            longest_chain = chain;
            starting_num = i;
        }
    }
    std::cout << "Answer: " + std::to_string(starting_num) << std::endl;
}
