/** @file program.cc */
#include <iostream>
#include <fstream>
using namespace std;

/* @brief Goes thru a file counting all chars
 * @param file - file that contains the information
 * @return the number of chars in the file
*/
int getChars(char *file) {
	ifstream in;
	in.open(file);
	int count = 0;
	char c;
	while(in.get(c)) {
		count++;
	}
	in.close();
	return count;
}
/* @brief Goes thru a file counting all the times a new line character is encounterd
 * @paramfile - that contains the information
 * @return the number of lines in the file
*/
int getLines(char *file) {
	ifstream in;
	in.open(file);
	char c;
	int count = 0;

	while(in.get(c)) {
		if(c == '\n') {
			count++;
		}
	}
	in.close();
	return count;
}

/* @brief Finds out how many characters and lines there are in a fiile
 * @param argc - argc is the number of files
 * @param argv - argv is the names of thje files
 * @return 0 when done
*/
int main(int argc, char** argv) 
{
	int chars, lines;

	if(argc == 1) {
		chars = getChars(argv[1]);
		lines = getLines(argv[1]);
	}
	else {
		chars = getChars("ohio.txt");
		lines = getLines("athens.txt");
	}

	cout << chars << " Characters\t" << lines << " Lines." << endl;

	//::testing::InitGoogleTest(&argc, argv);
	//return RUN_ALL_TESTS();


	return 0;
}