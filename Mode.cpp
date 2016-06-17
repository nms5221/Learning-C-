#include <cstdlib>
#include <iostream>

using namespace std;

int findMode(int *array, int size);

int main(int argc, char *argv[])
{
    int mode; //Mode of the array
    int size; //Size of array
    int *arrayptr; //Pointer that will hold an array of integers
    
    //Asking user how many numbers they will be entering
    cout << "How many integers do you want to enter?" << endl;
    cin >> size;
    
    //Dynamically allocating an array
    arrayptr = new int[size];
    
    //Asking the user to input the intergers they want to find the mode of
    cout << "Enter the integers you want to find the mode of:" << endl;
    for (int i = 0; i < size; i++)
        cin >> arrayptr[i];
    cout << endl;
    
    //Finding the mode of the array
    mode = findMode(arrayptr, size); 
    
    //Displaying the mode
    if (mode != -1)
       cout << "The mode is: " << mode << "." << endl << endl;
    if (mode == -1)
       cout << "There is no mode." << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

//Function that will find the mode of a set of integers
int findMode(int *array, int size)
{
    int assumeMode; //Assuming a number is the mode
    int mode; //Mode of the array
    int count; //Used to find the number of times an integer occurs
    int maxcounter = 1; //Maximum number of times an integer occurs
    
    //Looping through to check each value
    for (int i = 0; i < size; i++)
    {
        //Assuming the first value is the mode
        assumeMode = array[i];
        count = 1;
        
        //Looping to find if other values are equal to the original
        for (int j = i + 1; j < size; j++)
        {
            //If numbers are equal, count goes up
            if (assumeMode == array[j])
            {
                count++;
            }
        }
        
        //Checking if number appears the most often
        if (count > maxcounter)
        {
            maxcounter = count;
            mode = assumeMode;
        }
    }
    
    //Returning -1 if there is no mode
    if (maxcounter == 1)
       mode = -1;
    
    //Returning the mode
    return mode;
}
