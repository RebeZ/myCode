//----------------------------------
//---------compress.cpp-------------
//----------------------------------

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//--------------------------------functions---------------------------------

// opens a text file inputFiles, reads in its content lines by line, stores
// these in a string vec named text and return it
vector<string> readInFile(const string& inputFile){
	// initialize local var
	ifstream myFile;
	myFile.open(inputFile);
	string line = "";		// each line
	vector<string> text;	// text of whole file

	// reading inputFile line by line
	while (getline(myFile, line)){
		text.push_back(line);
	}
	return text;
	myFile.close();
}

// write strings in a vector to parameter file
void writeToFile(const string& outputFile, const vector<string> outputText)
{
	// initialize local var
	ofstream myFile;
	myFile.open(outputFile);
	string line = "";		// each line
	vector<string> text;	// text of whole file

	// write outputText content to outputFile line by line
	for(int i = 0; i < outputText.size(); i++){
		myFile.write ( "" << outputText.at(i) << "\n", 5);		// write int + newline, 5 bytes per line
	}

	myFile.close();
}
//--------------------------------------------------------------------------

//---------------------------main starts here-------------------------------
int main( int argc, char** argv )
{
	// initialize local var
	string inputFileName(argv[1]);	// cmd input file
	string outputFileName(argv[2]);	// cmd output file
	vector<string> inputFile;		// store input content
	vector<string> compCode;		// store compressed Huffman code

	// get file content
	inputFile = readInFile(inputFileName);


	//TODO construct Huffman code for input file


	//TODO use these code to construct a compressed file(output file)


	// write compressed huffman to file
	writeToFile(outputFileName, compCode);


}
