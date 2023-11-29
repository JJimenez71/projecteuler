#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>


// Calculate North
long long calcNorth(int grid[][20]){
	long long max = 0;
	for(int i = 3; i < 20; i++){
		for(int j = 0; j < 20; j++){
			long long product = grid[i][j] * grid[i-1][j] * grid[i-2][j] * grid[i-3][j];
			if(product > max){
				max = product;
			}
		}
	}
	return max;
}
// Calculate South
long long calcSouth(int grid[][20]){
	long long max = 0;
	for(int i = 0; i < 17; i++){
		for(int j = 0; j < 20; j++){
			long long product = grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j];
			if(product > max){
				max = product;
			}
		}
	}
	return max;
}

// Calculate West
long long calcWest(int grid[][20]){
	long long max = 0;
	for(int i = 0; i < 20; i++){
		for(int j = 3; j < 20; j++){
			long long product = grid[i][j] * grid[i][j-1] * grid[i][j-2] * grid[i][j-3];
			if(product > max){
				max = product;
			}
		}
	}
	return max;
}

// Calculate East
long long calcEast(int grid[][20]){
	long long max = 0;
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 17; j++){
			long long product = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
			if(product > max){
				max = product;
			}
		}
	}
	return max;
}

// Calculate North West Diagonal
long long calcNorthWest(int grid[][20]){
	long long max = 0;
	for(int i = 3; i < 20; i++ ){
		for(int j = 3; j < 20; j++){
			long long product = grid[i][j] * grid[i-1][j-1] * grid[i-2][j-2] * grid[i-3][j-3];
			if(product > max){
				max = product;
			}
		}
	}
	return max;
}

// Calculate North East Diagonal
long long calcNorthEast(int grid[][20]){
	long long max = 0; 
	for(int i = 3; i < 20; i++){
		for(int j = 3; j < 17; j++){
			long long product = grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3];
			if(product > max){
				max = product;
			}
		}
	}
	return max;
}

// Calculate South West Diagonal
long long calcSouthWest(int grid[][20]){
	long long max = 0;
	for(int i = 0; i < 17; i++){
		for(int j = 3; j < 20; j++){
			long long product = grid[i][j] * grid[i+1][j-1] * grid[i+2][j-2] * grid[i+3][j-3];
			if(product > max){
				max = product;
			}
		}
	}
	return max;
}

// Calculate South East Diagonal
long long calcSouthEast(int grid[][20]){
	long long max = 0;
	for(int i = 0; i < 17; i++){
		for(int j = 0; j < 17; j++){
			long long product = grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3];
			if(product > max){
				max = product;
			}
		}
	}
	return max;
}


int main(){
	std::ifstream file("input.txt");
	std::string line;
	int input[400];
	int grid[20][20];
	int x = 0;

	// Read in our input into single array
	while(file){
		std::getline(file, line);
		std::stringstream ss(line);
		std::string num;
		while(ss >> num){
			input[x] = std::stoi(num);
			x++;
		}
	}
	file.close();

	// Convert our input into a grid
	int i = 0;
	for(int x = 0; x < 20; x++){
		for(int y = 0; y < 20; y++){
			grid[x][y] = input[i];
			i++;
		}
	}

	long long north_product = calcNorth(grid);
	long long south_product = calcSouth(grid);
	long long west_product = calcWest(grid);
	long long east_product = calcEast(grid);
	long long north_west_product = calcNorthWest(grid);
	long long north_east_product = calcNorthEast(grid);
	long long south_west_product = calcSouthWest(grid);
	long long south_east_product = calcSouthEast(grid);

	// Get our max answer
	long long answers[] = {north_product, south_product, west_product, east_product, north_west_product, north_east_product, south_west_product, south_east_product};
	long long max_answer = 0;
	for(int i = 0; i < 8; i++){
		if(answers[i] > max_answer){
			max_answer = answers[i];
		}
	}
	std::cout << "Answer: " + std::to_string(max_answer) << std::endl;
	return 0;
}
