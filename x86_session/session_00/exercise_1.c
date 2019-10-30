#include <stdio.h>


int main(){
  int array[10];
  array[0] = 2;
  array[1] = 6;
  array[2] = 5;
  array[3] = 9;
  array[4] = 7;
  array[5] = 8;
  array[9] = 10;
  array[8] = 12;
  array[7] = 1;

  int meow = array[0] + array[7];
  return meow;
}

