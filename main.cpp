#include <iostream>
#include <cmath>
using namespace std;

/*Imagine a cross with 6 boxes from top to bottom 2x2 and 1 box on each center end. making 8 boxes total.

You may only input 1 number between one and eight. Each number can only appear once and its box cannot be next to its next or previous number's box vertically, horizontally, or diagonally.
*/
bool test(int cross[], int x) {
	static int checkList[8][5] = {
		{-1},//box 0
		{0,-1},//box 1
		{1,-1},//box 2
		{0,1,2,-1},//box 3
		{1,2,3,-1},//box 4
		{2,4,-1},//box 5
		{0,3,4,-1},//box 6
		{3,4,5,6,-1},//box 7
	};
	for(int i = 0; i < x; i++){
    if(cross[i] == cross[x])
      return false;
  }
  for (int i=0 ;  checkList[x][i]!=-1 ; i++){
      if (abs (cross[x]- cross[(checkList[x][i])]) == 1) 
        return false;
  }
  return true;
}
void backtrack(int a[], int& c){
  c--;
  if (c < 0) return;
  a[c]++;
  if (a[c] == 9) backtrack(a, c);
}

void print(int cross[], int cap) {
	static int count = 0;
	cout << "Solution number: " << ++count << endl;
	cout << " " << cross[1] << cross[2] << endl;
	cout << cross[0] << cross[3] << cross[4] << cross[5] << endl;
	cout << " " << cross[6] << cross[7] << endl;
  cout << endl;
	return;
}

int main() {
  int cross[8] = {0};
  int box = 0;
  cross[0] = 1;
  
  int solutions = 0;
  while (box > -1)
  {
    if (box == 8)
    {
      solutions++;
      print(cross, box);
      backtrack(cross, box);
    }
    else if (cross[box] == 9) backtrack(cross, box);
    else if (test(cross, box) == true)
    {
      box++;
      if (box < 9) cross[box] = 1;
    }
    else cross[box]++;
  }
  
}
