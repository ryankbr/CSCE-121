#include "functions.h"
using std::cin, std::cout, std::endl, std::ostream, std::string;

#define INFO(X)  cout << "[INFO] ("<<__FUNCTION__<<":"<<__LINE__<<") " << #X << " = " << X << endl;
#define INFO_STRUCT(X) cout << "[INFO] ("<<__FUNCTION__<<":"<<__LINE__<<") " << #X << " count = " << X.count << endl;

/**
 * ----- REQUIRED -----
 * Pushes number to top of stack. If stack is full, then resize stack's array.
 * @param   stack   Target stack.
 * @param   number  Number to push to stack.
 */
void push(Stack& stack, int number) {
  // TODO: implement push function for stack
  INFO_STRUCT(stack);
  INFO(number);

  // if stack's capacity is maxed...
  if(stack.count == stack.capacity) {
    // make a temporary pointer to an array of double the size
    stack.capacity *= 2;
    int* doubledArray = new int[stack.capacity];

    // copy og values to the new doubledArray for each element in the OG array
    for (int i = 0; i < stack.count; i++) {
      doubledArray[i] = stack.numbers[i];
    }
  
  // make the OG pointer point to the doubledArray
  
  // deallocate the memory when done and remove dangling pointer
  delete[] stack.numbers;
  stack.numbers = nullptr;
  stack.numbers = doubledArray;

  }

  // push to the stack if the array has capacity left
  stack.numbers[stack.count] = number;
  // increment so you're always on the last index; starts at 0 so it pushes to index 0 then counts to 1
  stack.count++;

}

/**
 * ----- REQUIRED -----
 * Pops number from top of stack. If stack is empty, return INT32_MAX.
 * @param   stack   Target stack.
 * @return          Value of popped number.
 */
int pop(Stack& stack) {
  // TODO: implement pop function for stack
  INFO_STRUCT(stack);
  if (stack.count == 0) {
    return INT32_MAX;
  }
  stack.count--;
  int num = stack.numbers[stack.count];
  return num;

}

/**
 * ----- OPTIONAL -----
 * Returns the number at top of stack without popping it. If stack is empty, return INT32_MAX.
 * @param   stack   Target statck.
 * @return          Number at top of stack.
 */
int peek(const Stack& stack) {
  // TODO (optional): implement peek function for stack
  INFO_STRUCT(stack);

  if (stack.count == 0) {
    return INT32_MAX;
  }
  return stack.numbers[stack.count - 1];
  
}