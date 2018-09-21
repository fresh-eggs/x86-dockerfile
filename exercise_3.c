#include <string.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct {
  char name[5];
  int  animal_count;
} animal;

int main(){
  animal animal_1;
  animal_1.animal_count = 1;
  strcpy(animal_1.name, "cat");
  return 0;
}
