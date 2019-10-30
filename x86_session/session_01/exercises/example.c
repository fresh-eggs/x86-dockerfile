#include <stdio.h>
int main() {
  int im_a_stack_var = 2;
  printf("This is the stack var addr: 0x%x, This is the value: %d\n", &im_a_stack_var, im_a_stack_var);
  return 0;  
}
