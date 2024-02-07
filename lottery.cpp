#include <iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()


using namespace std;
int main()
{
const int row=5;
const int column=10;
/*int rnum;*/
double table[row][column]; 
	
	/*srand(time(0));  // Initialize random number generator.
    rnum = (rand() % 50) + 1;
	if (rnum>1 && rnum <100)*/
	for(int r=0; r<row; r++)
	{ for(int c=0; c<column;c++)
		{ cout << table[row][column];
		}
	}




		system("pause");
		return 0;
}