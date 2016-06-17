#include <cstdlib>
#include <iostream>
#include <fstream>

//This program encrypts a message by adding 10 to the ASCII code of each character

using namespace std;

int main(int argc, char *argv[])
{
    //File Variable
    ifstream inputFile;
    ofstream outputFile ("output.txt");
    
    //Other Variables
    char character;
    char name[80];
    
    // Get the name of the file to be encrypted
	cout << "Enter the name of the file to be encrypted: ";
	cin.getline(name, 80);
	inputFile.open(name);
    
	// Making sure file was opened
    if (!inputFile)
	{
   		cout << "Error opening input file." << endl;
   		system ("PAUSE");
		return 0;
	}
	//If file was opened, displaying a success message
	else
	{
   		cout << endl << "File has been encrypted." << endl << endl;
	}
	
	//Loop that will go until the end of file marker in the input file
    while (!inputFile.eof())
	{
        //Getting the character from the input file, adding ten, and putting it in output file
        inputFile >> character;
	    character += 10;
	    outputFile << character;
    }
    
    // Closing files
    inputFile.close();
    outputFile.close();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
