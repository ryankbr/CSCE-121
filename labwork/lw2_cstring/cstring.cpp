#include <iostream>
#include "cstring.h"

unsigned int length(char str[]) {
  // returns the length of the string including zero (0)
  int i; // index
  int length = 0; // holds the length
  for (i = 0; str[i] != '\0'; i++) {
    length++; // iterate through until the null char and add to length
  }

  return length;
}

unsigned int find(char str[], char character) {
  // returns 
  //  - the index of the first occurence of character in str
  //  - the size if the character is not found

  int i; // index

  for (i = 0; str[i] != '\0'; ++i) { // iterates through till null char

    if (str[i] == character) { // if character is found at index i return i
      return i;
    }
  }
  if (str[i] == '\0') {
    return length(str);
  }
  return 0;
}

bool equalStr(char str1[], char str2[]) {
  // returns true if they are equal and false if they are not

  int i = 0; // index

  if (str1[i] == '\0' && str2[i] == '\0') {
    return true;
  }

  while (str1[i] ^ str2[i]) {
    return false;
    i++;
    if (str1[i] == '\0' || str2[i] == '\0') {
      return false;
    }
  }

  return true;
}

