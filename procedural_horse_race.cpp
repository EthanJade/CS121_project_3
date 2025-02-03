#include <iostream>
#include <cstdlib>
#include <random>

std::random_device rd;
std:: uniform_int_distribution<int> dist(0, 1);
int coin = dist(rd);

bool keepGoing = true;
int trackLength = 15;

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	std::cout << "Welcome to the Races!" << std::endl;
	int horses[5] = {0};
	int horseNum = 0;
	printLane(horseNum, horses);
	//while (keepGoing == true){
		//advance(horseNum, horses);
		//printLane();
		//isWinner();
		
//	}

}
//advance works :)
void advance(int horseNum, int* horses){
	if (coin == 1){
		horses[horseNum]++;
		//keepGoing = false;
	}

}

void printLane(int horseNum, int* horses){
	char track[trackLength] = {"."};
	int i = 0;
	track[6] = "0" ;
	for (i = 0; i < trackLength; i++){
		std::cout << track[i] << " ";
	}std::cout << std::endl;

}

/*bool isWinner(){
	

}*/	

