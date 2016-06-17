#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    //Defining Variables
    ifstream infile; //Input File
    char name[80], InputLine[80];
    int go = 1;
    int Lines;
    
    //Asking for name of file
    cout << "Enter the file name: ";
	cin.getline(name, 80);
	infile.open(name);
	
	//Testing to see if file opened
	if (!infile)
	{
   		cout << "Error opening " << name << endl;
		return 0;
	}
	
	//Looping 24 lines at a time
    do
	{
        Lines = 1;
        
        while (!infile.eof() && Lines < 25)
        {
            infile.getline(InputLine, 80, '\n');
		    Lines++;
		    cout << InputLine << endl;
        }
        
        if (!infile.eof())
        {
            cout << endl << "Enter 1 if you want to display the next 24 lines." << endl;
            cin >> go;
            cout << endl << endl;
        }
    }
    while(go = 1 && !infile.eof());
    
    infile.close();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
