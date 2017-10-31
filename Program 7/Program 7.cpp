/*
program7.cpp
Dyllan Uplinger
J633V226
Homework #07
Bubble Sort
Copyright 2017
*/

/*
Gather 6 Words
Store in string
End if 0 found
Bubble Sort Alphabetic
Print String
*/

#include "stdafx.h"
#include <cstring>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

const int numWords = 10;
void bubbleSort(string words[], int num);

int main() {
  //string words[numWords];
  /* for (int i = 0; i < 6; i++) {
    do {
      cout << "Enter a Word: ";
      cin >> words;
      cout << "\n";
    } while (!= 0);
    bubbleSort(words[a], numWords);
    cout >> words;
    */
  string words[6] = { "orange", "apple", "mango", "lemon", "guava", "strawberry" };
  bubbleSort(words, 6);
  for (int i = 0; i<6; i++)
    cout << words[i] << std::endl;
  return 0;
}
void bubbleSort(string words[], int num) {
  bool swapped = true;
  int j = 0;
  string tmp;

  while (swapped) {
    swapped = false;
    j++;
    for (int i = 0; i < num - j; i++) {
      if (words[i].compare(words[i + 1])) {
        tmp = words[i];
        words[i] = words[i + 1];
        words[i + 1] = tmp;
        swapped = true;
      }
    }
  }
}
