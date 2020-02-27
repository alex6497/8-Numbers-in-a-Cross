#include <iostream>
#include <cmath>
using namespace std;

/*Imagine a cross with 6 boxes from top to bottom 2x2 and 1 box on each center end. making 8 boxes total.

You may only input 1 number between one and eight. Each number can only appear once and its box cannot be next to its next or previous number's box vertically, horizontally, or diagonally.
*/
bool test(int cross[], int x) {
	static int checkList[8][5] = {
		{-1},
		{0,-1},
		{1,-1},
		{0,1,2,-1},
		{1,2,3,-1},
		{2,4,-1},
		{0,3,4,-1},
		{3,4,5,6,-1},
	};
	//fill in 
} 

void print(int cross[], int cap) {
	static int count = 0;
	cout << " Soultion number: " << ++count << endl;
	cout << " " << cross[1] << cross[2] << endl;
	cout << cross[0] << cross[3] << cross[4] << cross[5] << endl;
	cout << " " << cross[6] << cross[7] << endl;
	return;
}

int main() {
  //use the same 1d 8 queens main function
  
}
