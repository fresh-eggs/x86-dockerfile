#include <stdio.h>


int first_function(int meow){
  int woof = meow + 1;
  return woof;
}

int main(){
  int dogs = 9;  
  int cats = first_function(dogs);
  return cats;
}
