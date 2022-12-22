#include <iostream>
using namespace std;

struct backQueue {
    char* array = nullptr;
    int capacity = 0;
    int size = 0;
};

/* If the array does not have the capacity for the new item, resize the array.
If array is nullptr, then the capacity should be one (1).
Otherwise, double the capacity.
Regardless, the new item should be added at the first index (0). So the other elements must be shifted to higher indexes.
Update size and capacity variables as needed. */
 
void push(backQueue& queue, char character) {
    // TODO: push()

    // cap == 1 if array == nullptr
    if (queue.array == nullptr) {
        queue.capacity = 1;
    }
    // else if the queue is full double the capacity
    else if (queue.size == queue.capacity) {
        queue.capacity *= 2;
        // allocate a temp array to hold values while doubling capacity
        char* temparray = new char[queue.capacity];

        // copy values over
        for (int i = 0; i < queue.size; i++) {
            temparray[i] = queue.array[i+1]; // shifts the variables over
        }

        delete[] queue.array; // deallocate old queue
        queue.array = nullptr; // remove dangling ptr
        queue.array = temparray; // make array point to temparray
    }
    
    queue.array[0] = character; // push to index 0 of queue
    queue.size++; // update size to reflect num of elements

}



/* Return the last element in the queue (the one with the highest index).
If there are no characters in the queue, then return the null character ('\0').
Update the size variable. */
 
char pop(backQueue& queue) {
    // TODO: pop()
    if (queue.size == 0) {
        return '\0'; // if queue empty return null char
    }
    else {
        queue.size--;
        int popped = queue.array[queue.size];
        return popped;
    }
}
 
int main() {
    backQueue q;
 
    push(q, 'a');
    std::cout << pop(q) << '\n';
 
    // OPTIONAL TODO: add more test cases
   
    delete[] q.array;
}