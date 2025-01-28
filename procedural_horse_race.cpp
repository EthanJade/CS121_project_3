#include <iostream>
#include <cstdlib>
#include <random>

std::random_device rd;
std:: uniform_int_distribution<int> dist(0, 1);
int coin = dist(rd)
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	std::cout << "Welcome to the Races!" << std::endl;
	int horses[] = (0, 0, 0, 0, 0);
	bool keepGoing = true;
	printLane();
	while keepGoing == true{
		advance(horseNum, horses);
		//printLane();
		//isWinner();
		std:: << horses << std::endl;


}

void advance(int horseNum, int* horses){
	if (coin == 1){
		horses[horseNum]++;
	}

}
/*
void printLane(int horseNum){
	char track[] = (...............);
	std::cout << track << std::endl;

}

bool isWinner(){
	

}*/	

