#include <cstdlib>
#include <iostream>

using namespace std;

int askUser();
int isPrime(int num);

int main(int argc, char *argv[])
{
    //Declaring Variables
    int userEnter; //Number that user enters
   
    //Calling Functions
    userEnter = askUser();
    isPrime(userEnter);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

//Function asking for user input
int askUser()
{
    int userEnter; //Number that user enters
    
    //Asking for input
    cout << "Enter an integer." << endl;;
    cin >> userEnter;
    
    //Returning the entered number
    return userEnter;
}

//Function that checks if a number is prime or not
int isPrime(int num)
{
    //Declaring Variables
    bool prime = true; //Used for testing
    int i; //Used for loop
  
    //One is not a prime number
    if (num == 1)
    {
        cout << "The entered number is not prime." << endl << endl;
        return EXIT_SUCCESS;
    }
    
    //Testing any number that is not one
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }
    
    //Displaying the result
    if (prime)
    cout << "The entered number is prime." << endl << endl;
    else
    cout << "The entered number is not prime." << endl << endl;
}
