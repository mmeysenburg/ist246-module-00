#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

/**
 * Program to analyze the frequency of each number in PowerBall lottery
 * drawings.
 *
 * \authors <your name here>
 * \date <date code was authored>
 */
int main() {
	using namespace std;
	
	// allocate memory for counts
	int* counts = new int[60];
	for(unsigned i = 0u; i < 60u; i++) {
		counts[i] = 0;
	}
	
	// open input file
	ifstream inFile;
	inFile.open("numbers.txt");
	
	// read numbers, one line at a time
	int b1, b2, b3, b4, b5, b6;
	while( inFile >> b1 ) {
		inFile >> b2;
		inFile >> b3;
		inFile >> b4;
		inFile >> b5;
		inFile >> b6;

		// TODO: replace this output code with your code to count
		// the frequency of each number
		cout << "placeholder output -- replace with counting code!" << endl;
	}

	inFile.close();

	// TODO: output the frequency for each number, as described in the
	// assignment
	cout << "placeholder outout -- replace with output of counts!" << endl;

	delete [] counts;

	return EXIT_SUCCESS;
}
