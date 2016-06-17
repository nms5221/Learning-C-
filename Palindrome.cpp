#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    //Declaring Variables
    string str1, str2; //Forward and backward string
    char letter; //Letter at a certain spot
    
    //Asking for the word to check
    cout << "Enter the word you want to check to see if it is a palindrome." << endl;
    cin >> str1;
    
    //Declaring a counter for the "for" loop
    int count; 
    count = str1.length() - 1;

    //This loop will take the inputted word and flip it backwards
    for (int i = 0; i < str1.length(); i++)
    {        
        letter = str1.at(count);
        str2.insert(i,1,letter);
        
        count--;
    }
    
    //Check to see if the backwards word equals the forwards word
    if (str1 == str2)
    cout << "You have entered a palindrome." << endl << endl;
    else
    cout << "You have not entered a palindrome." << endl << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
