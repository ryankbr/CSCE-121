/*
* Pass by Reference Lab
* CS 121
*/
#include <iostream>
using namespace std;

/*
* Pass by Reference takes the address of an argument's memory and modifies the content. Use an & to denote pass by reference (example: function(int & x))
* Pass by Value creates a copy of an argument, and only modifies that memory.
*
* Implement function_one and its prototype in fn.h so that it takes two integer arguments i and j, adds 2 to i, adds 1 to j, but after execution of the function, only j is changed.
*/
#include "fn.h"
void function_one(int i, int& j)
{
	i += 2;
    j += 1;
}

/*
* Structures can also be passed by reference.
*
*
* Implement function_two and its prototype in fn.h so that it takes an argument of type example, and increments its' integer by 1. This change should persist after the function.
*/

void function_two(example& e)
{
    e.value += 1;
}

/*
* Remember, Pass by Reference works because you are taking the POINTER of an object and modifying the contents of the memory at that pointer.
*
*Implement function_three with the given arguments so that it increments both variables by one. Both changes must persist after the function call. DO NOT MODIFY THE FUNCTION ARGUMENTS.
*After you implement the function, go to main.cpp and call the function.
*
*Note, k is a pointer to a single integer, and is not intended to be an array.
*/


void function_three(int *k, int & l)
{
	*k += 1;
    l += 1;
}

/*
* Let's put everything together.
*
* Implement function_four so that it takes in four arguments: an integer array, an integer size that contains the size of the array, and two integers called lowest and highest. 
* Iterate through the array, increment every value by two, and then set the arguments lowest and highest to the lowest and highest values in the array. The changes to the array, lowest, and highest should persist after execution.
*
* Do not worry about overflow/underflow conditions
*/

void function_four(int arr[], int bingus, int& lowest, int& highest)
{
    for (int i = 0; i < bingus; ++i) {
        arr[i] += 2;
    }

    lowest = arr[0];
    for (int i = 1; i < bingus; ++i) {
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }

    highest = arr[0];
    for (int i = 1; i < bingus; ++i) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
}