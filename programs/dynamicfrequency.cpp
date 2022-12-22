#include<iostream>
#include<algorithm>
using namespace std;

int* get_array_ordered_by_frequency(int* a, unsigned int size_a, unsigned int& new_array_size);

int main(){
    // reads n, the size of the array
    unsigned int size_a;
    cin >> size_a;
    int* a = new int[size_a];

    // reads in array elements up until the size_a
    for(int i = 0; i < size_a; i++)
        cin >> a[i];

    // call function to store the array ordered by frequency in int pointer b
    unsigned int new_array_size;
    int* b = get_array_ordered_by_frequency(a, size_a, new_array_size);

    // print out each element with a whitespave in between each element
    for(int i = 0; i < new_array_size; i++)
        cout << b[i] << " ";

    return 0;
}

/* returns the address of a dyanmically created array such as the new array 
contains the numbers that appear in a, ordered by frequency */
int* get_array_ordered_by_frequency(int* a, unsigned int size_a, unsigned int& new_array_size){

    // allocate memory and initialize a new array of size_a with zeroes
    int* b = new int[size_a];
    for (int i = 0; i < size_a; i++) {
        b[i] = 0;
    }

    // for each row keep a count of the frequency that a value appears
    for (int i = 0; i < size_a; i++) {
        for (int j = 0; j < size_a; j++) {
            if (a[i] == b[j]) {
                continue;
            }
            a[i] += 1;
        }
    }

    // 
    int iter = 0;
    for (int i = 0; i < size_a; i++) {
        if (b[i] == 0 {
            iter += 1;
        }
    }
    
    new_array_size = iter;

    int* c = new int[iter];




}