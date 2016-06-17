#include <cstdlib>
#include <iostream>

using namespace std;

double findMedian(int *array, int size);
void selectionSort(int valid[], int size);

int main(int argc, char *argv[])
{
    int *array; //Pointer that holds array of integers
    int size; //Size of the array
    double median; //Median of the array
    
    //Asking for size of array
    cout << "How many integers do you want to enter?" << endl;
    cin >> size;
    cout << endl;
    
    //Dynamically allocating an array
    array = new int[size];
    
    //Asking for the integers to take the median of
    cout << "Enter the integers you want to take the median of." << endl;
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << endl;
        
    //Sorting the array so the median can be taken
    selectionSort(array, size);
    
    //Passing the sorted array to the median function
    median = findMedian(array, size);
    
    //Displaying the median
    cout << "The median is: " << median << "." << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

//Selection Sort Function
void selectionSort(int valid[], int size)
{
   int startScan, minIndex, minValue;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minValue = valid[startScan];
      for(int index = startScan + 1; index < size; index++)
      {
         if (valid[index] < minValue)
         {
            minValue = valid[index];
            minIndex = index;
         }
      }
      valid[minIndex] = valid[startScan];
      valid[startScan] = minValue;
   }
}

//Function that finds the median
double findMedian(int *array, int size)
{
    int position; //Position of the median
    double median; //Median of array
    
    if (size%2 == 0)
    {   
        position = size / 2;
        median = (*(array+position) + *(array+(position-1))) / 2.0;
    }
       
    else
    {
        position = size / 2;
        median = *(array+position);
    }
    
    //Returning the median
    return median;
}
